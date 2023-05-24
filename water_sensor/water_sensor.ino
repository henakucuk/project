#include <LiquidCrystal_I2C_AvrI2C.h>
#define suPin A0

LiquidCrystal_I2C_AvrI2C lcd(0x27,16,2);

int suDeger;

void setup() {
lcd.begin();
lcd.print("Hosgeldiniz");
}

void loop() {
 suDeger = analogRead(suPin); 
 lcd.clear();
 lcd.print("Suyun Degeri:");
 lcd.print(suDeger);
 delay(200);

}
