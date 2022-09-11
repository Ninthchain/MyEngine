const { IncomingMessage } = require('http')

/**
 * 
 * @param {IncomingMessage} request 
 */

function OnConnect(request) {
    console.log(`User connected: ${req.socket.remoteAddress()}\n`)

    return
}

module.exports = {
    OnConnect
}