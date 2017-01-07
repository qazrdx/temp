
boolean solenoid1=true;
//boolean solenoid5=false;
int mapped=555;
void setup() {
 Serial.begin(9600);

pinMode(3,OUTPUT);
pinMode(5,OUTPUT);


//pinMode(5,OUTPUT);
//pinMode(7,OUTPUT);
}

void loop() {

//digitalWrite(3,LOW);
//Serial.println("m");
//digitalWrite(5,HIGH);
//delay(500);
digitalWrite(3,HIGH);
//digitalWrite(3,LOW);
analogWrite(5,128);

//delay(1000);
////analogWrite(5,150);
//
//digitalWrite(5,LOW);
//analogWrite(3,150);

//delay(5000);
//
////digitalWrite(7,LOW);
//digitalWrite(3,HIGH);
//
//analogWrite(10,128);
//delay(1000);
}
