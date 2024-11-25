// auth.js (Frontend)
document.getElementById('signup-btn').addEventListener('click', async () => {
    const name = document.getElementById('signup-name').value;
    const phone_number = document.getElementById('signup-phone').value;
    const password = document.getElementById('signup-password').value;
  
    try {
      const response = await fetch('http://localhost:3001/auth/signup', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ name, phone_number, password }),
      });
  
      const data = await response.json();
      if (response.ok) {
        alert('Signup successful! Please log in.');
      } else {
        alert(data.error || 'Signup failed.');
      }
    } catch (error) {
      console.error('Signup error:', error);
    }
  });
  
  document.getElementById('login-btn').addEventListener('click', async () => {
    const phone_number = document.getElementById('login-phone').value;
    const password = document.getElementById('login-password').value;
  
    try {
      const response = await fetch('http://localhost:3001/auth/login', {
        method: 'POST',
        headers: { 'Content-Type': 'application/json' },
        body: JSON.stringify({ phone_number, password }),
      });
  
      const data = await response.json();
      if (response.ok) {
        alert(`Login successful! Welcome, ${data.user.name}`);
        localStorage.setItem('token', data.token); // Save token for future requests
      } else {
        alert(data.error || 'Login failed.');
      }
    } catch (error) {
      console.error('Login error:', error);
    }
  });
  