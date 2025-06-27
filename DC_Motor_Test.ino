#include <AFMotor.h>

//Creating motor objects for each motor
AF_DCMotor motor1(1); //M1
AF_DCMotor motor2(2); //M2
AF_DCMotor motor3(3); //M3
AF_DCMotor motor4(4); //M4

void setup() {
  Serial.begin(9600);

  //Setting initial speed for all motors (0 - 255)
  motor1.setSpeed(120);
  motor2.setSpeed(120);
  motor3.setSpeed(120);
  motor4.setSpeed(120);

  Serial.println("All motors ready!");
}

void loop() {
   // Run all motors forward
  motor1.run(FORWARD);
  motor2.run(FORWARD);
  motor3.run(FORWARD);
  motor4.run(FORWARD);
  delay(2000);

  // Stop all motors
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
  delay(1000);

  // Run all motors backward
  motor1.run(BACKWARD);
  motor2.run(BACKWARD);
  motor3.run(BACKWARD);
  motor4.run(BACKWARD);
  delay(2000);

  // Stop all motors again
  motor1.run(RELEASE);
  motor2.run(RELEASE);
  motor3.run(RELEASE);
  motor4.run(RELEASE);
  delay(1000);
}
