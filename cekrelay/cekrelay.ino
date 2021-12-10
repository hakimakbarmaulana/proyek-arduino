const int r1=8, r2=9;

void setup() {
  pinMode(r1, OUTPUT);
  pinMode(r2, OUTPUT);

}

void loop() {
  digitalWrite(r1, LOW);
  delay(1000);
  digitalWrite(r2, LOW);
  delay(2000);
  digitalWrite(r1, HIGH);
  delay(1000);
  digitalWrite(r2, HIGH);
  delay(2000);

}
