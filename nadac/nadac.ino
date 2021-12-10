const int pinspeak=3;

void setup() {
  pinMode(pinspeak,OUTPUT);
}

int nada[]={262, 294, 330, 349, 392, 440, 494, 523};
void loop() {
  for(int i=0;i<=7;i++){
    tone(pinspeak,nada[i],500);
    delay(500);
  }
  noTone(pinspeak);
  delay(1000);
  for(int i=7;i>=0;i--){
    tone(pinspeak,nada[i],500);
    delay(500);
  }
  noTone(pinspeak);
  delay(1000);
}
