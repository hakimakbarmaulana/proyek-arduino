#include <IRremote.h>
#include <IRremoteInt.h>

const int pinIR=9, pinLED=8;
IRrecv recv(pinIR);
decode_results hasil;
bool hidup=false;

void setup() {
  Serial.begin(9600);
  recv.enableIRIn();
  pinMode(pinLED, OUTPUT);
}

void loop() {
  if(recv.decode(&hasil)){
    //Serial.println(hasil.value);
    recv.resume();

    // Menyala dan mematikan sistem
    if(hasil.value==33441975){
      if(!hidup){
        hidup=true;
        Serial.println("Sistem dinyalakan");
      }
      else{
        hidup=false;
        Serial.println("Sistem dimatikan");
      }
      blinkpop();
    }

    //Menampilkan angka
    if(hasil.value==33444015 && hidup){
      Serial.println("Angka Satu");
      blinkled(1);
    }
    if(hasil.value==33478695 && hidup){
      Serial.println("Angka Dua");
      blinkled(2);
    }
    if(hasil.value==33486855 && hidup){
      Serial.println("Angka Tiga");
      blinkled(3);
    }
    if(hasil.value==33435855 && hidup){
      Serial.println("Angka Empat");
      blinkled(4);
    }
    if(hasil.value==33468495 && hidup){
      Serial.println("Angka Lima");
      blinkled(5);
    }
    if(hasil.value==33452175 && hidup){
      Serial.println("Angka Enam");
      blinkled(6);
    }
    if(hasil.value==33423615 && hidup){
      Serial.println("Angka Tujuh");
      blinkled(7);
    }
    if(hasil.value==33484815 && hidup){
      Serial.println("Angka Delapan");
      blinkled(8);
    }
    if(hasil.value==33462375 && hidup){
      Serial.println("Angka Sembilan");
      blinkled(9);
    }
  }
}

void blinkled(int n){
  for(int i=1;i<=n;i++){
    digitalWrite(pinLED,HIGH);
    delay(250);
    digitalWrite(pinLED,LOW);
    delay(200);
  }
}
 void blinkpop(){
    digitalWrite(pinLED,HIGH); delay(800);
    digitalWrite(pinLED,LOW); delay(100);
    digitalWrite(pinLED,HIGH); delay(100);
    digitalWrite(pinLED,LOW); delay(100);
    digitalWrite(pinLED,HIGH); delay(100);
    digitalWrite(pinLED,LOW); delay(100);
 }
