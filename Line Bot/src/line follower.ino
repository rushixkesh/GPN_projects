#define ir1 2      // left sensor
#define ir2 3      // right sensor

#define m1a 4       // left motor
#define m1b 5       // left motor
#define m2a 6       // right motor
#define m2b 7       // right motor

void setup()
{
pinMode(ir1, INPUT);
pinMode(ir2, INPUT);
pinMode(m1a, OUTPUT);
pinMode(m1b, OUTPUT);
pinMode(m2a, OUTPUT);
pinMode(m2b, OUTPUT);
}

void loop()
{
if(digitalRead(ir1) && digitalRead(ir2))     // Move Forward
{
digitalWrite(m1a, HIGH);
digitalWrite(m1b, LOW);
digitalWrite(m2a, HIGH);
digitalWrite(m2b, LOW);
}

if(!(digitalRead(ir1)) && digitalRead(ir2))     // Turn right
{
digitalWrite(m1a, LOW);
digitalWrite(m1b, LOW);
digitalWrite(m2a, HIGH);
digitalWrite(m2b, LOW);
}

if(digitalRead(ir1) && !(digitalRead(ir2)))     // turn left
{
digitalWrite(m1a, HIGH);
digitalWrite(m1b, LOW);
digitalWrite(m2a, LOW);
digitalWrite(m2b, LOW);
}

if(!(digitalRead(ir1)) && !(digitalRead(ir2)))     // stop
{
digitalWrite(m1a, LOW);
digitalWrite(m1b, LOW);
digitalWrite(m2a, LOW);
digitalWrite(m2b, LOW);
}
}