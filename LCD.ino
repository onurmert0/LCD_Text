#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);
void setup() {
  lcd.begin();
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);

}

void loop() {
 lcd.setCursor(0,0);
 lcd.print("Muratcan Onur"); 

 delay(2000);
 
 lcd.clear();
 lcd.noBacklight();
 delay(2000);

digitalWrite(2,HIGH);
delay(2000);
digitalWrite(2,LOW);
delay(2000);

 lcd.backlight();

 lcd.setCursor(0,1);
 lcd.print("AVCU MERT"); 
 delay(2000);
 lcd.clear();
 digitalWrite(3,HIGH);
delay(2000);
digitalWrite(3,LOW);
delay(2000);
}