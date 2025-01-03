<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Farmer Dashboard</title>
    <style>
   body {
    background-color: #f5f5f5;
    background-image: url('https://media.istockphoto.com/id/965148388/photo/green-ripening-soybean-field-agricultural-landscape.jpg?s=612x612&w=0&k=20&c=cEVP3uj34-5obt-Jf_WI3O9qfP6tVrFaQIv1rBvvpzc='); 
    background-size: cover;
    background-position: center;
    background-attachment: fixed;
    position: relative; /* Needed for the overlay */
}

body::before {
    content: "";
    position: absolute;
    top: 0;
    left: 0;
    right: 0;
    bottom: 0;
    background-color: rgba(0, 0, 0, 0.5); /* Adjust the opacity (0.5) to make it darker or lighter */
    z-index: -1; /* Keeps the overlay behind the content */
}


        * {
            margin: 0;
            padding: 0;
            box-sizing: border-box;
            font-family: system-ui, -apple-system, sans-serif;
        }

        body {
            background-color: White;
        }

        .dashboard {
            padding: 3rem 5%;
        }

        .dashboard-header {
            display: flex;
            justify-content: space-between;
            align-items: center;
            margin-bottom: 2rem;
        }

        .dashboard-header h1 {
            color: white;
        }

        .dashboard-header a {
            background-color: orange;
            color: white;
            padding: 0.5rem 1rem;
            border-radius: 5px;
            text-decoration: none;
            transition: background-color 0.3s;
        }

        .dashboard-header a:hover {
            background-color: #1e7a33;
        }

        .feature-border-container {
            border-left: 10px solid #2B9348;
            border-right: 10px solid #2B9348;
            padding: 1rem;
        }

        .dashboard-features-top {
            display: grid;
            grid-template-columns: repeat(3, 1fr);
            gap: 2rem;
            margin-bottom: 2rem;
        }

        .dashboard-features-bottom {
            display: grid;
            grid-template-columns: repeat(2, 1fr);
            gap: 2rem;
        }

        .feature-card {
            background-color:black ;
            padding: 5rem;
            border-radius:40px;
            box-shadow: 0 2px 4px rgba(0,0,0,0.1);
            transition: transform 0.3s;
        }

        .feature-card:hover {
            transform: translateY(-5px);
        }

        .feature-card img {
            width: 50px;
            height: 50px;
            margin-bottom: 1rem;
        }

        .feature-card h3 {
            color: white;
            margin-bottom: 1rem;
        }

        .feature-card p {
            color: Orange;
            line-height: 1.6;
        }

        .hero {
            background-color: #004225;
            background-size: cover;
            background-position: center;
            background-repeat: no-repeat;
            color: white;
            padding: 40px 10px;
            text-align: center;
        }
    </style>
</head>
<body>
    <div class="dashboard">
        <div class="dashboard-header">
            <h1>WELCOME!</h1>
            <a href="#">Update Profile</a>
        </div>

        <!-- Start of feature section with thick borders -->
        <div class="feature-border-container">
            <div class="dashboard-features-top">
                <div class="feature-card">
                    <section class="hero">
                        <h3>Real-Time Market Prices</h3>
                        <p>Updates on crop prices to help you make informed sales decisions.</p>
                    </section>
                </div>
                <div class="feature-card">
                    <section class="hero">
                        <h3>Crop Management Guidance</h3>
                        <p>Basic tips for growing and harvesting your crops.</p>
                    </section>
                </div>
                
            </div>
            <div class="dashboard-features-bottom">
                <div class="feature-card">
                    <section class="hero">
                        <h3>Weather Forecasts and Alerts</h3>
                        <p>Notifications on weather conditions to assist in your planning.</p>
                    </section>
                </div>
                <div class="feature-card">
                    <section class="hero">
                        <h3>Community Forum</h3>
                        <p>A support system where you can share advice and ask questions.</p>
                    </section>
                </div>
            </div>
        </div>
        <!-- End of feature section with thick borders -->
    </div>
</body>
</html>

