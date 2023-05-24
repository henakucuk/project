#include <SevSeg.h>
SevSeg ekran; //kütüphaneye isim veriyoruz

void setup() {
  byte basamak = 4; //4 basamaklı 7 segment için değişken tanımlıyoruz
  byte digitPin[] = {2, 3, 4, 5}; // d1,d2,d3,d4 2,3,4,5 e bağlı
  byte segmentPin[] = {6, 7, 8, 9, 10, 11, 12, 13};
  byte tur = COMMON_ANODE; //COMMMAN_CATHODE veya COMMEN_ANODE
  bool direnc = false;       //direncin olmadığını ona söylüyoruz
  bool otosure = false;      //otomatik sürenin olmadğını ona söylüyoruz

  bool sifirlar = true; // gizlemek için false yapınız

  ekran.begin(tur, basamak,digitPin, segmentPin, direnc, otosure, sifirlar);
  ekran.setBrightness(90);

}

void loop() {
/*
ekran.setNumber(4562);  ekrana sayı yazmak istiyorsak bunu 4 basamaklı sayılır
ekran.setChars("hena");  ekrana display ile yazılabilecek harfleri yazarız "tırnak içinde yazılır"
*/
ekran.setChars("hena"); 
ekran.refreshDisplay();
}
