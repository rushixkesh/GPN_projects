#define BLYNK_TEMPLATE_ID "TMPLRzfyc4wv"
#define BLYNK_DEVICE_NAME "Relay"
#define BLYNK_AUTH_TOKEN "wXnKjAHgzYnLhUlIBr2_wnotoca4aFqD"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

char auth[] = "wXnKjAHgzYnLhUlIBr2_wnotoca4aFqD";
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

BlynkTimer timer;
#define relay1 13 //1
int SW_relay1 = 0;
#define relay2 12 //r2
int SW_relay2 = 0;
#define relay3 14 //r3
int SW_relay3 = 0;
#define relay4 27 //r4
int SW_relay4 = 0;
#define relay5 26 // r5
int SW_relay5 = 0;

BLYNK_WRITE(V1)
{
  SW_relay1 = param.asInt();
  if (SW_relay1 ==1){
    digitalWrite(relay1, HIGH);
    Serial.println("RED ON");
    Blynk.virtualWrite(V1, HIGH);
  }else{
    digitalWrite(relay1, LOW);
    Serial.println("RED OFF");
    Blynk.virtualWrite(V1, LOW);
  }
}
BLYNK_WRITE(V2)
{
  SW_relay2 = param.asInt();
  if (SW_relay2 ==1){
    digitalWrite(relay2, HIGH);
    Serial.println("GREEN ON");
    Blynk.virtualWrite(V2, HIGH);
  }else{
    digitalWrite(relay2, LOW);
    Serial.println("GREEN OF");
    Blynk.virtualWrite(V2, LOW);
  }
}
BLYNK_WRITE(V3)
{
  SW_relay3 = param.asInt();
  if (SW_relay3 ==1){
    digitalWrite(relay3, HIGH);
    Serial.println("BLUE ON");
    Blynk.virtualWrite(V3, HIGH);
  }else{
    digitalWrite(relay3, LOW);
    Serial.println("BLUE OFF");
    Blynk.virtualWrite(V3, LOW);
  }
}
BLYNK_WRITE(V4)
{
  SW_relay4 = param.asInt();
  if (SW_relay4 ==1){
    digitalWrite(relay4, HIGH);
    Serial.println("YELLOW ON");
    Blynk.virtualWrite(V4, HIGH);
  }else{
    digitalWrite(relay4, LOW);
    Serial.println("YELLOW OFF");
    Blynk.virtualWrite(V4, LOW);
  }
}
BLYNK_WRITE(V5)
{
  SW_relay5 = param.asInt();
  if (SW_relay5 ==1){
    digitalWrite(relay5, HIGH);
    Serial.println("PURPLE ON");
    Blynk.virtualWrite(V5, HIGH);
  }else{
    digitalWrite(relay5, LOW);
    Serial.println("PURPLE OFF");
    Blynk.virtualWrite(V5, LOW);
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
  timer.run();
}
