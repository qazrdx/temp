
#include <Servo.h>
int val = 255;
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
boolean switchfs, switchbs;

void setup()
{
  // servo
  pinMode(9, OUTPUT);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
  pinMode(2, INPUT_PULLUP);
  pinMode(4, OUTPUT);
  digitalWrite(4, LOW);


  // speed control
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(8, OUTPUT);
    
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);

  Serial.begin(9600);
}

void loop()
{
  switchfs = digitalRead(2);

  
  if (switchfs == LOW)
  {
    for (pos = 70; pos <= 120; pos += 1) // goes from 0 degrees to 180 degrees
    { 
      myservo.write(pos);              // tell servo to go to position in variable 'pos'
      delay(15);       // waits 15ms for the servo to reach the position
    }
  }

  if (Serial.available() > 0) {
    val = Serial.parseInt();
    Serial.println(val);
    analogWrite(3, val);
    analogWrite(5, val);
  }

}

