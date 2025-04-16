
## 💡 Express.js CRUD Operations – Class Notes

### ✅ Prerequisites:
- Basic understanding of JavaScript
- Node.js installed
- `npm init` and `npm install express`

---

## 📦 Setting Up Express

```bash
mkdir express-crud-app
cd express-crud-app
npm init -y
npm install express
```

### `index.js`

```js
const express = require('express');
const app = express();
const PORT = 3000;

// Middleware to parse JSON
app.use(express.json());

app.listen(PORT, () => {
  console.log(`Server is running on port ${PORT}`);
});
```

---

## 🧠 Concept: CRUD with Express

| Method | Action       | Example Route        |
|--------|--------------|----------------------|
| GET    | Read data    | `/users`             |
| POST   | Create data  | `/users`             |
| PATCH  | Update data  | `/users/:id`         |
| DELETE | Delete data  | `/users/:id`         |

---

## 🧪 Dummy Data

```js
let users = [
  { id: 1, name: 'Joel' },
  { id: 2, name: 'Jane' },
];
```

---

## 📥 GET Request – Read Users

### Endpoint
```js
app.get('/users', (req, res) => {
  res.json(users);
});
```

### Example Request
```
GET http://localhost:3000/users
```

---

## ➕ POST Request – Add User

### Endpoint
```js
app.post('/users', (req, res) => {
  const newUser = {
    id: users.length + 1,
    name: req.body.name
  };
  users.push(newUser);
  res.status(201).json(newUser);
});
```

### Example Body (JSON)
```json
{
  "name": "John"
}
```

---

## 📝 PATCH Request – Update User

### Endpoint
```js
app.patch('/users/:id', (req, res) => {
  const id = parseInt(req.params.id);
  const user = users.find(u => u.id === id);

  if (!user) {
    return res.status(404).json({ message: 'User not found' });
  }

  user.name = req.body.name || user.name;
  res.json(user);
});
```

---

## ❌ DELETE Request – Delete User

### Endpoint
```js
app.delete('/users/:id', (req, res) => {
  const id = parseInt(req.params.id);
  users = users.filter(u => u.id !== id);
  res.json({ message: `User with id ${id} deleted.` });
});
```

---

## 🧠 Exercises

### 🧪 Basic Exercises:
1. **GET**: Create a `/greetings` route that returns a welcome message.
2. **POST**: Add a route to add a new user with fields: `name`, `email`.
3. **PATCH**: Update only the email of a user by ID.
4. **DELETE**: Add a route to delete all users (use `users = []`).

### 🧠 Intermediate:
- Add validations: Prevent users with empty names or duplicate names from being added.
- Return status codes properly: `400`, `404`, `201`, `200`.

---

## ✅ Bonus Tip: Use Postman or Thunder Client (VSCode Extension) to test your API endpoints.

---
