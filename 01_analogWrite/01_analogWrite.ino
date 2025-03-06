int ledState;
long long lastChange;

void setup() {
  // TODO: declare output pin
  pinMode(3, OUTPUT);
  ledState = 0;  // can be 0 to 255
  lastChange = millis();
}

void loop() {
  analogWrite(3, ledState);
  if (millis() - lastChange > 30) {
    ledState += 1;
    if (ledState > 255) {
      ledState = 0;
    }
    lastChange = millis();
  }
}
