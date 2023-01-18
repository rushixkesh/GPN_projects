#define trigPin 13
#define echoPin 12
#define motor 7
#define buzzer 6

void setup()
{ pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(motor, OUTPUT);
pinMode(buzzer,OUTPUT);
}

void loop()
{ long duration, distance;
digitalWrite(trigPin, LOW); 
delayMicroseconds(2); 
digitalWrite(trigPin, HIGH);
delayMicroseconds(10); 
digitalWrite(trigPin, LOW);

duration = pulseIn(echoPin, HIGH);
distance = (duration/2) / 29.1;

if (distance < 20) // Checking the distance
{ 
digitalWrite(motor,HIGH); 
digitalWrite(buzzer,HIGH);
} else
{
digitalWrite(motor,LOW);
digitalWrite(buzzer,LOW); 
} 
}
