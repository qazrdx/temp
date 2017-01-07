int val = 255;


void setup()
{
  // speed control
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  digitalWrite(4, HIGH);
  
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0) {
    val = Serial.parseInt();
    analogWrite(3, val);
    Serial.println(val);
  }


}

