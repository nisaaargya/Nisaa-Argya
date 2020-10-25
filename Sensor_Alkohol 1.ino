#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int MQ_7=3;
int RED_LED=4;
int GREEN_LED=5;
void setup() {
  // put your setup code here, to run once:
pinMode(MQ_7, INPUT_PULLUP);
pinMode(RED_LED,OUTPUT);
pinMode(GREEN_LED,OUTPUT);
lcd.begin(20,4);
lcd.setCursor(0,0);
lcd.print("SYSTEM PENDETEKSI");
lcd.setCursor(0,1);
lcd.print("ALKOHOL");
lcd.setCursor(0,2);
lcd.print("NISAA TELEKOMUNIKASI PNJ");
delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:
int MQ_7_READ = digitalRead(MQ_7);
if (MQ_7_READ == HIGH)
{
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("ALCOHOL DETECTED");
  digitalWrite(GREEN_LED, HIGH);
  digitalWrite(RED_LED, LOW);
  delay(20);
}
else
{
  lcd.clear();
  lcd.setCursor(0,3);
  lcd.print("ALCOHOL NOT DETECTED");
  digitalWrite(RED_LED, HIGH);
  digitalWrite(GREEN_LED, LOW);
  delay(20);
  }
}
