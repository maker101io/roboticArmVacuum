/*
 Controlling a servo position using a potentiometer (variable resistor)
 http://bit.ly/MertArduino
*/

#include <Servo.h>

// create servo object to control a servo
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

// analog pin used to connect the potentiometer
int potpin1 = 0;
int potpin2 = 1;
int potpin3 = 2;
int potpin4 = 3;

// variable to read the value from the analog pin
int val1;
int val2;
int val3;
int val4;


void setup() {
  // attaches the servos on digital (PWM) pins to the servo object
  myservo1.attach(3);
  myservo2.attach(5);
  myservo3.attach(6);
  myservo4.attach(9);
}

void loop() {
  val1 = analogRead(potpin1);             // reads the value of the potentiometer (value between 0 and 1023)
  val1 = map(val1, 0, 1023, 0, 180);      // scale it to use it with the servo (value between 0 and 180)
  myservo1.write(val1);                   // sets the servo position according to the scaled value
  delay(15);                              // waits for the servo to get there

  val2 = analogRead(potpin2);
  val2 = map(val2, 0, 1023, 0, 180);
  myservo2.write(val2);
  delay(15);

  val3 = analogRead(potpin3);
  val3 = map(val3, 0, 1023, 0, 180);
  myservo3.write(val3);
  delay(15);

  val4 = analogRead(potpin4);
  val4 = map(val4, 0, 1023, 0, 180);
  myservo4.write(val4);
  delay(15);
}
