int RMF = 5;
int RMB = 4;
int LMF = 7;
int LMB = 6;
int trigPin = 9;
int echoPin = 8;
int c =0;
void setup()
{ 
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(4, OUTPUT);
pinMode(7, OUTPUT);
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);}
void loop()
{long duration, distance;
digitalWrite(trigPin, HIGH);
delayMicroseconds(1000);
digitalWrite(trigPin, LOW);
//delayMicroseconds(10);
//digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distance = (duration/2)/29.1;
Serial.println(distance);
delay(10);
if(distance>20)
{digitalWrite(5,HIGH);
digitalWrite(4,LOW);
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
delay(1000);}
else if (distance<20)
{digitalWrite(5,HIGH);
digitalWrite(4,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,LOW);}
}
