const express = require("./express")
const app = express()

var currentStatus = new String()

app.route('/')
    .get((req, res) => {

        res.send("Wilkommen!")
    })

app.route('/task-status')
    .get((req, res) => {
        res.json({
            code: 200
        })
    })

app.route('/Talk')
    .get((req, res) => {

    })

app.route('/exit')
    .get((req, res) => {
        console.log(`Recieved request from ${req.ip}`)

        res.json({
            code: 200,
            res: {
                message: "byyeee!"
            }
        })

        process.exit(200)
    })

app.listen()