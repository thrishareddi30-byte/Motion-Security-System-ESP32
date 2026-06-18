#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define PIR_PIN 15
#define LED_PIN 2
#define BUZZER_PIN 4

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  Serial.begin(115200);

  pinMode(PIR_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("Security");
  lcd.setCursor(0, 1);
  lcd.print("System");

  delay(2000);
  lcd.clear();
}

void loop() {
  int motion = digitalRead(PIR_PIN);

  if (motion == HIGH) {
    digitalWrite(LED_PIN, HIGH);
    tone(BUZZER_PIN, 1000);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("INTRUSION");
    lcd.setCursor(0, 1);
    lcd.print("DETECTED!");

    Serial.println("ALERT: Intrusion Detected!");
  }
  else {
    digitalWrite(LED_PIN, LOW);
    noTone(BUZZER_PIN);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("AREA SAFE");
    lcd.setCursor(0, 1);
    lcd.print("No Motion");

    Serial.println("Status: Area Safe");
  }

  delay(1000);
}
