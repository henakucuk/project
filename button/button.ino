#define button 7
#define led 8
int buttondeger;
void setup() {
 pinMode(led,OUTPUT);
 pinMode(button,INPUT); //7 numaralı digital pinini GİRİŞ olarak belirliyoruz 
 Serial.begin(9600);
}

void loop() {
buttondeger=digitalRead(button);
Serial.print("button icindeki deger:"); //print yan yana yazar
Serial.println(buttondeger);  //println alt alta yazar

 if(buttondeger == 1){
  digitalWrite(led,HIGH);  //istersen if kısmını tamamen silip 'digitalWrite(led,buttondeger);' diyebilirsin.led i 1,0 veya high,low a eşitlemekle aynı şey çünkü buttondeger in içinde 1 ve 0 var.
  }else{
 digitalWrite(led,LOW);
  }
delay(200);
}
