#include <LiquidCrystal_I2C_AvrI2C.h>
LiquidCrystal_I2C_AvrI2C lcd(0x27,16,2);
/*
gnd-gnd
vcc-5v 
sda-sda
scl-scl
*/
int sayac = 10;

void setup() {
 lcd.begin();
 lcd.print("Hello World");
 delay(1000);
}

void loop() {
 lcd.clear();
 lcd.print("Sayac:");
 lcd.print(sayac);
 sayac--;
 if(sayac == -1){
  sayac=10;
 }
delay(1000);
 
}
