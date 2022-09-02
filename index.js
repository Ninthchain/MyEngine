const { TelegramClient } = require('telegram')
const { StringSession } = require('telegram/sessions')
const { createServer } = require('http')

var server = createServer(async(request, response) => {

    if (request.url == "/debug-exit") {

        console.log("Request handler random was called.");
        response.writeHead(200, { "Content-Type": "application/json" });

        var otherArray = ["item1", "item2"];
        var otherObject = { item1: "item1val", item2: "item2val" };

        var json = JSON.stringify({
            anObject: otherObject,
            anArray: otherArray,
            another: "item"
        });

        response.end(json);

        server.close();

        return;
    }
})

server.listen(3000, () => {
    console.log('Server started its work')
})