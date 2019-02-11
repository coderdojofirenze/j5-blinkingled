// Un LED Lampeggiante

// Carichaimo la libreria 'johnny-five'
var five = require('johnny-five');

// Dichiariamo una scheda di tipo Arduino
var board = new five.Board();

// Dichiariamo una funzione che fa lampeggiare un led
// per sempre con un periodo di mezzo secondo.
board.on('ready', function() {
  var led = new five.Led(13);
  led.blink(500)
});
