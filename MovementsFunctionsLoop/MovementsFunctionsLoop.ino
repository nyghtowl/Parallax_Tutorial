// Robotics with the BOE Shield - MovementsWithSimpleFunctions
// Move forward, left, right, then backward for testing and tuning.
// Adjusted settings based on tuning to gizgig - minor adj for precision

#include <Servo.h>                           // Include servo library
 
Servo servoLeft;                             // Declare left and right servos
Servo servoRight;
 
void setup()                                 // Built-in initialization block
{
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  servoLeft.attach(13);                      // Attach left signal to pin 13
  servoRight.attach(12);                     // Attach right signal to pin 12

//  disableServos();                           // Stay still indefinitely
}  
 
void loop()                                  // Main loop auto-repeats
{                                            
  forward(2000);                             // Go forward for 2 seconds
  turnLeft(550);                             // Turn left for 0.55 seconds
  turnRight(550);                            // Turn right for 0.55 seconds
  backward(2000);                            // go backward for 2 seconds

}

void forward(int time)                       // Forward function
{
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1385);        // Right wheel clockwise
  delay(time);                               // Maneuver for time ms
}

void turnLeft(int time)                      // Left turn function
{
  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
  servoRight.writeMicroseconds(1300);        // Right wheel clockwise
  delay(time);                               // Maneuver for time ms
}

void turnRight(int time)                     // Right turn function
{
  servoLeft.writeMicroseconds(1700);         // Left wheel counterclockwise
  servoRight.writeMicroseconds(1700);        // Right wheel counterclockwise
  delay(time);                               // Maneuver for time ms
}

void backward(int time)                      // Backward function
{
  servoLeft.writeMicroseconds(1300);         // Left wheel clockwise
  servoRight.writeMicroseconds(1615);        // Right wheel counterclockwise
  delay(time);                               // Maneuver for time ms
}

void disableServos()                         // Halt servo signals
{                                            
  servoLeft.detach();                        // Stop sending servo signals
  servoRight.detach();
}
