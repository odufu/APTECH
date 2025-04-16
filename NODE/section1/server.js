const express = require('express');
require('dotenv').config();
const app = express();
app.use(express.json());

var users = [
    { id: 1, name: 'Joel', email: 'joel@gmail.com' },
    { id: 2, name: 'Emmanuel', email: 'emmanuel@gmail.com' },
    { id: 3, name: 'Samuel', email: 'samuel@gmail.com' },
]



//SEND A GET REQUEST TO ALL USERS
app.get('/users', (req, res) => {
    res.json(users)
});



//ADD USER

app.post('/users', (req, res) => {
    let newUser = req.body; //gets the new user from the request body
    newUser.id = users.length+1; // increament the id of the new user
    users.push(newUser);// add the new user to the lists of users
 	res.status(201).json(newUser); // send the new user back to the client
});



//UPDATE USER

app.patch('./users/:id', (req, res) => {
let id = parseInt(req.params.id); //gets the id of the user to be updated from the
user = users.find(user=>user.id===id) //make the id number

if(!user){
    res.status(404).json({message:`No user with ID ${id} found`}) // if the user is not found
}
user.name=req.body.name;
res.status(200).json(user)
});

//DELETE USER

app.delete('/users/:id', (req, res) => {
    const id = parseInt(req.params.id);
    users = users.filter(u => u.id !== id);
    res.json({ message: `User with id ${id} deleted.` });
  });

  
app.listen(process.env.PORT || 3000, () => {
    console.log(`Server started on port ${process.env.PORT}`);
});

