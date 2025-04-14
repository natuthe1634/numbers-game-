/* General Styles */
body {
    font-family: Arial, sans-serif;
    background-color: #f4f4f4;
    margin: 0;
    padding: 0;
    text-align: center;
}

/* NAVIGATION BAR */
nav {
    background-color: #333;
    padding: 15px 0;
    position: fixed;
    width: 100%;
    top: 0;
    left: 0;
    box-shadow: 0 4px 6px rgba(0, 0, 0, 0.1);
}

nav ul {
    list-style: none;
    padding: 0;
    margin: 0;
    text-align: center;
}

nav ul li {
    display: inline;
    margin: 0 20px;
}

nav ul li a {
    color: white;
    text-decoration: none;
    font-size: 20px;
    font-weight: bold;
    padding: 10px 15px;
    transition: background 0.3s;
}

nav ul li a:hover {
    background: #f4a261;
    border-radius: 5px;
}

/* MAIN CONTENT */
.container {
    max-width: 800px;
    margin: 100px auto; /* Creates space under the fixed nav */
    background: white;
    padding: 40px;
    border-radius: 10px;
    box-shadow: 0 0 15px rgba(0, 0, 0, 0.2);
}

/* HEADER */
h1 {
    color: #333;
    font-size: 36px;
}

p {
    font-size: 18px;
    color: #555;
}
