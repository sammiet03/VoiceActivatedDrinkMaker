#ifdef ENABLE_DEBUG
#define DEBUG_ESP_PORT Serial
#define NODEBUG_WEBSOCKETS
#define NDEBUG
#endif
#include <Arduino.h>
#ifdef ESP8266
#include <ESP8266WiFi.h>
#endif
#ifdef ESP32
#include <WiFi.h>
#endif
#include "SinricPro.h"
#include "SinricProSwitch.h"
int luce_1 = 4; //GPIO Pin 4 correspond with the pin D2 on wemos //
int luce_2 = 2; //GPIO Pin 2 correspond with the pin D4 on wemos // works!
int luce_3 = 16; //GPIO Pin 16 correspond with the pin TOP D0 on wemos // fixed
int luce_4 = 14; //GPIO Pin 14 correspond with the pin D5 on wemos /// works!
#define WIFI_SSID "Verizon-RC400L-78"
#define WIFI_PASS "Tech190BProject03!"

#define APP_KEY "1ca1f97a-4608-49de-9e22-4b065da3fd9c" // APP KEY in SinricPro
#define APP_SECRET "c43e46a8-c252-4c80-a653-5da332f0b9b4-29f9e3e6-7ebf-4b8a-a434-7c8c7a3d1bcf" // APP SECRET in SinricPro

#define SWITCH_ID_1 "6261b6f3d0fd258c52166e16" // Device ID
#define SWITCH_ID_2 "6261b156d0fd258c5216686a" 
#define SWITCH_ID_3 "6261b194d0fd258c521668db"
#define SWITCH_ID_4 "6261b1b2753dc5aab4af1aa2"
#define BAUD_RATE 230400

// initial power state of pumps 
bool onPowerState1(const String &deviceId, bool &state) {
Serial.printf("Device 1 turned %s\r\n", state?"on":"off");
digitalWrite(luce_1,!state);
return true; // request handled properly
}
bool onPowerState2(const String &deviceId, bool &state) {
Serial.printf("Device 2 turned %s\r\n", state?"on":"off");
digitalWrite(luce_2,!state); //pin4
return true; // request handled properly
}
bool onPowerState3(const String &deviceId, bool &state) {
Serial.printf("Device 3 turned %s\r\n", state?"on":"off");
digitalWrite(luce_3,!state);
return true; // request handled properly
}
bool onPowerState4(const String &deviceId, bool &state) {
Serial.printf("Device 4 turned %s\r\n", state?"on":"off");
digitalWrite(luce_4,!state);
return true; // request handled properly
}
// setup function for WiFi connection
void setupWiFi() {
Serial.printf("\r\n[Wifi]: Connecting");
WiFi.begin(WIFI_SSID, WIFI_PASS);
while (WiFi.status() != WL_CONNECTED) {
Serial.printf(".");
delay(250);
}
Serial.printf("connected!\r\n[WiFi]: IP-Address is %s\r\n", WiFi.localIP().toString().c_str());
WiFi.setAutoReconnect(true);
}
// setup function for SinricPro
void setupSinricPro() {
// add devices and callbacks to SinricPro
SinricProSwitch& mySwitch1 = SinricPro[SWITCH_ID_1];
mySwitch1.onPowerState(onPowerState1);
SinricProSwitch& mySwitch2 = SinricPro[SWITCH_ID_2];
mySwitch2.onPowerState(onPowerState2);
SinricProSwitch& mySwitch3 = SinricPro[SWITCH_ID_3];
mySwitch3.onPowerState(onPowerState3);
SinricProSwitch& mySwitch4 = SinricPro[SWITCH_ID_4];
mySwitch4.onPowerState(onPowerState4);
// setup SinricPro
SinricPro.onConnected([](){ Serial.printf("Connected to SinricPro\r\n"); });
SinricPro.onDisconnected([](){ Serial.printf("Disconnected from SinricPro\r\n"); });
SinricPro.begin(APP_KEY, APP_SECRET);
}
// main setup function
void setup() {
Serial.begin(BAUD_RATE); Serial.printf("\r\n\r\n");
digitalWrite(luce_1,HIGH);
digitalWrite(luce_2,HIGH);
digitalWrite(luce_3,HIGH);
digitalWrite(luce_4,HIGH);
pinMode(luce_1,OUTPUT);
pinMode(luce_2,OUTPUT);//pin4
pinMode(luce_3,OUTPUT);
pinMode(luce_4,OUTPUT);
setupWiFi();
setupSinricPro();
}
void loop() {
SinricPro.handle();
}
