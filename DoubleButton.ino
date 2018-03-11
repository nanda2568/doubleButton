/*
  Double Button

  Turns on and off a light emitting diode(LED) connected to digital pin 12,
  when pressing both pushbuttons attached to pin 2 and pin 4.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created on 3/11/2018
  by Nanda Kumar
*/

// constants won't change. They're used here to set pin numbers:
const int firstButtonPin = 2;      // the number of the pushbutton pin
const int secondButtonPin = 4;     // the number of the pushbutton pin
const int ledPin =  13;            // the number of the LED pin

// variables will change:
int firstButtonState = 0;          // variable for reading the pushbutton status
int secondButtonState = 0;         // variable for reading the pushbutton status


void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pins as an input:
  pinMode(firstButtonPin, INPUT);
  pinMode(secondButtonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  firstButtonState = digitalRead(firstButtonPin);
  secondButtonState = digitalRead(secondButtonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if ((firstButtonState == HIGH) && (secondButtonState == HIGH)) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
