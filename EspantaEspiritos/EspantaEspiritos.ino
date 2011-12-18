/*
 * Espanta Espiritos
 *
 * 2011 © me@danielcsgomes.com
 */

int coins1 = 7;
int coins2 = 8;
int coins3 = 4;
int speaker = 2;

void setup()
{
  Serial.begin(9600);
  pinMode(coins1, INPUT);
  pinMode(coins2, INPUT);
  pinMode(coins3, INPUT); 
}

void loop()
{
  if(digitalRead(coins1))
    tone(speaker, 5, 105);
  if(digitalRead(coins2))
    tone(speaker, 5, 150);
  if(digitalRead(coins3))
    tone(speaker, 5, 100);
}
