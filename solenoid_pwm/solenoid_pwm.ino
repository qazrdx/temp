// Solenoid control in steps
//ROBOCON - 2017

boolean val1 = true;
boolean val2 = true;

void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);    // for two-way switch
  pinMode(4, INPUT);

  pinMode(3, OUTPUT);   // for first piston
  pinMode(5, OUTPUT);
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);


}

void loop() {
  val1 = digitalRead(2);//read switch
  val2 = digitalRead(4);


  if (val1 == true && val2 == false) { //UP switch
    analogWrite(3, 128);
    analogWrite(5, 0);
    Serial.println("up");
    delay(20);  //10ms up = 1 Step
    analogWrite(3, 200);//compensate for offset during going up 
    analogWrite(5, 255);
    delay(100); // lock

  }

  else if (val1 == false && val2 == true) { //DOWN switch
    analogWrite(5, 128);
    analogWrite(3, 0);
    Serial.println("down");
    delay(20); //10ms down = 1 Step
    analogWrite(3, 255);
    analogWrite(5, 200);// check....255
    delay(100); // Lock

  }

  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  analogWrite(3, 255);
  analogWrite(5, 255);
  delay(200);


}
