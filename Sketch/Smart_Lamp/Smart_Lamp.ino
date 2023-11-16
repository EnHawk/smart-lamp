#define BLYNK_PRINT Serial

// Device Configuration. Can be get from My Devices > [Your Device] > Device Info
#define BLYNK_TEMPLATE_ID ""
#define BLYNK_TEMPLATE_NAME ""
#define BLYNK_AUTH_TOKEN ""

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = ""; // The WiFi name you want the board to connect to
char pass[] = ""; // The password of the Wifi

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  // put your main code here, to run repeatedly:
  Blynk.run();
}
