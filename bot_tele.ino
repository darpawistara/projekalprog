#include <CTBot.h>
CTBot myBot;

String ssid = "******";
String pass = "******";
String token = "******";
Const int id = "*******";

void setup() {
  Serial.begin(9600);
  Sensors.begin();
  myBot.wifiConnect(ssid, pass);
  myBot.setTelegramToken(token);

  if(myBot.testConnection()) {
    Serial.printLn("Koneksi Bagus");
  } else {
    serial.println("Koneksi Jelek");
  }
}

void loop() {
  if (suhu > 30) {
    myBot.sendMessage(id, "Suhu Panas")
  } else if (suhu < 20) {
    myBot.sendMessage(id, "Suhu Dingin")
  }
}
