int a,b,c,d,e;
int val[7];
void setup() {
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT); // put your setup code here, to run once:
pinMode(6,INPUT);
pinMode(7,INPUT);
Serial.begin(9600);
}

void loop() {

 a=digitalRead(3);
 Serial.print(a);
 b=digitalRead(4);
 Serial.print(b);
 c=digitalRead(5);
 Serial.print(c);
 d=digitalRead(6);
 Serial.print(d);
 e=digitalRead(7);
 Serial.println(e);// put your main code here, to run repeatedly:

  }

