LED Blink Sketch

This repository contains a simple Arduino sketch to make an LED blink when connected to pin 13 of an Arduino board.

 Overview

This sketch uses the built-in LED on most Arduino boards, which is typically connected to digital pin 13. The LED will turn on for one second and then turn off for one second, repeating this cycle indefinitely.

Code Explanation

/*
 * This is a sketch to make the LED blink when connected to pin 13.
 */

const int ledPin = 13; // Pin where the LED is connected

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an OUTPUT
}

// The loop function runs over and over again forever
void loop() {
  digitalWrite(ledPin, HIGH);  // Turn the LED on (HIGH is the voltage level)
  delay(1000);                  // Wait for one second
  digitalWrite(ledPin, LOW);   // Turn the LED off by making the voltage LOW
  delay(1000);                  // Wait for one second
}
