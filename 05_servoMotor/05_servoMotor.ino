#include <Servo.h>

int inPin = A0;

Servo mServo;

void setup() {
  Serial.begin(57600);
  mServo.attach(3);
}

void loop() {
  int a0Val = analogRead(inPin);

  // TODO: use a0Val on servo output
}
