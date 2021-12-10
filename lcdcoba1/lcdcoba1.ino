#include <LiquidCrystal.h>

// Setting LCD RS E D4 D5 D6 D7
LiquidCrystal lcd(6, 7, 9, 10, 11, 12);

char a[21]="HAPPY IED MUBARAK   ",t[21],b[17]="     1441 H     ";
void setup(){
// pilih LCD 16 x 2
  lcd.begin(16,2);
  lcd.print(a);
}

int i=0;
void loop(){
// pindah ke baris kolom 1 baris ke 2
// array selalu dimulai dari 0
  for(int j=0;j<=20;j++){
    t[j]=a[(j+i)%20];
  }
  lcd.setCursor(0,0);
  lcd.print(t);
  lcd.setCursor(0,1);
  lcd.print(b);
  delay(500);
  i++;
}
