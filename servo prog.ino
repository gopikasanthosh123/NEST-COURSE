#include <Servo.h>
Servo myServo;
const int servopin=9;

void setup() {
  myServo.attach(servopin);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

  myServo.write(0);
  delay(1000);
  myServo.write(90);
  delay(1000);
    myServo.write(180);
  delay(1000);
  

}