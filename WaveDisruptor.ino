#include <SPI.h>
#include <RF24.h>
#include <ezButton.h>

// پین‌های NRF24 برای آردوینو یونو
// CE به پین 9
// CSN به پین 10
// SCK به پین 13
// MOSI به پین 11
// MISO به پین 12
RF24 radio(9, 10);  // CE, CSN

byte i = 45;  // کانال شروع - بین 37 تا 50 توصیه می‌شود
unsigned int flag = 0;
ezButton toggleSwitch(4); // دکمه به پین 4 متصل می‌شود

void setup() {
  Serial.begin(115200);
  toggleSwitch.setDebounceTime(50);
  
  // راه‌اندازی NRF24
  if (radio.begin()) {
    delay(200);
    Serial.println(F("NRF24 Started!"));
    
    radio.setAutoAck(false);
    radio.stopListening();
    radio.setRetries(0, 0);
    radio.setPayloadSize(5);   // تنظیم سایز پیام
    radio.setAddressWidth(3);  // تنظیم طول آدرس
    radio.setPALevel(RF24_PA_MAX);
    radio.setDataRate(RF24_2MBPS);
    radio.setCRCLength(RF24_CRC_DISABLED);
    
    // نمایش تنظیمات
    radio.printDetails();
    
    // شروع حامل ثابت
    radio.startConstCarrier(RF24_PA_MAX, i);
  } else {
    Serial.println(F("NRF24 failed to start!"));
    while (1) {} // توقف اگر راه‌اندازی نشد
  }
}

void two() {
  // پرش کانال با فاصله 2
  if (flag == 0) {
    i += 2;
  } else {
    i -= 2;
  }
  
  if ((i > 79) && (flag == 0)) {
    flag = 1;
  } else if ((i < 2) && (flag == 1)) {
    flag = 0;
  }
  
  radio.setChannel(i);
  // Serial.println(i); // برای دیباگ
}

void one() {
  // پیمایش تمام کانال‌ها
  for (int i = 0; i < 79; i++) {
    radio.setChannel(i);
  }
}

void loop() {
  toggleSwitch.loop();
  
  int state = toggleSwitch.getState();
  if (state == HIGH) {
    two();  // پرش دوتایی
  } else {
    one();  // پیمایش کامل
  }
}