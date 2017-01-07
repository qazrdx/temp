#define d 2 
#define pwm 3
int val =255;
void setup() {
digitalWrite(6,High);
pinMode(pwm.OUTPUT);
pinMode(d,OUTPUT);
  

}

void loop() {
  if(Serial.available()>0)
  val=Serial.read();
  analogWrite(val);
}
