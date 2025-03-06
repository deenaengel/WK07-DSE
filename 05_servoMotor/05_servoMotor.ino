#include <Servo.h>
Servo mServo;
int servoVelocity;
int servoAngle;
long long lastChange ;

void setup() {
  Serial.begin(57600);
  mServo.attach(3);

  servoAngle = 0;
  servoVelocity = 5;
}

void loop() {
  if (millis() - lastChange > 100) {
    servoAngle += servoVelocity;

    if (servoAngle > 180 || servoAngle < 1) {
      servoVelocity = -1 * servoVelocity;
     
    }
    lastChange = millis();



  }
  // write the angle to the motor
  mServo.write(servoAngle);
}
