/*
  Blink

  Turns an LED on, then off, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  Translation and minor modification: Francesco Piantini (Coderdojo Firenze)

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// La funzione setup() viene eseguita una sola volta tutte le volte
// che si accende la scheda o quando si preme il pulsante Reset
void setup() {
  // Inizializza come output la linea digitale dove è collegato il led incorporato.
  // La costante LED_BUILTIN è equivalente al numero 13
  pinMode(LED_BUILTIN, OUTPUT);
}

// La funzione LOOP viene eseguita continuamente
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   // Accende il LED (HIGH = tensione di alimentazione)
  delay(500);                       // attende 500 ms = 1/2 s
  digitalWrite(LED_BUILTIN, LOW);    // Spenge il LED togliendo la tensione di alimentazione
  delay(500);                       // attende 500 ms = 1/2 s
}

