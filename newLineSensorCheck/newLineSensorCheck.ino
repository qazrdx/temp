
int pins[] = {42, 44, 38, 40, 34};

void setup() {
  Serial.begin(9600);
  int i;
  for(i = 0; i< 5;i++)  pinMode(pins[i], INPUT);
  
}

void loop() {
  int i;
  for(i = 0; i< 5;i++)  Serial.print(digitalRead(pins[i]));
  Serial.println("The inputed value is:");
  delay(10);        // delay in between reads for stability
}



