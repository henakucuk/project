#include <AvrI2c_Greiman.h>
#include <LiquidCrystal_I2C_AvrI2C.h>

LiquidCrystal_I2C_AvrI2C lcd(0x27 , 16, 2); //lcd ekrena isim veriyoruz

#define buzzer 5
#define trigPin 4
#define echoPin 2
int sure, mesafe;

void setup() {
  Serial.begin(9800);
  pinMode(buzzer, OUTPUT);
  pinMode(trigPin, OUTPUT); //trigpin sesi verecek kişi
  pinMode(echoPin, INPUT); //echopin sesi alacak kişi
  Serial.println("Ardunio ile mesafe sensörü uygulaması başlatılıyor...");
  lcd.begin();
  lcd.print("Basliyor");
  delay(3000);
}

void loop() {
  lcd.clear();
  digitalWrite(trigPin , LOW); // başlangıçta trig yani çıkış pini low olur
  delayMicroseconds(3); //3 mikro saniye bekliyor
  digitalWrite(trigPin , HIGH); // bekleme sonrasında trig pinini hıgh olarak değiştiriyor
  delayMicroseconds(10); //tekrar 10 mikri saniye bekliyor
  digitalWrite(trigPin , LOW); //trig pini bekleme sonrasu low oluyor
  sure = pulseIn(echoPin, HIGH);
  mesafe = (sure / 2) * 0.0343;
  Serial.print(mesafe);
  Serial.print("cm uzaklıkta");
  lcd.print(mesafe);
  lcd.print("cm");


  if (mesafe <= 5) {
    digitalWrite(buzzer,HIGH);
    delay(200);
    digitalWrite(buzzer,LOW);
    delay(200);
    }
  else if (mesafe >= 5 and mesafe <= 10) {
    digitalWrite(buzzer,HIGH);
    delay(500);
    digitalWrite(buzzer,LOW);
    delay(500);
}
else{
  digitalWrite(buzzer,LOW);
  }

    delay(100);
  }
