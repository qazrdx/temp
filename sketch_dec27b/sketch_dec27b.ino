
boolean solenoid1=true;
//boolean solenoid5=false;
int mapped=555;
void setup() {
 Serial.begin(9600);

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);


//pinMode(5,OUTPUT);
//pinMode(7,OUTPUT);
}

void loop() {


digitalWrite(2,HIGH);
digitalWrite(3,LOW);
analogWrite(A1,255);
analogWrite(A2,0);
delay(1000);
//
digitalWrite(2,LOW);
digitalWrite(3,HIGH);
analogWrite(A1,0);
analogWrite(A2,255);
//
delay(1000);
}
