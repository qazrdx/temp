#include <Servo.h>

int pos = 0;
Servo bldc;

void arm(){
  setSpeed(0);
  delay(1000);   
 }

void setSpeed(int speed){
  int angle = map(speed, 0, 100, 0, 180);
  bldc.write(angle);
}
void setup() {
  // put your setup code here, to run once:

  bldc.attach(9);
  arm();
}

void loop() {
  // put your main code here, to run repeatedly:
  int speed;
  for(speed=0;speed<=70;speed+=5){
    setSpeed(speed);
    delay(1000);
  }
  delay(4000);

  for(speed=70;speed>=0;speed-=5){
    setSpeed(speed);
    delay(1000);
  }
  delay(4000);
  setSpeed(0);
  delay(1000);
}
