# Class Note: Managing Routes for Multiple Resources with Express.js and MongoDB

## Course: MERN Backend Development
**Instructor**: Joe Odufu Ekowoicho 
**Topic**: Express.js Routes for Multiple Resources  
**Date**: [16th, April 2025]  
**Duration**: 2 Hours  

---

## Learning Objectives
By the end of this lesson, students will be able to:
1. Understand how to structure routes for multiple resources in an Express.js API.
2. Implement CRUD routes for different resources (`users` and `products`) using Mongoose.
3. Handle inputs (`req.body`, `req.query`, `req.params`) for resource-specific operations.
4. Organize routes modularly to improve code scalability.
5. Apply best practices for API responses and error handling with MongoDB.

---

## 1. Introduction to Multi-Resource APIs
### What is a Multi-Resource API?
- A RESTful API often manages multiple **resources** (e.g., `users`, `products`, `orders`).
- Each resource has its own **routes** (e.g., `/users`, `/products`) for CRUD operations:
  - **C**reate: POST (e.g., `POST /users`).
  - **R**ead: GET (e.g., `GET /users`, `GET /users/:id`).
  - **U**pdate: PUT (e.g., `PUT /users/:id`).
  - **D**elete: DELETE (e.g., `DELETE /users/:id`).
- Resources are stored in separate MongoDB **collections** (e.g., `users`, `products`).

### Why Multiple Resources?
- Real-world applications manage diverse data (e.g., an e-commerce app needs users, products, and orders).
- Modular routes improve code organization and scalability.

### Connection to Previous Lesson
- In the last class [Memory: April 16, 2025], you built a CRUD API for `users` using an in-memory array. We’ll extend this to use a **local MongoDB** database and add routes for a second resource, `products`, with modular organization.

---

## 2. Project Setup
### Prerequisites (Assignment)
- **Install Local MongoDB**: Complete the MongoDB installation as assigned homework.
  - Download MongoDB Community Server from [mongodb.com/try/download/community](https://www.mongodb.com/try/download/community).
  - Follow OS-specific instructions (Windows, macOS, Linux).
  - Start MongoDB with `mongod` and ensure it runs on `mongodb://localhost:27017`.
  - Submission: Screenshot of `mongo` shell or MongoDB Compass connected to `localhost:27017`.
- **Node.js Project**: Create a new project or reuse the previous one:
  ```bash
  mkdir express-multi-resource
  cd express-multi-resource
  npm init -y
  npm install express mongoose dotenv
  ```

### Environment Variables
Create a `.env` file for configuration:
```
MONGO_URI=mongodb://localhost:27017/mern_db
PORT=3000
```

### Directory Structure
Organize the project for modularity:
```
express-multi-resource/
├── routes/
│   ├── users.js
│   ├── products.js
├── models/
│   ├── User.js
│   ├── Product.js
├── .env
├── index.js
```

---

## 3. Connecting to Local MongoDB
We’ll use **Mongoose** to connect to the local MongoDB database, setting the foundation for resource routes.

### Base Server (`index.js`)
```javascript
const express = require("express");
const mongoose = require("mongoose");
require("dotenv").config();

const app = express();
const port = process.env.PORT || 3000;

// Middleware
app.use(express.json());

// MongoDB connection
const mongoURI = process.env.MONGO_URI || "mongodb://localhost:27017/mern_db";
mongoose.connect(mongoURI, { useNewUrlParser: true, useUnifiedTopology: true })
  .then(() => console.log("Connected to local MongoDB"))
  .catch((err) => console.error("MongoDB connection error:", err));

// Routes
app.use("/users", require("./routes/users"));
app.use("/products", require("./routes/products"));

// Test route
app.get("/", (req, res) => {
  res.json({ status: "success", message: "Welcome to the Multi-Resource API!" });
});

// Error handling middleware
app.use((err, req, res, next) => {
  console.error(err.stack);
  res.status(500).json({
    status: "error",
    message: "Something went wrong on the server",
  });
});

// Start the server
app.listen(port, () => {
  console.log(`Server running at http://localhost:${port}`);
});
```

### Explanation
- **dotenv**: Loads `MONGO_URI` and `PORT` from `.env`.
- **mongoose.connect**: Connects to `mongodb://localhost:27017/mern_db`.
- **Routes**: Mounted at `/users` and `/products` using modular files.
- **Error Handling**: Catches unexpected errors.

---

## 4. Defining Mongoose Models
Each resource needs a **schema** and **model** to define its structure and interact with MongoDB.

### User Model (`models/User.js`)
```javascript
const mongoose = require("mongoose");

const userSchema = new mongoose.Schema({
  name: { type: String, required: true },
  email: { type: String, required: true, unique: true, match: /^\S+@\S+\.\S+$/ },
  role: { type: String, enum: ["user", "admin"], default: "user" },
}, { timestamps: true });

module.exports = mongoose.model("User", userSchema);
```

### Product Model (`models/Product.js`)
```javascript
const mongoose = require("mongoose");

const productSchema = new mongoose.Schema({
  name: { type: String, required: true },
  price: { type: Number, required: true, min: 0 },
  category: { type: String, enum: ["electronics", "clothing", "books"], required: true },
}, { timestamps: true });

module.exports = mongoose.model("Product", productSchema);
```

### Explanation
- **User Schema**: Matches the previous lesson’s structure (`name`, `email`, `role`).
- **Product Schema**: Defines `name`, `price`, and `category` with validation.
- **Timestamps**: Adds `createdAt` and `updatedAt` for both models.

---

## 5. Routes for Multiple Resources
We’ll create CRUD routes for `users` and `products`, organized in separate files for modularity. Each resource uses the same input methods (`req.body`, `req.query`, `req.params`) and response structure (`{ status, message, data }`) as the previous lesson.

### 5.1. User Routes (`routes/users.js`)
#### Purpose
Manage CRUD operations for the `users` resource, similar to the previous lesson but with MongoDB.

#### Code Example
```javascript
const express = require("express");
const router = express.Router();
const User = require("../models/User");

// CREATE: Add a new user (req.body)
router.post("/", async (req, res) => {
  try {
    const { name, email, role } = req.body;
    const newUser = new User({ name, email, role });
    await newUser.save();
    res.status(201).json({
      status: "success",
      message: "User created successfully",
      data: newUser,
    });
  } catch (error) {
    if (error.name === "ValidationError") {
      return res.status(400).json({ status: "error", message: error.message });
    }
    if (error.code === 11000) {
      return res.status(400).json({ status: "error", message: "Email already exists" });
    }
    res.status(500).json({ status: "error", message: "Server error" });
  }
});

// READ: Get all users with optional filtering (req.query)
router.get("/", async (req, res) => {
  try {
    const { role } = req.query;
    const query = role ? { role: role.toLowerCase() } : {};
    const users = await User.find(query);
    res.status(200).json({
      status: "success",
      message: users.length > 0 ? "Users retrieved successfully" : "No users found",
      data: users,
      total: users.length,
    });
  } catch (error) {
    res.status(500).json({ status: "error", message: "Server error" });
  }
});

// READ: Get a single user by ID (req.params)
router.get("/:id", async (req, res) => {
  try {
    const { id } = req.params;
    const user = await User.findById(id);
    if (!user) {
      return res.status(404).json({ status: "error", message: `User with ID ${id} not found` });
    }
    res.status(200).json({
      status: "success",
      message: "User retrieved successfully",
      data: user,
    });
  } catch (error) {
    if (error.name === "CastError") {
      return res.status(400).json({ status: "error", message: "Invalid user ID" });
    }
    res.status(500).json({ status: "error", message: "Server error" });
  }
});

// UPDATE: Update a user by ID (req.body, req.params)
router.put("/:id", async (req, res) => {
  try {
    const { id } = req.params;
    const { name, email, role } = req.body;
    const user = await User.findByIdAndUpdate(
      id,
      { name, email, role },
      { new: true, runValidators: true }
    );
    if (!user) {
      return res.status(404).json({ status: "error", message: `User with ID ${id} not found` });
    }
    res.status(200).json({
      status: "success",
      message: "User updated successfully",
      data: user,
    });
  } catch (error) {
    if (error.name === "ValidationError") {
      return res.status(400).json({ status: "error", message: error.message });
    }
    if (error.code === 11000) {
      return res.status(400).json({ status: "error", message: "Email already exists" });
    }
    if (error.name === "CastError") {
      return res.status(400).json({ status: "error", message: "Invalid user ID" });
    }
    res.status(500).json({ status: "error", message: "Server error" });
  }
});

// DELETE: Delete a user by ID (req.params)
router.delete("/:id", async (req, res) => {
  try {
    const { id } = req.params;
    const user = await User.findByIdAndDelete(id);
    if (!user) {
      return res.status(404).json({ status: "error", message: `User with ID ${id} not found` });
    }
    res.status(200).json({
      status: "success",
      message: "User deleted successfully",
      data: user,
    });
  } catch (error) {
    if (error.name === "CastError") {
      return res.status(400).json({ status: "error", message: "Invalid user ID" });
    }
    res.status(500).json({ status: "error", message: "Server error" });
  }
});

module.exports = router;
```

#### Explanation
- **Router**: Uses `express.Router()` for modular routes, mounted at `/users`.
- **Inputs**:
  - `req.body`: For POST and PUT (e.g., `{ "name": "Alice" }`).
  - `req.query`: For GET filtering (e.g., `?role=admin`).
  - `req.params`: For GET, PUT, DELETE by ID (e.g., `/users/:id`).
- **Validation**: Mongoose schema handles validation (e.g., required `email`).
- **Responses**: Consistent `{ status, message, data }` structure.

#### Testing
1. **Create User**:
   ```bash
   curl -X POST http://localhost:3000/users \
   -H "Content-Type: application/json" \
   -d '{"name":"Alice","email":"alice@example.com","role":"user"}'
   ```
   **Response** (201):
   ```json
   {
     "status": "success",
     "message": "User created successfully",
     "data": {
       "_id": "507f1f77bcf86cd799439011",
       "name": "Alice",
       "email": "alice@example.com",
       "role": "user",
       ...
     }
   }
   ```

2. **Get Users (Filter by Role)**:
   ```bash
   curl http://localhost:3000/users?role=admin
   ```
   **Response** (200):
   ```json
   {
     "status": "success",
     "message": "No users found",
     "data": [],
     "total": 0
   }
   ```

3. **Get User by ID**:
   ```bash
   curl http://localhost:3000/users/507f1f77bcf86cd799439011
   ```
   **Response** (200):
   ```json
   {
     "status": "success",
     "message": "User retrieved successfully",
     "data": { "_id": "507f1f77bcf86cd799439011", "name": "Alice", ... }
   }
   ```

---

### 5.2. Product Routes (`routes/products.js`)
#### Purpose
Manage CRUD operations for the `products` resource, representing items in an e-commerce context.

#### Code Example
```javascript
const express = require("express");
const router = express.Router();
const Product = require("../models/Product");

// CREATE: Add a new product (req.body)
router.post("/", async (req, res) => {
  try {
    const { name, price, category } = req.body;
    const newProduct = new Product({ name, price, category });
    await newProduct.save();
    res.status(201).json({
      status: "success",
      message: "Product created successfully",
      data: newProduct,
    });
  } catch (error) {
    if (error.name === "ValidationError") {
      return res.status(400).json({ status: "error", message: error.message });
    }
    res.status(500).json({ status: "error", message: "Server error" });
  }
});

// READ: Get all products with optional filtering (req.query)
router.get("/", async (req, res) => {
  try {
    const { category } = req.query;
    const query = category ? { category: category.toLowerCase() } : {};
    const products = await Product.find(query);
    res.status(200).json({
      status: "success",
      message: products.length > 0 ? "Products retrieved successfully" : "No products found",
      data: products,
      total: products.length,
    });
  } catch (error) {
    res.status(500).json({ status: "error", message: "Server error" });
  }
});

// READ: Get a single product by ID (req.params)
router.get("/:id", async (req, res) => {
  try {
    const { id } = req.params;
    const product = await Product.findById(id);
    if (!product) {
      return res.status(404).json({ status: "error", message: `Product with ID ${id} not found` });
    }
    res.status(200).json({
      status: "success",
      message: "Product retrieved successfully",
      data: product,
    });
  } catch (error) {
    if (error.name === "CastError") {
      return res.status(400).json({ status: "error", message: "Invalid product ID" });
    }
    res.status(500).json({ status: "error", message: "Server error" });
  }
});

// UPDATE: Update a product by ID (req.body, req.params)
router.put("/:id", async (req, res) => {
  try {
    const { id } = req.params;
    const { name, price, category } = req.body;
    const product = await Product.findByIdAndUpdate(
      id,
      { name, price, category },
      { new: true, runValidators: true }
    );
    if (!product) {
      return res.status(404).json({ status: "error", message: `Product with ID ${id} not found` });
    }
    res.status(200).json({
      status: "success",
      message: "Product updated successfully",
      data: product,
    });
  } catch (error) {
    if (error.name === "ValidationError") {
      return res.status(400).json({ status: "error", message: error.message });
    }
    if (error.name === "CastError") {
      return res.status(400).json({ status: "error", message: "Invalid product ID" });
    }
    res.status(500).json({ status: "error", message: "Server error" });
  }
});

// DELETE: Delete a product by ID (req.params)
router.delete("/:id", async (req, res) => {
  try {
    const { id } = req.params;
    const product = await Product.findByIdAndDelete(id);
    if (!product) {
      return res.status(404).json({ status: "error", message: `Product with ID ${id} not found` });
    }
    res.status(200).json({
      status: "success",
      message: "Product deleted successfully",
      data: product,
    });
  } catch (error) {
    if (error.name === "CastError") {
      return res.status(400).json({ status: "error", message: "Invalid product ID" });
    }
    res.status(500).json({ status: "error", message: "Server error" });
  }
});

module.exports = router;
```

#### Explanation
- **Router**: Mounted at `/products` for modularity.
- **Inputs**:
  - `req.body`: For POST and PUT (e.g., `{ "name": "Laptop", "price": 999.99 }`).
  - `req.query`: For GET filtering (e.g., `?category=electronics`).
  - `req.params`: For GET, PUT, DELETE by ID (e.g., `/products/:id`).
- **Validation**: Mongoose schema ensures `price` is positive, `category` is valid.
- **Responses**: Matches the `users` routes for consistency.

#### Testing
1. **Create Product**:
   ```bash
   curl -X POST http://localhost:3000/products \
   -H "Content-Type: application/json" \
   -d '{"name":"Laptop","price":999.99,"category":"electronics"}'
   ```
   **Response** (201):
   ```json
   {
     "status": "success",
     "message": "Product created successfully",
     "data": {
       "_id": "507f1f77bcf86cd799439012",
       "name": "Laptop",
       "price": 999.99,
       "category": "electronics",
       ...
     }
   }
   ```

2. **Get Products (Filter by Category)**:
   ```bash
   curl http://localhost:3000/products?category=electronics
   ```
   **Response** (200):
   ```json
   {
     "status": "success",
     "message": "Products retrieved successfully",
     "data": [
       { "_id": "507f1f77bcf86cd799439012", "name": "Laptop", ... }
     ],
     "total": 1
   }
   ```

3. **Get Product by ID**:
   ```bash
   curl http://localhost:3000/products/507f1f77bcf86cd799439012
   ```
   **Response** (200):
   ```json
   {
     "status": "success",
     "message": "Product retrieved successfully",
     "data": { "_id": "507f1f77bcf86cd799439012", "name": "Laptop", ... }
   }
   ```

---

## 6. Testing the Full API
1. Ensure MongoDB is running locally (`mongod` or as a service).
2. Set up the project with the directory structure, `.env`, and code files.
3. Run the server:
   ```bash
   node index.js
   ```
4. Use **Postman** or **curl** to test `/users` and `/products` endpoints.
5. Test error cases (e.g., duplicate `email`, invalid `category`, invalid ID).

---

## 7. Best Practices Recap
- **Modular Routes**: Use `express.Router` and separate files for each resource.
- **Validation**: Leverage Mongoose schemas for input validation.
- **Responses**: Maintain `{ status, message, data }` for consistency.
- **Error Handling**: Catch specific errors (e.g., `ValidationError`, `CastError`).
- **Environment Variables**: Secure `MONGO_URI` in `.env`.

---

## 8. Practical Exercise
**Task**: Add routes for a new `orders` resource to the API.

### Requirements
1. Create an `Order` schema in `models/Order.js` with fields:
   - `userId`: Reference to a `User` (use `mongoose.Schema.Types.ObjectId`, `ref: "User"`).
   - `productId`: Reference to a `Product` (use `ObjectId`, `ref: "Product"`).
   - `quantity`: Required positive number.
   - `status`: Enum ("pending", "shipped", "delivered"), default "pending".
2. Create CRUD routes in `routes/orders.js`:
   - **POST /orders**: Create an order (`req.body` with `userId`, `productId`, `quantity`).
   - **GET /orders**: List orders, filter by `status` (`req.query`).
   - **GET /orders/:id**: Get an order (`req.params`).
   - **PUT /orders/:id**: Update an order (`req.body`, `req.params`).
   - **DELETE /orders/:id**: Delete an order (`req.params`).
3. Validate inputs using Mongoose (e.g., ensure `userId` and `productId` exist).
4. Use `{ status, message, data }` response format.
5. Test all routes with Postman or curl.

### Starter Code (`models/Order.js`)
```javascript
const mongoose = require("mongoose");

const orderSchema = new mongoose.Schema({
  userId: { type: mongoose.Schema.Types.ObjectId, ref: "User", required: true },
  productId: { type: mongoose.Schema.Types.ObjectId, ref: "Product", required: true },
  quantity: { type: Number, required: true, min: 1 },
  status: { type: String, enum: ["pending", "shipped", "delivered"], default: "pending" },
}, { timestamps: true });

module.exports = mongoose.model("Order", orderSchema);
```

### Starter Code (`routes/orders.js`)
```javascript
const express = require("express");
const router = express.Router();
const Order = require("../models/Order");
const User = require("../models/User");
const Product = require("../models/Product");

router.post("/", async (req, res) => {
  // Add logic, including validation of userId and productId
});

module.exports = router;
```

### Submission
- Submit updated `index.js`, `models/Order.js`, `routes/orders.js`, and `.env`.
- Include screenshots of three successful API calls for `/orders` (e.g., POST, GET, DELETE).

---

## 9. Additional Tips for Production
- **Route Prefixing**: Use consistent prefixes (e.g., `/api/v1/users`) for versioning.
- **Middleware**: Add authentication middleware for protected routes (next lesson).
- **Validation Libraries**: Use `express-validator` for complex input checks.
- **Logging**: Use `morgan` for request logging.
- **Indexes**: Add MongoDB indexes on frequently queried fields (e.g., `email`, `category`).

---

## 10. Q&A and Discussion
- Why separate routes into different files?
- How would you validate `userId` and `productId` in the `orders` routes?
- What’s the benefit of using Mongoose’s `ref` for `ObjectId`?
- How would you add pagination to GET `/products`?

---

## 11. References
- Mongoose Documentation: [mongoosejs.com](https://mongoosejs.com)
- Express.js Documentation: [expressjs.com](https://expressjs.com)
- MongoDB Documentation: [mongodb.com/docs](https://www.mongodb.com/docs)
- Dotenv Documentation: [npmjs.com/package/dotenv](https://www.npmjs.com/package/dotenv)

---

## Connection to Previous Lessons
This lesson builds on the Express.js CRUD API from our last session [Memory: April 16, 2025], where you created a `users` API with in-memory data. We’ve transitioned to a **local MongoDB** database, introduced a `products` resource, and modularized routes for scalability. The `.env` file secures configuration, aligning with production practices. This prepares you for authentication and React integration in upcoming MERN Backend classes at Aptech 
