#include <Mouse.h>

/*
 *  NAME: Arduino Mouse Jiggler
 *  DESC: Keep your computer awake and unlocked by jiggling the mouse
 *  VERSION: 1.0
 *  DATE: 2021-12-24
 *  AUTHOR: cloudranger.ch
 */

// Max delay that can be used in delay() is 16383 - 16 seconds

int sleep = 15000; // Sleep time between mouse jiggles
int led_lit = 100; // Keep the led lit for this many milliseconds

void setup()
{
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  Mouse.begin();
}

void loop()
{
  delay(sleep);
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on
  Mouse.move(0, 1, 0);
  Mouse.move(0,-1, 0);
  delay(led_lit);
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off
}
