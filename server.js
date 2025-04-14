const express = require('express');
const axios = require('axios');
const app = express();
const PORT = process.env.PORT || 3000;

// Serve static files
app.use(express.static('public'));

// Basic route
app.get('/', (req, res) => {
    res.sendFile(__dirname + '/public/index.html');
});

app.get('/api/data', async (req, res) => {
    try {
        const response = await axios.get('https://api.quotable.io/random');
        res.json({
            title: "Random Quote",
            body: response.data.content,
            author: response.data.author
        });
    } catch (error) {
        res.status(500).json({ error: 'Failed to fetch data' });
    }
});

// Start server
app.listen(PORT, () => {
    console.log(`Server running on port ${PORT}`);
});
