const int pinLED[4]={8,9,10,11};

void setup() {
  for(int i=0;i<=3;i++)
  {
    pinMode(pinLED[i],OUTPUT);
  }
  
}

void loop() {
  int i,j;
  for(i=0;i<=3;i++)
  {
    digitalWrite(pinLED[i],LOW);
  }
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
    {
      if(i==j)digitalWrite(pinLED[j],HIGH);
      else digitalWrite(pinLED[j],LOW);
    }
    delay(250);
  }
  for(i=0;i<=3;i++)
  {
    digitalWrite(pinLED[i],LOW);
  }
  for(i=0;i<=3;i++)
  {
    for(j=0;j<=3;j++)
    {
      if(i==j)digitalWrite(pinLED[3-j],HIGH);
      else digitalWrite(pinLED[3-j],LOW);
    }
    delay(250);
  }
}
