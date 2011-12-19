/*
 * A simple button to switch the led on/off
 *
 * 2011 © Daniel Gomes <me@danielcsgomes.com>
 */

int pinRead = 4;
int pinOut = 13;

void setup()
{
  Serial.begin(9600);
  
  // initialize the digitals pins one as an output and other as input
  pinMode(pinRead, INPUT);
  pinMode(pinOut, OUTPUT);
}

void loop()
{
  digitalWrite(pinOut, HIGH); // set the led on
  Serial.println(digitalRead(pinRead)); // print the current state of the button 1 - on , 0 - off
}
