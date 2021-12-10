const int pinled=9;
//  const int pinbut1=2;
//  const int pinbut2=3;

void setup() {
  pinMode(pinled,OUTPUT);
//  pinMode(pinbut1,INPUT);
//  pinMode(pinbut2,INPUT);
//  digitalWrite(pinbut1,HIGH);
//  digitalWrite(pinbut2,HIGH);
}

int brg=0;
void loop() {
  digitalWrite(pinled, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);                       // wait for a second
  digitalWrite(pinled, LOW);    // turn the LED off by making the voltage LOW
  delay(250);                       // wait for a second
//  if(digitalRead(pinbut1)==LOW) brg=brg+10;
//  else if(digitalRead(pinbut2)==LOW) brg=brg-10;
//  brg=constrain(brg,0,255);
//  analogWrite(pinled,brg);
//  delay(20);
}
