const int pSuhu = A3;
float suhu, data;

void setup() {
  analogReference(INTERNAL);
  Serial.begin(9600);
  pinMode(pSuhu, INPUT);
}
void loop() {
  data = analogRead(pSuhu);
  data = analogRead(pSuhu);
  suhu = data * 110 / 1024;
  Serial.print("data: ");
  Serial.print(data);
  Serial.print(", suhu: ");
  Serial.print(suhu);
  Serial.print(" C");
  Serial.println();
  delay(1000);
}
