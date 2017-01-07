#include <Servo.h>

int value = 0; // set values you need to zero

Servo firstESC;

const int ESC=9; //

void setup() {

firstESC.attach(9); // attached to pin 9 I just do this with 1 Servo

pinMode(ESC,OUTPUT);

Serial.begin(9600); // start serial at 9600 baud

Serial.println("starting arm....");

firstESC.writeMicroseconds(0);

delay(1000);

firstESC.writeMicroseconds(2000);

delay(1000);

firstESC.writeMicroseconds(700);

delay(1000);

Serial.println("fimarm...");

}

void loop() {

firstESC.writeMicroseconds(value);

if(Serial.available()){

value = Serial.parseInt(); // Parse an Integer from Serial

Serial.print("typed>"+value);

}

}
