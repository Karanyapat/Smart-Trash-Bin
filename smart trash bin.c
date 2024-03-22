#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// ตั้งค่าขนาด LCD และที่อยู่ของโมดูล I2C
LiquidCrystal_I2C lcd(0x27, 16, 2); // 0x27 คือที่อยู่ของโมดูล I2C และ 16x2 คือขนาดของ LCD

byte sm[8] = {
  B00000,
  B11011,
  B11011,
  B00000,
  B10001,
  B11011,
  B01110,
  B00000,
};

byte ang[8] = {
  B00000,
  B11011,
  B11011,
  B00000,
  B01110,
  B11011,
  B10001,
  B00000,
};



void setup() {


}

void emp(){
  lcd.init();
  lcd.backlight();

  lcd.createChar(1, sm);

  //ข้อความ1
  lcd.setCursor(3, 0);
  lcd.print("GARBAGE IS");

  //ข้อความ2
  lcd.setCursor(4, 1);
  lcd.print("EMPTY!");

  lcd.setCursor(11,1);
  lcd.write(1);
}

void full(){
  lcd.init();
  lcd.backlight();

  lcd.createChar(2, ang);

  //ข้อความ1
  lcd.setCursor(3, 0);
  lcd.print("GARBAGE IS");

  //ข้อความ2
  lcd.setCursor(5, 1);
  lcd.print("FULL!");

  lcd.setCursor(11,1);
  lcd.write(2);
}
void loop() {
  emp();
}