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

for(int satir=0;satir<=15;satir++){
lcd.clear();
lcd.setCursor(satir,0);
lcd.print("aaaaaaaaaaa");
delay(200);
}
for(int satir=16;satir>=0;satir--){
lcd.clear();
lcd.setCursor(satir,0);
lcd.print("aaaaaaaaaaa");
delay(200);
}

}
