#include <LiquidCrystal_I2C_AvrI2C.h>

#include <LedControl.h> //Kütüphanemizi dahil edelim 

//Pin numaralarını tanımlıyoruz
#define CLK 5
#define CS 6
#define DIN 7
#define vrx A0
#define vry A1
#define MaxSayisi 1  //Bağlı olan dot matrix sayısı

LiquidCrystal_I2C_AvrI2C lcd(0x27, 16, 2);

int satir = 4;
int sutun = 4;

int xDeger, yDeger;
int kSatir, kSutun;

int puan = 0;

LedControl led = LedControl(DIN, CLK, CS, MaxSayisi);

//Kullanacağımız ifadeler için byte tipinde bir dizi tanımlıyoruz


void setup()
{
  randomSeed(analogRead(0));

  kSatir = random(0, 7);
  kSutun = random(0, 7);

  lcd.begin();

  led.setIntensity(0, 10);  //Parlaklık ayarı
  led.shutdown(0, false);   //Led matrixi aktif hale getirme
  led.clearDisplay(0);
  led.setLed(0, satir, sutun, true);
  led.setLed(0, kSatir, kSutun, true);
}

void loop() {

  lcd.clear();
  
  if (millis() % 800 < 400) {
    led.setLed(0, kSatir, kSutun, true);
  }
  else {
    led.setLed(0, kSatir, kSutun, false);
  }

  led.setLed(0, satir, sutun, true);

  if (kSatir == satir and kSutun == sutun) {

    puan++;

    do {
      kSatir = random(0, 7);
      kSutun = random(0, 7);
    } while (satir == kSatir and sutun == kSutun);

    led.setLed(0, kSatir, kSutun, true);

  }

  xDeger = analogRead(vrx);
  yDeger = analogRead(vry);
  if (xDeger <= 400) {
    led.setLed(0, satir, sutun, false);
    sutun--;
  

      if (sutun<0){
      sutun= 7;
    
      }
    led.setLed(0, satir, sutun, true);
  }
  if (xDeger >= 700) {
    led.setLed(0, satir, sutun, false);
    sutun++;

    if (sutun > 7) {
      sutun = 0;
    }
    led.setLed(0, satir, sutun, true);
  }
  if (yDeger >= 700) {
    led.setLed(0, satir, sutun, false);
    satir++;

    if (satir > 7) {
      satir = 0;

    }
    led.setLed(0, satir, sutun, true);
  }
if(yDeger <= 400){
  led.setLed(0,satir,sutun,false);
  satir--;

  if(satir<0){
    satir=7;
    }
    led.setLed(0,satir,sutun,true);
  }
  lcd.print("puaniniz: ");
  lcd.print(puan);
  delay(250);
}//loop
