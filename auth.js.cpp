<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Login Page</title>
    <style>
        /* Basic reset and styling */
        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: Arial, sans-serif;
        }

        body {
            display: flex;
            justify-content: center;
            align-items: center;
            min-height: 100vh;
            background-color: #f5f5f5;
        }

        .login-container {
            width: 350px;
            padding: 20px;
            border-radius: 8px;
            background-color: #ffffff;
            box-shadow: 0 4px 8px rgba(0, 0, 0, 0.1);
            text-align: center;
        }

        h2 {
            margin-bottom: 20px;
            color: #4CAF50;
        }

        label {
            display: block;
            margin-top: 15px;
            color: #333;
        }

        select, input[type="text"], input[type="password"] {
            width: 100%;
            padding: 10px;
            margin-top: 5px;
            border: 1px solid #ddd;
            border-radius: 5px;
        }

        .login-btn {
            width: 100%;
            padding: 10px;
            margin-top: 20px;
            background-color: #4CAF50;
            color: white;
            border: none;
            border-radius: 5px;
            cursor: pointer;
            font-size: 16px;
        }

        .login-btn:hover {
            background-color: #45a049;
        }

        .error-message {
            color: #e74c3c;
            margin-top: 10px;
        }
    </style>
</head>
<body>

<div class="login-container">
    <h2>Login</h2>

    <!-- Role Selection -->
    <label for="role">Select Role:</label>
    <select id="role">
        <option value="">Select your role</option>
        <option value="farmer">Farmer</option>
        <option value="buyer">Buyer</option>
        <option value="admin">Admin</option>
    </select>

    <!-- Phone Number Input -->
    <label for="phone">Phone Number:</label>
    <input type="text" id="phone" placeholder="Enter your phone number">

    <!-- Password Input -->
    <label for="password">Password:</label>
    <input type="password" id="password" placeholder="Enter your password">

    <!-- Login Button -->
    <button class="login-btn" onclick="handleLogin()">Login</button>

    <!-- Error Message Display -->
    <p class="error-message" id="error-message"></p>
</div>

<script>
    function handleLogin() {
        // Get input values
        const role = document.getElementById('role').value;
        const phone = document.getElementById('phone').value;
        const password = document.getElementById('password').value;
        const errorMessage = document.getElementById('error-message');

        // Basic validation
        if (!role) {
            errorMessage.textContent = "Please select your role.";
            return;
        }
        if (!phone) {
            errorMessage.textContent = "Please enter your phone number.";
            return;
        }
        if (!password) {
            errorMessage.textContent = "Please enter your password.";
            return;
        }

        // Clear any previous error messages
        errorMessage.textContent = "";

        // Log login information (for demonstration purposes)
        // In a real application, you would send this data to the server
        console.log("Role:", role);
        console.log("Phone:", phone);
        console.log("Password:", password);

        // Display a success message or redirect to the appropriate dashboard
        alert("Login successful for " + role + " role!");
    }
</script>

</body>
</html>

