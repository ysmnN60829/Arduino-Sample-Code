/*
* this is sketch to make the LED blink when connected to pin 13.
*/

const int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on (HIGH is the voltage level)
  delay(1000);                  // Wait for one second
  digitalWrite(ledPin, LOW);   // Turn the LED off by making the voltage LOW
  delay(1000);                  // Wait for one second
}
