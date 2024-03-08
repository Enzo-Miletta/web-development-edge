

int led = 13;
int rled = 12;
int aled = 11;
void setup()
{
pinMode(led,OUTPUT);
pinMode(rled,OUTPUT);
pinMode(aled,OUTPUT);
  
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(2000);
  digitalWrite(rled, HIGH);
  delay(1000);
    digitalWrite(led, LOW);
    digitalWrite(rled, LOW);
  
  digitalWrite(aled, HIGH);
  delay(1000);
  digitalWrite(aled, LOW);
  delay(2000);
}
