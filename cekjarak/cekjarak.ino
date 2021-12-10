#include <LiquidCrystal.h>

// Setting LCD RS E D4 D5 D6 D7
LiquidCrystal lcd(6, 7, 10, 11, 12, 13);

const int pintrig=3, pinech=5, pinspeak=9;

void setup(){
// pilih LCD 16 x 2
  Serial.begin(9600);
  pinMode(pintrig,OUTPUT);
  pinMode(pinspeak,OUTPUT);
  pinMode(pinech,INPUT);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("  JAGA JARAKMU  ");
  delay(1000);
  lcd.setCursor(0,0);
  lcd.print("                ");
}

long durasi=0;
void loop(){
  int jarak;
  digitalWrite(pintrig, HIGH);
  delayMicroseconds(10);
  digitalWrite(pintrig, LOW);
  durasi = pulseIn(pinech, HIGH);
  jarak=(durasi *0.034)/2;
  Serial.print("jarak:");
  Serial.println(jarak);
  lcd.setCursor(0,0);
    lcd.print("                ");
  lcd.setCursor(0,0);
  lcd.print("Jarakmu:");
  lcd.setCursor(8,0);
  lcd.print(jarak);
  lcd.setCursor(14,0);
  lcd.print("cm");
  lcd.setCursor(0,1);
  if(jarak<80){
    lcd.setCursor(0,1);
    lcd.print("                ");
    lcd.setCursor(0,1);
    lcd.print("Jarak tidak aman");
    tone(pinspeak,440);
  }
  else{
    lcd.setCursor(0,1);
    lcd.print("                ");
    lcd.setCursor(0,1);
    lcd.print("Jarakmu aman");
    noTone(pinspeak);
  }
  delay(1000);
}
