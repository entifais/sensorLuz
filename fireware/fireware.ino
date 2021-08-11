int pinSesnorLuz = A0;
void setup()
{
  Serial.begin(9600);
}
void loop()
{
  int iluminacion = analogRead(pinSesnorLuz);
  Serial.println(iluminacion);
}
