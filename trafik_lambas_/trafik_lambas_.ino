int red = 8;
int yellow = 9;
int green = 10;
void setup() {
 pinMode(red, OUTPUT);
 pinMode(yellow, OUTPUT);
 pinMode(green, OUTPUT);

}

void loop() {
digitalWrite(red,1); 
digitalWrite(yellow,0); 
digitalWrite(green,0); 
delay(10000);

digitalWrite(yellow,1); 
digitalWrite(red,0); 
digitalWrite(green,0); 
delay(1000);

digitalWrite(red,0); 
digitalWrite(yellow,0); 
digitalWrite(green,1); 
delay(10000);

digitalWrite(red,0); 
digitalWrite(yellow,1); 
digitalWrite(green,0); 
delay(1000);
}
