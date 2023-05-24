#include <Servo.h>



#define potpin A0

#define servoPin 9

Servo sm;  //isim verdik:(servo motor)sm

int aci;
int potdeger;

void setup() {
  sm.attach(servoPin);
  
 Serial.begin(9600);
 Serial.println("Merhaba Dunya");
}

void loop() {
 potdeger = analogRead(potpin);  //potdeger değişkeninin içini A0 içindeki değerle eşitledik
 aci = map(potdeger,0,1023,0,180);
 Serial.print("pot deger:");
 Serial.println(potdeger);
 
 sm.write(aci);
 delay(100);
}