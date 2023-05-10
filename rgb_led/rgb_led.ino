int r = 9;
int g = 10;
int b = 11;
int bekleme = 100;
void setup() {
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {/*
analogWrite(r,255); //9 numaralı pwn pinini 255 değerine eşitledik
analogWrite(g,255);
analogWrite(b,255);
delay(bekleme);

analogWrite(r,255);
analogWrite(g,0);
analogWrite(b,255);
delay(bekleme);

analogWrite(r,255); //9 numaralı pwn pinini 255 değerine eşitledik
analogWrite(g,255);
analogWrite(b,0);
delay(bekleme);

analogWrite(r,0); //9 numaralı pwn pinini 255 değerine eşitledik
analogWrite(g,255);
analogWrite(b,255);
delay(bekleme);
*/
analogWrite(r,random(0,255)); //9 numaralı pwn pinini 255 değerine eşitledik
analogWrite(g,random(0,255));
analogWrite(b,random(0,255));
delay(bekleme);
}
