#include "WiFi.h"
#include "esp_wifi.h"
#include "esp_bt.h"
//#############################################
#include <ESP32Servo.h>
Servo direccion;
//#############################################
#define servoPin 20
#define potPin 21

void setup() {
   pinMode(potPin,INPUT);
   direccion.attach(servoPin);
   
  // --- APAGAR WiFi ---
  WiFi.disconnect(true);
  WiFi.mode(WIFI_OFF);
  esp_wifi_stop();
  esp_wifi_deinit();

  // --- APAGAR Bluetooth ---
  esp_bt_controller_disable();
  esp_bt_controller_deinit();

}

void loop() {
 int valorPot = analogRead(potPin);
 int valorServo = map(valorPot,600,1050,52,0);
 direccion.write(valorServo);

}