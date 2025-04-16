const express = require('express');
const usersRoute= require("./routes/users.route.js")
const productRoute= require("./routes/products.route.js")
require('dotenv').config();
const app = express();
app.use(express.json());

  
app.listen(process.env.PORT || 3000, () => {
    console.log(`Server started on port ${process.env.PORT}`);
});

