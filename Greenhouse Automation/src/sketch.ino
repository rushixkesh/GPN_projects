#define BLYNK_TEMPLATE_ID "TMPLRTr2gWyE"
#define BLYNK_DEVICE_NAME "DHT"
#define BLYNK_AUTH_TOKEN "sVIS_4AxuNcyKY2GPo9eZw0f_a-g61xx"

#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#include <DHT.h>
#define DHTPIN 15
#define DHTTYPE DHT22
DHT dht (DHTPIN, DHTTYPE);
#define device1 14
#define device2 12

char auth[] = "sVIS_4AxuNcyKY2GPo9eZw0f_a-g61xx";
char ssid[] = "Wokwi-GUEST";
char pass[] = "";

BlynkTimer timer;

void setup() {
  // put your setup code here, to run once:
  pinMode(device1, OUTPUT);
  pinMode(device2,OUTPUT);
  Serial.begin(115200);
  Serial.println("System monitoring Temperature and Humidity");
  dht.begin();
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  // put your main code here, to run repeatedly:
  float t = dht.readTemperature(); 
  float h = dht.readHumidity();
  delay(1000);

  Blynk.virtualWrite(V0, t); 
  Blynk.virtualWrite(V1, h);

  Serial.println("Temperature = ");;
  Serial.print(t);
  Serial.println("Humidity = ");;
  Serial.print(h);

  if(t<=50){
    digitalWrite(device1, LOW);
  }else{
    digitalWrite(device1, HIGH);
    //delay();
    
  }
  if(h<=50){
    digitalWrite(device2, LOW);
  }else{
    digitalWrite(device2, HIGH);
    //delay();
      
  }
  Blynk.run();
  timer.run();
}
