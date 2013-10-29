/*
 * Robotics with the BOE Shield - RightServoTest
 * Right servo turns clockwise three seconds, stops 1 second, then
 * counterclockwise three seconds.
 */

#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                            // Declare right servo
 
void setup()                                 // Built in initialization block
{
  Serial.begin(9600);
  Serial.println("Beep!");  

  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);  

  servoLeft.attach(13);                     // Attach right signal to pin 12


}  
 
void loop()                                  // Main loop auto-repeats
{                                            // Empty, nothing needs repeating
  Serial.println("Waiting for reset...");
  delay(1000);
  
    servoLeft.writeMicroseconds(1300);        // Right wheel clockwise
  delay(3000);                               // ...for 3 seconds
 
  servoLeft.writeMicroseconds(1500);        // Stay still
  delay(1000);                               // ...for 3 seconds

  servoLeft.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(3000);                               // ...for 3 seconds
 
  servoLeft.writeMicroseconds(1500);        // Right wheel counterclockwise

}
