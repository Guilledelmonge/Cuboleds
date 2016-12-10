#include <LiquidCrystal.h>
#include "notas.h"
LiquidCrystal lcd(12, 11, 6, 5, 4, 3);
int BuzzerPin = 2;
void setup() {
pinMode(BuzzerPin, OUTPUT);
pinMode( 30, OUTPUT );pinMode( 31, OUTPUT );pinMode( 32, OUTPUT );pinMode( 33, OUTPUT );pinMode( 34, OUTPUT );pinMode( 35, OUTPUT );pinMode( 36, OUTPUT );
pinMode( 37, OUTPUT );pinMode( 38, OUTPUT );pinMode( 39, OUTPUT );pinMode( 40, OUTPUT );pinMode( 41, OUTPUT );pinMode( 42, OUTPUT );pinMode( 43, OUTPUT );
pinMode( 44, OUTPUT );pinMode( 45, OUTPUT );pinMode( 46, OUTPUT );pinMode( 47, OUTPUT );pinMode( 48, OUTPUT );pinMode( 49, OUTPUT );
Serial.begin(9600);
}

void loop() {
 lcd.setCursor(0, 0);
 lcd.print("**BIENVENIDOS!**");
 for (int i = 0; i < 25; i++) {
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 13; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0); delay(1);
  }
  for (int i = 0; i < 9; i++) {
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(1);
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 1); delay(1);
    PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0); delay(1);
  }
  for (int i = 0; i < 25; i++) {
    PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1); delay(1);
  }

 char dato = Serial.read();
 if (dato == 'A') {
  lcd.setCursor(0, 0);
  lcd.print("***cancion 1****");
  for (int i = 0; i < 1; i++) {
   //codigo y canción #1
  beep(BuzzerPin, Fa, negra);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, corchea);
  PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, corchea);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, negra);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Mi, corchea);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, negraymedia);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Mi, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Do, blanca);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, negra);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Si, negra);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, negraymedia);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0); delay(50); beep(BuzzerPin, Fa, blanca);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, Fa, blanca);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, Fa, negraymedia);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, negra);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); delay(corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, negra);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); delay(corchea);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, MiAlto, corchea);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, MiAlto, corchea);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, FaAlto, negra);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, Fa, negra);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); delay(negra);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, La, negraymedia);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Fa, negra);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, DoAlto, negraymedia);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, negra);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, DoAlto, negraymedia);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Si, negraymedia);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, DoAlto, negraymedia);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Fa, negra);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0); delay(50); beep(BuzzerPin, Fa, negra);
  PrenderLeds(1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0); delay(50); beep(BuzzerPin, Fa, corchea);
  PrenderLeds(1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0); delay(50); beep(BuzzerPin, DoAlto, negra);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); delay(corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1); delay(50); beep(BuzzerPin, DoAlto, negra);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0); delay(50); delay(corchea);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, MiAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, FaAlto, negra);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, blanca); 
  }
}
if (dato == 'S') {
 lcd.setCursor(0, 0);
 lcd.print("***cancion 2****");
 for (int i = 0; i < 1; i++) {
   //Codigo y canción #2
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Do, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, corchea);
  PrenderLeds(0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, corchea);
  PrenderLeds(0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, negra);
  PrenderLeds(0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, semicorchea);
  PrenderLeds(0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0); delay(50); delay(corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Mi, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 1); delay(50); beep(BuzzerPin, Sol, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1); delay(50); beep(BuzzerPin, La, semicorchea);
  PrenderLeds(0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Sol, semicorchea);
  PrenderLeds(0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1); delay(50); beep(BuzzerPin, Mi, semicorchea);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, semicorchea);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); delay(corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, semicorchea);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Mi, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, semicorchea);
  PrenderLeds(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, semicorchea);
  PrenderLeds(0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, semicorchea);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Mi, semicorchea);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0); delay(50); delay(corchea);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1); delay(50); beep(BuzzerPin, ReAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1); delay(50); beep(BuzzerPin, DoAlto, negra);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, negra);
  PrenderLeds(0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, negra);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, negra);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(50); beep(BuzzerPin, La, semicorchea);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, La, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); delay(corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); delay(corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Si, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, corchea);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0); delay(50); delay(corchea);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Fa, semicorchea);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Sol, corchea);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Mi, corchea);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, corchea);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, corchea); 
 }
}
if (dato == 'D') {
 lcd.setCursor(0, 0);
 lcd.print("***cancion 3****");
 for (int i = 0; i < 1; i++) {    
   //Codigo y canción #3
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semicorchea); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semicorchea); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semicorchea); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semicorchea); delay(100);
  PrenderLeds(1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semicorchea); delay(100);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, Re, semicorchea); delay(100);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, Re, semicorchea); delay(100);
  PrenderLeds(1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, Re, semicorchea); delay(100);
  PrenderLeds(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, Re, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, La, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, DoAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, ReAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, ReAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, ReAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, MiAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, FaAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, FaAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, FaAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, SolAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, MiAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, MiAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, ReAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, DoAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, DoAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, ReAlto, semifusa); delay(150);
  PrenderLeds(0, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, La, semifusa); delay(50);
  PrenderLeds(1, 0, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, DoAlto, semifusa); delay(50);
  PrenderLeds(1, 1, 0, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, ReAlto, semifusa); delay(100);
  PrenderLeds(1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, ReAlto, semifusa); delay(100);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, ReAlto, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, MiAlto, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, FaAlto, semifusa); delay(100);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); beep(BuzzerPin, FaAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 0); beep(BuzzerPin, FaAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, SolAlto, semifusa); delay(50);
  PrenderLeds(0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, MiAlto, semifusa); delay(100);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, MiAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 0, 0); beep(BuzzerPin, ReAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0, 0); beep(BuzzerPin, DoAlto, semifusa); delay(50);
  PrenderLeds(0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0); beep(BuzzerPin, ReAlto, semifusa); delay(200);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0); beep(BuzzerPin, La, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 0); beep(BuzzerPin, DoAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0); beep(BuzzerPin, ReAlto, semifusa); delay(100);
  PrenderLeds(0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0); beep(BuzzerPin, ReAlto, semifusa); delay(100);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0); beep(BuzzerPin, ReAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1); beep(BuzzerPin, FaAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1); beep(BuzzerPin, SolAlto, semifusa); delay(100);
  PrenderLeds(0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1); beep(BuzzerPin, SolAlto, semifusa); delay(100);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1); beep(BuzzerPin, SolAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1); beep(BuzzerPin, SolLargo, semifusa); delay(50);
  PrenderLeds(0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, LaLargo, semifusa); delay(100);
  PrenderLeds(0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, LaLargo, semifusa); delay(100);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, SolLargo, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0); beep(BuzzerPin, SolAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, SolLargo, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, ReAlto, semifusa); delay(150);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, ReAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 1, 0, 0); beep(BuzzerPin, MiAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0); beep(BuzzerPin, FaAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); beep(BuzzerPin, FaAlto, semifusa); delay(100);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); beep(BuzzerPin, SolAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 0); beep(BuzzerPin, SolLargo, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0); beep(BuzzerPin, ReAlto, semifusa); delay(150);
  PrenderLeds(0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); beep(BuzzerPin, ReAlto, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); beep(BuzzerPin, FaAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1); beep(BuzzerPin, MiAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1); beep(BuzzerPin, MiAlto, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); beep(BuzzerPin, FaAlto, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); beep(BuzzerPin, ReAlto, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1); beep(BuzzerPin, MiAlto, semifusa); delay(200);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, SolLargo, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, DoGrande, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, ReGrande, semifusa); delay(100);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(100);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(50);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0); beep(BuzzerPin, MiGrande, semifusa); delay(50);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0); beep(BuzzerPin, FaGrande, semifusa); delay(100);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0); beep(BuzzerPin, FaGrande, semifusa); delay(100);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0); beep(BuzzerPin, FaGrande, semifusa); delay(50);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); beep(BuzzerPin, SolGrande, semifusa); delay(50);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1); beep(BuzzerPin, MiGrande, semifusa); delay(100);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1); beep(BuzzerPin, MiGrande, semifusa); delay(100);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, ReGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, DoGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0); beep(BuzzerPin, DoGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(150);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, SolLargo, semifusa); delay(50);
  PrenderLeds(0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, DoGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, ReGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, ReGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, MiGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, FaGrande, semifusa); delay(100);
  PrenderLeds(0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, FaGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, FaGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, SolGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0); beep(BuzzerPin, MiGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, MiGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(50);
  PrenderLeds(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, DoGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(200);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, SolLargo, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1); beep(BuzzerPin, DoGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, ReGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, ReGrande, semifusa); delay(100);
  PrenderLeds(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, ReGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, FaGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, SolGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0); beep(BuzzerPin, SolGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0); beep(BuzzerPin, SolGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1); beep(BuzzerPin, LaGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0); beep(BuzzerPin, LaSostenidoGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0); beep(BuzzerPin, LaSostenidoGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, LaGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0); beep(BuzzerPin, SolGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0); beep(BuzzerPin, LaGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, ReGrande, semifusa); delay(150);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0); beep(BuzzerPin, ReGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0); beep(BuzzerPin, MiGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0); beep(BuzzerPin, FaGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); beep(BuzzerPin, FaGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, SolGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); beep(BuzzerPin, LaGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, ReGrande, semifusa); delay(150);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0); beep(BuzzerPin, FaGrande, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0); beep(BuzzerPin, MiGrande, semifusa); delay(100);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1); beep(BuzzerPin, MiGrande, semifusa); delay(100);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0); beep(BuzzerPin, ReGrande, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 0, 1, 0, 0); beep(BuzzerPin, DoSostenidoGrande, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(100);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(100);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0); beep(BuzzerPin, MiGrande, semifusa); delay(100);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1); beep(BuzzerPin, FaGrande, semifusa); delay(100);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0); beep(BuzzerPin, FaGrande, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 0, 0); beep(BuzzerPin, FaGrande, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0); beep(BuzzerPin, SolGrande, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); beep(BuzzerPin, LaGrande, semifusa); delay(200);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0); beep(BuzzerPin, FaGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0); beep(BuzzerPin, SolLargo, fusa); delay(300);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); beep(BuzzerPin, LaSostenidoGrande, fusa); delay(200);
  PrenderLeds(0, 0, 0, 0, 0, 1, 1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1); beep(BuzzerPin, FaGrande, semifusa); delay(50);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); beep(BuzzerPin, ReGrande, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1); beep(BuzzerPin, LaLargo, fusa); delay(300);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); beep(BuzzerPin, ReAlto, semifusa); delay(50);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); beep(BuzzerPin, La, semifusa); delay(100);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); beep(BuzzerPin, ReAlto, semifusa); delay(150);
  PrenderLeds(1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1); beep(BuzzerPin, DoSostenidoAlto, semifusa); delay(200);
  PrenderLeds(0, 1, 1, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 1); beep(BuzzerPin, SolGrande, semifusa); delay(50);
  PrenderLeds(1, 0, 0, 1, 0, 1, 1, 0, 0, 1, 1, 0, 1, 0, 0, 1, 1, 1, 1, 1); beep(BuzzerPin, SolGrande, semifusa); delay(50); 
  }
}
if (dato == 'F') {
 lcd.setCursor(0, 0);
 lcd.print("***cancion 4****");
 for (int i = 0; i < 1; i++) {    
   //codigo y canción #4
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, cor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, cor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, cor);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, Fa, fu);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50);  beep(BuzzerPin, DoAlto, semifu);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50);  beep(BuzzerPin, La, cor);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, fu);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, DoAlto, semifu);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, corch);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0); delay(50); delay(500);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0); delay(50);  beep(BuzzerPin, MiAlto, cor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0); delay(50); beep(BuzzerPin, MiAlto, cor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, MiAlto, cor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50);   beep(BuzzerPin, FaAlto, fu);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, semifu);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, SolSostenido, cor);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, Fa, fu);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, semifu);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50);  beep(BuzzerPin, La, corch);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); delay(500);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, SolLargo, cor);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, La, fusa);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, La, semifu);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50);  beep(BuzzerPin, SolLargo, cor);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, SolSostenidoAlto, fusa1);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, SolAlto, semifus);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, FaSostenidoAlto, semif);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, FaAlto, semif);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, FaSostenidoAlto, semicor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0); delay(50); delay(325);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0); delay(50);  beep(BuzzerPin, LaSos, semicor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, ReSostenidoAlto, cor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, ReAlto, fusa1);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, DoSostenidoAlto, semifus);
  PrenderLeds(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, DoAlto, semif);
  PrenderLeds(0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, LaSostenido, semif);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, DoAlto, semicor);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); delay(350);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1); delay(50); beep(BuzzerPin, Fa, semicor);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1); delay(50); beep(BuzzerPin, SolSostenido, cor);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, fu);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, La, semif);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, DoAlto, cor);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 1); delay(50); beep(BuzzerPin, La, fus);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1); delay(50); beep(BuzzerPin, DoAlto, semif);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, MiAlto, corch);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); delay(500);
  PrenderLeds(0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, SolLargo, cor);
  PrenderLeds(0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, La, fusa);
  PrenderLeds(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, La, semifu);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, SolLargo, cor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, SolSostenidoAlto, fusa1);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, SolAlto, semifus);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, FaSostenidoAlto, semif);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 1, 1); delay(50);   beep(BuzzerPin, FaAlto, semif);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 1, 1, 1); delay(50); beep(BuzzerPin, FaSostenidoAlto, semicor);
  PrenderLeds(1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); delay(325);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, LaSos, semicor);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); delay(50); beep(BuzzerPin, ReSostenidoAlto, cor);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, ReAlto, fusa1);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, DoSostenidoAlto, semifus);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, DoAlto, semif);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); delay(50); beep(BuzzerPin, LaSostenido, semif);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, DoAlto, semicor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); delay(350);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, semicor);
  PrenderLeds(1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1); delay(50); beep(BuzzerPin, SolSostenido, cor);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, Fa, fus);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); beep(BuzzerPin, DoAlto, semif);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1); delay(50); beep(BuzzerPin, La, cor);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 1); delay(50); beep(BuzzerPin, Fa, fus);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0); delay(50); beep(BuzzerPin, DoAlto, semif);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0); delay(50); beep(BuzzerPin, La, corch);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 1, 1); delay(50); delay(650);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, cor);
  PrenderLeds(1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, cor);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, cor);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, Fa, fu);
  PrenderLeds(0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, DoAlto, semifu);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, La, cor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, Fa, fu);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, DoAlto, semifu);
  PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, La, corch);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); delay(500);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, MiAlto, cor);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0); delay(50);  beep(BuzzerPin, MiAlto, cor);
  PrenderLeds(0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0); delay(50);  beep(BuzzerPin, MiAlto, cor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0); delay(50); beep(BuzzerPin, FaAlto, fu);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, semifu);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0); delay(50); beep(BuzzerPin, SolSostenido, cor);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, Fa, fu);
  PrenderLeds(1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, DoAlto, semifu);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, La, corch);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1, 0); delay(50); delay(500);
  PrenderLeds(0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0); delay(50);  beep(BuzzerPin, SolLargo, cor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0); delay(50);  beep(BuzzerPin, La, fusa);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, La, semifu);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, SolLargo, cor);
  PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, SolSostenidoAlto, fusa1);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, SolAlto, semifus);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, FaSostenidoAlto, semif);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1); delay(50);   beep(BuzzerPin, FaAlto, semif);
  PrenderLeds(0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, FaSostenidoAlto, semicor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(50); delay(325);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, LaSos, semicor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1); delay(50); beep(BuzzerPin, ReSostenidoAlto, cor);
  PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, ReAlto, fusa1);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, DoSostenidoAlto, semifus);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, DoAlto, semif);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, LaSostenido, semif);
  PrenderLeds(0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0); delay(50); beep(BuzzerPin, DoAlto, semicor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0); delay(50); delay(350);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, Fa, semicor);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0); delay(50); beep(BuzzerPin, SolSostenido, cor);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50);  beep(BuzzerPin, Fa, fu);
  PrenderLeds(1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, La, semif);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, cor);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0); delay(50);  beep(BuzzerPin, La, fus);
  PrenderLeds(0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, DoAlto, semif);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, MiAlto, corch);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0); delay(50);  delay(500);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0); delay(50); beep(BuzzerPin, SolLargo, cor);
  PrenderLeds(0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50);  beep(BuzzerPin, La, fusa);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50);  beep(BuzzerPin, La, semifu);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0); delay(50); beep(BuzzerPin, SolLargo, cor);
  PrenderLeds(0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0); delay(50);  beep(BuzzerPin, SolSostenidoAlto, fusa1);
  PrenderLeds(0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0); delay(50); beep(BuzzerPin, SolAlto, semifus);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0); delay(50); beep(BuzzerPin, FaSostenidoAlto, semif);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0); delay(50);  beep(BuzzerPin, FaAlto, semif);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0); delay(50); beep(BuzzerPin, FaSostenidoAlto, semicor);
  PrenderLeds(1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50);  delay(325);
  PrenderLeds(1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, LaSos, semicor);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, ReSostenidoAlto, cor);
  PrenderLeds(1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, ReAlto, fusa1);
  PrenderLeds(0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1); delay(50);  beep(BuzzerPin, DoSostenidoAlto, semifus);
  PrenderLeds(0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, DoAlto, semif);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, LaSostenido, semif);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1); delay(50); beep(BuzzerPin, DoAlto, semicor);
  PrenderLeds(0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0); delay(50); delay(350);
  PrenderLeds(0, 1, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, Fa, semicor);
  PrenderLeds(0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, SolSostenido, cor);
  PrenderLeds(0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, Fa, fus);
  PrenderLeds(0, 1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, DoAlto, semif);
  PrenderLeds(0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 1, 1, 0, 1, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, La, cor);
  PrenderLeds(0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0); delay(50);  beep(BuzzerPin, Fa, fus);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0); delay(50); beep(BuzzerPin, DoAlto, semif);
  PrenderLeds(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0); delay(50); beep(BuzzerPin, La, corch);
  PrenderLeds(1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1); delay(50); delay(650);
  }
 }
}//PrenderLeds(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);delay(50);
 void beep (unsigned char Pinbuzzer, int frecuencia, long tiempo)
 {
  int x;
  long delayAmount = (long)(1000000 / frecuencia);
  long loopTime = (long)((tiempo * negra) / (delayAmount * 2));
  for (x = 0; x < loopTime; x++)
  {
    digitalWrite(BuzzerPin, HIGH);
    delayMicroseconds(delayAmount);
    digitalWrite(BuzzerPin, LOW);
    delayMicroseconds(delayAmount);
  }
  delay(15);      //Le damos un pequeño tiempo entre tonos.
 }

