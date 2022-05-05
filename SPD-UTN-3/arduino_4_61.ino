// C++ code
//
int Led_Pin = 13;
void setup()
{
  pinMode(13, OUTPUT);
}

void loop()
{
  digitalWrite(Led_Pin, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(Led_Pin, LOW);
  delay(1000); // Wait for 1000 millisecond(s)
}