/*
 * Motor accelerate forward and backward
 */

int left = 12;
int right = 8;
int center = 7;

void setup()
{
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(center, OUTPUT);
  
  digitalWrite(center, HIGH); 
}

void loop()
{
  digitalWrite(left, HIGH);
  digitalWrite(right, LOW);
  delay(1000);
 
  digitalWrite(left, LOW);
  digitalWrite(right, HIGH);
  delay(1000);
}

