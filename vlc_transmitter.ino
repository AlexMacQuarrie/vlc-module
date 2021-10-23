String message;

void setup()
{
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  Serial.print("Enter the message: ");
  while (Serial.available() == 0)
  {
  }
  message = Serial.readString();
  Serial.println(message);
  digitalWrite(13, HIGH);
  delay(400);
}

void loop()   //loops endlessly
{
  for(int i = 0; i < message.length(); i++)
  {
    char myChar = message.charAt(i);
    
    for(int j = 7; j > -1; j--)
    {
      if (bitRead(myChar,j) == 1)
      {
        digitalWrite(13, HIGH);
      }
      else
      {
        digitalWrite(13, LOW);
      }
      delay(50);
    }
  }
}
