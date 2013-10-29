// Robotics with the BOE Shield - ForwardOneSecond
// Make the BOE Shield-Bot roll forward for one seconds, then stop.

// 6.8 in per second - arduino distance travel

#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                             // Declare left and right servos
Servo servoRight;
 
void setup()                                 // Built-in initialization block
{
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12
                                             // Full speed forward
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1385);        // Right wheel clockwise
  delay(2647);                               // ...for 18in distance
 
  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach();
}  
 
void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
}
