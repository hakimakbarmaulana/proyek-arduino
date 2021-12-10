#include <Servo.h>

Servo servoku;
int pos=0;

void setup() {
  servoku.attach(3,584,2580);
  Serial.begin(9600);
}

void loop() {
  for(pos=0;pos<=180;pos++)
  {
    servoku.write(pos);
    delay(5);
  }
  delay(250);
  for(pos=180;pos>=0;pos--)
  {
    servoku.write(pos);
    delay(5);
  }
  servoku.write(0);
  delay(1000);
}
