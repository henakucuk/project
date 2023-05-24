#define buzzer 9

void setup() {
  pinMode(buzzer, OUTPUT);

}

void loop() {
  digitalWrite(buzzer, 1);
  delay(1000);
  digitalWrite(buzzer, 0);
  delay(1000);
}
