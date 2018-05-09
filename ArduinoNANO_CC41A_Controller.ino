
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(13 , OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available()) {
    int value = Serial.read();
    if (value == 1) {
      digitalWrite(LED_BUILTIN, HIGH);
      digitalWrite(13, HIGH);
    }
    if (value == 0) {
      digitalWrite(13, LOW);
      digitalWrite(LED_BUILTIN, LOW);
    }
  }

}

