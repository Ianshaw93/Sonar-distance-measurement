int trigPin=12;
int echoPin=11;
float pingTravelTime;
float distanceToTarget;
float pingTravelDistance;

void setup() {
  // put your setup code here, to run once:
pinMode(trigPin,OUTPUT);
pinMode(echoPin,INPUT);
Serial.begin(9000);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trigPin,LOW);
delayMicroseconds(10);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pingTravelTime=pulseIn(echoPin,HIGH);
delay(25);
pingTravelDistance=(pingTravelTime*34300./1000000.);
distanceToTarget=pingTravelDistance/2.;
Serial.println(distanceToTarget);
delay(250);
}
