# **Weekend Assignment: Learn Git & GitHub**  
📅 **Deadline:** Before Monday’s class  

### **Objective:**  
By the end of this assignment, you will:  
✅ Create a GitHub account  
✅ Set up Git on your computer  
✅ Create and upload a simple webpage to GitHub  
✅ Share your work with the group  

---

## **Step 1: Create a GitHub Account**  
💡 **Why?** GitHub is an online tool where developers save and manage their projects. You need an account to store and share your work.  

### **How to do it:**  
1. Open your web browser and go to [https://github.com](https://github.com)  
2. Click **Sign up**  
3. Enter your **email, username, and password**  
4. Click **Create account**  
5. Follow the instructions to complete your registration  

✅ **Your GitHub account is ready!**  

🔽 **Example Image:**  
![GitHub Sign Up Page](https://i.imgur.com/3q6PDoC.png)  

---

## **Step 2: Create a New Project (Repository) on GitHub**  
💡 **Why?** A repository is like a folder that stores your project on GitHub.  

### **How to do it:**  
1. After signing in, click the **+** button in the top-right corner  
2. Click **New repository**  
3. Type a name for your repository (e.g., `my-first-website`)  
4. Select **Public** so you can share it  
5. Check **Add a README file**  
6. Click **Create repository**  

✅ **You now have an online folder for your project!**  

🔽 **Example Image:**  
![Creating a GitHub Repository](https://i.imgur.com/svB1rAS.png)  

---

## **Step 3: Download and Install Git**  
💡 **Why?** Git is a tool that helps you send files from your computer to GitHub.  

### **How to do it:**  
1. Go to [https://git-scm.com/downloads](https://git-scm.com/downloads)  
2. Click **Download** for your computer (Windows/Mac/Linux)  
3. Open the downloaded file and **install it** (keep clicking **Next** until it finishes)  

✅ **Git is now installed on your computer!**  

🔽 **Example Image:**  
![Download Git](https://i.imgur.com/dzoyzHL.png)  

---

## **Step 4: Set Up Git on Your Computer**  
💡 **Why?** You need to connect Git to your GitHub account before uploading files.  

### **How to do it:**  
1. Open **Git Bash** (Windows) or **Terminal** (Mac/Linux)  
2. Type this command and press **Enter**:  
   ```sh
   git config --global user.name "Your GitHub Username"
   ```  
3. Type this command and press **Enter**:  
   ```sh
   git config --global user.email "Your GitHub Email"
   ```  
   *(Replace with the email you used to sign up on GitHub)*  

✅ **Your Git is now connected to GitHub!**  

🔽 **Example Image:**  
![Set Up Git](https://i.imgur.com/DmtIb9E.png)  

---

## **Step 5: Copy (Clone) Your Repository to Your Computer**  
💡 **Why?** You need to bring the repository to your computer so you can add files to it.  

### **How to do it:**  
1. Go to **GitHub → Your Repository (my-first-website)**  
2. Click the green **Code** button  
3. Copy the link under **HTTPS**  
4. Open **Git Bash**, type this command, and press **Enter**:  
   ```sh
   git clone paste-your-repo-link-here
   ```  
5. A folder named **my-first-website** will be created on your computer  

✅ **Your GitHub folder is now on your computer!**  

🔽 **Example Image:**  
![Clone Repository](https://i.imgur.com/47NX63T.png)  

---

## **Step 6: Create a Simple Webpage**  
💡 **Why?** You will create a small website and upload it to GitHub.  

### **How to do it:**  
1. Open the **my-first-website** folder on your computer  
2. Right-click inside the folder → **New File** → Name it **index.html**  
3. Open it with **Notepad or VS Code**  
4. Copy and paste this inside the file:  
   ```html
   <!DOCTYPE html>
   <html lang="en">
   <head>
       <meta charset="UTF-8">
       <meta name="viewport" content="width=device-width, initial-scale=1.0">
       <title>My First GitHub Website</title>
   </head>
   <body>
       <h1>Hello, GitHub!</h1>
       <p>This is my first website hosted on GitHub.</p>
   </body>
   </html>
   ```  
5. Save the file  

✅ **Your webpage is ready!**  

🔽 **Example Image:**  
![Create HTML File](https://i.imgur.com/YIDH6T5.png)  

---

## **Step 7: Upload (Push) Your Webpage to GitHub**  
💡 **Why?** You need to send your project to GitHub so it is saved online.  

### **How to do it:**  
1. Open **Git Bash** inside the **my-first-website** folder  
2. Type the following commands one by one and press **Enter** after each:  
   ```sh
   git add .
   git commit -m "Added my first website"
   git push origin main
   ```  
3. Your project is now visible on GitHub! 🎉  

✅ **Your webpage is now online!**  

🔽 **Example Image:**  
![Push Code to GitHub](https://i.imgur.com/uoXtchH.png)  

---

## **Step 8: Share Your Repository Link**  
💡 **Why?** So I can check your work and give feedback.  

### **How to do it:**  
1. Go to **GitHub → Your Repository**  
2. Copy the link at the top (it should look like `https://github.com/your-username/my-first-website`)  
3. Paste the link in the group chat  

✅ **You have successfully completed the assignment! 🎉**  

🔽 **Example Image:**  
![Share GitHub Link](https://i.imgur.com/kYUPFpD.png)  

---

## ✅ **Bonus Task: Activate GitHub Pages (Make Your Website Live!)**  
💡 **Why?** This will allow you to share a link where anyone can see your website.  

### **How to do it:**  
1. Go to **GitHub → Your Repository**  
2. Click **Settings → Pages**  
3. Under **Branch**, select **main**, then click **Save**  
4. Your website will be live in a few minutes at:  
   ```
   https://your-username.github.io/my-first-website/
   ```  

✅ **Your website is now online! 🚀**  

🔽 **Example Image:**  
![Enable GitHub Pages](https://i.imgur.com/dgz2o82.png)  

---

### **Final Reminder:**  
📌 **Submit before Monday! No excuses!** 🚀  
