const int trigpin=13;
const int echopin=12;
const int ledpin=1;
const int ldrpin=A3;
long duration;
int distance;
int safedistance;
const int relay1 = A0;//high

const int relay2 = A1;//low




void setup() {
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(ledpin,OUTPUT);
  pinMode(ldrpin,INPUT);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
 
}

void loop() {
  Serial.begin(9600);
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  duration=pulseIn(echopin,HIGH);
  distance=duration*0.034/2;
  safedistance=distance;
  digitalWrite(A0, HIGH);
  delay(10);
  digitalWrite(A0, LOW);
  digitalWrite(A1, HIGH);
  delay(10000);
  int light=analogRead(ldrpin);
  if(light>=800){
    if(safedistance<=15){
      digitalWrite(ledpin,HIGH);
      delay(10);
      digitalWrite(A0, HIGH);//light off
      digitalWrite(A1, LOW);//light on
      delay(10000);
    }
    else if(safedistance>15){
      digitalWrite(ledpin,HIGH);
      delay(10);
      digitalWrite(A0, LOW);
      digitalWrite(A1, HIGH);//light on
      delay(10000);
      
    }
  }
  delay(200);

}


