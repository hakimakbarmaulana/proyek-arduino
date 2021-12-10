const byte nomer[11]={
  B11111100,
  B01100000,
  B11011010,
  B11110010,
  B01100110,
  B10110110,
  B10111110,
  B11100000,
  B11111110,
  B11110110 
};

const int pinSegmen[8]={2,11,10,5,4,3,8,9};

void setup() {
  for(int i=0;i<=7;i++){
    pinMode(pinSegmen[i],OUTPUT);
  }
}
void loop() {
  for(int i=0;i<=9;i++){
    panggil(i);
    delay(1000);
  }
}

void panggil(int n){
  boolean cekbit;
  for(int j=0;j<=7;j++){
    cekbit=not(bitRead(nomer[n],j));
    digitalWrite(pinSegmen[j],cekbit);
    digitalWrite(pinSegmen[0],LOW);
    delay(100);
  }
}
