int pot;
int mapped;
int pot1;
int mapped1;

void setup() {
 Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(3,OUTPUT);
pinMode(2,OUTPUT);

pinMode(A1,INPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
}

void loop() {
pot = analogRead(A0);
digitalWrite(2,HIGH);
mapped = map(pot,0,1023,0,255);
Serial.print("Motor 1:");
Serial.println(mapped);
analogWrite(3,mapped);

pot1 = analogRead(A1);
digitalWrite(6,HIGH);
mapped1 = map(pot1,0,1023,0,255);
Serial.print("Motor 2:");
Serial.println(mapped1);
analogWrite(5,mapped1);
}
