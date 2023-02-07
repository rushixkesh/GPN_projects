
void setup()
{
  pinMode(A5, INPUT);
  pinMode(11, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (analogRead(A5) > 500) {
    digitalWrite(11, HIGH);
  Serial.print("  high  ");
    delay(1000);
  } else {
    digitalWrite(11, LOW);
  Serial.print("  low  ");
    delay(1000);
  }
  //delay(10); // Delay a little bit to improve simulation performance
}