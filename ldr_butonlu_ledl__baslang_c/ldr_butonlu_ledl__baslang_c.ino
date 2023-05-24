#include <LiquidCrystal_I2C_AvrI2C.h>
#define btn 9
#define led 10
#define ldr A0

int btnDeger;
int ldrDeger;
int sayac = 0;
LiquidCrystal_I2C_AvrI2C lcd(0x27, 16, 2);

void setup() {
  pinMode(led, OUTPUT);
  pinMode(btn, INPUT);
  lcd.begin();
}
void loop() {   //while(1) sürekli tekrarla demek yani loop a eşit
 if(sayac == 0){
  
  while (digitalRead(btn) == 0) {
        lcd.clear();
    lcd.setCursor(0, 0);  //0.satırı 0.sütünu seç
    lcd.print("Hos geldiniz");
    lcd.setCursor(0, 1);
    lcd.print("BUTONA BAS!!");

    delay(200);
    sayac = 1;
  }
 }
  lcd.clear();
  ldrDeger=analogRead(ldr);
  lcd.setCursor(0,0);
  lcd.print("Ledin Degeri:");
  lcd.print(map(ldrDeger,0,1023,0,255));  //map ldr degerini ola 1023 arasına çekti
  analogWrite(led,map(ldrDeger,0,1023,0,255));
  delay(200);
}
