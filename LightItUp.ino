/*
  Light It Up
  Uses the Blink Without Delay code to light up an attached LED.
*/

// constants won't change. Used here to set a pin number:
const int ledPin = 1;  // the number of the LED pin

// Variables will change:
int ledState = LOW;  // ledState used to set the LED

void setup() {
  // set the digital pin as output:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // here is where you'd put code that needs to be running all the time.

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
    delay(1000);
}
