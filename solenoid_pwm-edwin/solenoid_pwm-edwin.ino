// Solenoid control in steps
//ROBOCON - 2017

boolean val1 = true;
boolean val2 = true;

#define button1 2
#define button2 4 

#define Piston1_1 3
#define Piston1_2 5

#define Piston2_1 6
#define Piston2_2 7


void setup() {
  Serial.begin(9600);
  pinMode(button1, INPUT);    // for two-way switch
  pinMode(button2, INPUT);

  pinMode(Piston1_1, OUTPUT);   // for first piston
  pinMode(Piston1_2, OUTPUT);
  digitalWrite(button1, HIGH);
  digitalWrite(button2, HIGH);

  pinMode(Piston1_1, OUTPUT);   // for second piston
  pinMode(Piston1_2, OUTPUT);
  digitalWrite(button1, HIGH);
  digitalWrite(button2, HIGH);

}

void loop() {
  val1 = digitalRead(button1);
  val2 = digitalRead(button2);


  if (val1 == true && val2 == false) { //UP switch
    analogWrite(Piston1_1, 128);
    analogWrite(Piston1_2, 0);
    Serial.println("up");
    delay(20);  //10ms up = 1 Step
    analogWrite(Piston1_1, 255);
    analogWrite(Piston1_2, 255);
    delay(100); // lock
  } else if (val1 == false && val2 == true) { //DOWN switch
    analogWrite(Piston1_1, 0); 
    analogWrite(Piston1_2, 128);
    Serial.println("down");
    delay(20); //10ms down = 1 Step
    analogWrite(Piston1_1, 255);
    analogWrite(Piston1_2, 255);
    delay(100); // Lock

  }

  digitalWrite(button1, HIGH);
  digitalWrite(button2, HIGH);
  analogWrite(Piston1_1, 255);
  analogWrite(Piston1_2, 255);
  delay(200);


}
