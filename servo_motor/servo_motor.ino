#include <Servo.h>

#define button1 7
#define button2 8



Servo sm;  //sm servo motor demek
int aci = 0; //açı

int buttondeger1;
int buttondeger2;

void setup() {
  sm.attach(9); // sm yi attack ile birleştir
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {
  buttondeger1 = digitalRead(button1);
  buttondeger2 = digitalRead(button2);

  if (buttondeger1 == 1) { // iki tane eşittir kullanıyoruz çünkü yukarıda buttondeger1 i digitalread e eşitledik yani bir tane eşitlik kullandık karışma olmasın diye
    sm.write(aci);
    aci += 5; // açı yı her seferinde 5 arttır

    if (aci >= 180) { // büyük eşittir:  >=
      aci = 180; //180 e eşitliyoruz çünkü servo motorumuz sadece 180 derece dönüyor yani açı 200gibi olursa 180e eşitleyecek
    }

    delay(100);
  }


  if (buttondeger2 == 1) {
    sm.write(aci);
    aci -= 5; //button2 ye basınca -5 hareket etsin yani diğer tarafa gitsin

    if (aci <= 0) {
      aci = 0;
    }

    delay(100);

  }
}
