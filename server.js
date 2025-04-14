const express = require('express');
const axios = require('axios'); // For API calls
const app = express();

app.use(express.static('public')); // Serve static files

app.get('/api/data', async (req, res) => {
    try {
        // Using a different endpoint that provides English content
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

app.listen(3000, () => console.log('Server running on port 3000'));
