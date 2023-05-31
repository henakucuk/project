#define IN1 9
#define IN2 10
#define IN3 11
#define IN4 12

void setup() {
  for (int x = 9; x < 13; x++) {
    pinMode(x, OUTPUT);
  }
}

void loop() {
  /*
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(10);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, LOW);
  delay(10);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4, LOW);
  delay(10);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);
  delay(10);
  */

  
  adim(1,0,0,0);
  adim(1,1,0,0);
  adim(0,1,0,0);
  adim(0,1,1,0);
  adim(0,0,1,0);
  adim(0,0,1,1);
  adim(0,0,0,1);
  adim(1,0,0,1);

  
} //loop

void adim(int a, int b, int c, int d) {
  digitalWrite(IN1, a);
  digitalWrite(IN2, b);
  digitalWrite(IN3, c);
  digitalWrite(IN4, d);
  delay(10);
}//adim fonksiyon kapanışı
