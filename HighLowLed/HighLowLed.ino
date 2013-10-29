/*
 Robotics with the BOE Shield - HighLowLed
 Turn LED connected to digital pin 13 on/off once every second.
 */

void setup()                                 // Built-in initialization block
{
  pinMode(12, OUTPUT);                       // Set digital pin 12 -> output
}  
 
void loop()                                  // Main loop auto-repeats
{                                         
  digitalWrite(12, HIGH);                    // Pin 12 = 5 V, LED emits light
  delay(500);                                // ..for 0.5 seconds
  digitalWrite(12, LOW);                     // Pin 12 = 0 V, LED no light
  delay(500);         // ..for 0.5 seconds
  
}
