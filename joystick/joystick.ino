#include <LiquidCrystal_I2C_AvrI2C.h>

LiquidCrystal_I2C_AvrI2C lcd(0x27,16,2);

#define vrx A0
#define vry A1

int xDeger , yDeger;

void setup() {
lcd.begin();
lcd.print("Hosgeldiniz");
delay(3000);
}

void loop() {
 xDeger = analogRead(vrx);
 yDeger = analogRead(vry);
 lcd.clear();
 lcd.setCursor(0,0); //0a 0 git sütün dize olarak
 lcd.print("x degeri:");
 lcd.print(xDeger);
 lcd.setCursor(0,1); 
 lcd.print("y degeri:");
 lcd.print(yDeger);
 delay(300);
}
