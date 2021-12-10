const byte nomer[17]={
  B01101110,
  B11101110,
  B11001110,
  B11001110,
  B01110110,
  B00000010,
  B01100000,
  B10011110,
  B01111010,
  B00000010,
  B01100000,
  B01100110,
  B01100110,
  B01100000,
  B01101110,
  B00000010
};

const int pinSegmen[8]={2,11,10,5,4,3,8,9};

void setup() {
  for(int i=0;i<=7;i++){
    pinMode(pinSegmen[i],OUTPUT);
  }
}
void loop() {
  for(int i=0;i<=15;i++){
    panggil(i);
    delay(750);
  }
}

void panggil(int n){
  boolean cekbit;
  for(int j=0;j<=7;j++){
    cekbit=not(bitRead(nomer[n],j));
    digitalWrite(pinSegmen[j],cekbit);
  }
  delay(250);
  digitalWrite(pinSegmen[0],LOW);
}
