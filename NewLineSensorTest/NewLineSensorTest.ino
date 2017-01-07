
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:

  pinMode(49, INPUT);
  pinMode(47, INPUT);
  pinMode(37, INPUT);
  pinMode(45, INPUT);
  pinMode(43, INPUT);
  pinMode(41, INPUT);
  pinMode(39, INPUT);
  pinMode(48, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  // print out the state of the button:

  int sensor[8];
  sensor[0] = digitalRead(49);
  sensor[1] = digitalRead(47);
  sensor[2] = digitalRead(37);
  sensor[3] = digitalRead(45);
  sensor[4] = digitalRead(43);
  sensor[5] = digitalRead(41);
  sensor[6] = digitalRead(39);
  sensor[7] = digitalRead(48);
  
  int i;
  Serial.print(" [");
  for(i=0; i<8; i++)  {
    Serial.print(sensor[i]);
    Serial.print(", ");
  }
  Serial.println(" ]");
  delay(100);        // delay in between reads for stability
}



