int yellow=7;
void setup() {
pinMode(yellow,OUTPUT); //7 numaralı pini çıkış yani OUTPUT hale getiriyoruz

}

void loop() {
 digitalWrite(yellow,HIGH); //7 numaralı digital pini yani değişkenin içine 1 değeri atar ve led yanar
 delay(100); //saniyenin 1/1000 demek
 digitalWrite(yellow,LOW); //7 numaralı digital pini yani değişkenin içine 0 değeri atar ve led kapanır
 delay(100);
}
