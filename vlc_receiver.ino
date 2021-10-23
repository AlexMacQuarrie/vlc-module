byte bits[8];
int num1s = 0;
byte decimalValue;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  while(num1s < 8)
  {
    if(analogRead(A0) > 850)
    {
      num1s++;
    }
    else
    {
      num1s = 0;
    }
    delay(50);
  }
}

void loop()
{
  decimalValue = 0;
  
  for (int i = 0; i < 8; i++)
  {
    if (analogRead(A0) > 850)
    {
      bits[i] = true;
      decimalValue += bits[i] << (7-i);
    }
    else
    {
      bits[i] = false;
    }
    delay(50);
  }
  Serial.print((char)decimalValue);
}
