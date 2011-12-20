
/*
 * Disco light simulation with rgb led in a ping pong ball
 *
 * 2011 © Daniel Gomes <me@danielcsgomes.com>
 * 2011 © Jose Luis Gouveia <me@joseluisgouveia.com> 
 *
 */

// Set the colors to analog pin
int red = 3;
int green = 5;
int blue = 6;
// Array with colors
int leds[] = {red, green, blue};

int active = 0;
int oldColor = 0;
int activeLed;

void setup() 
{
}

void loop() 
{
  int oldLed = activeLed;
  
  activeLed = leds[active];
  int maxBright = 255;
  
  for( int i=0; i< 255 ; i++)
  {
   analogWrite(activeLed, i);
   analogWrite(oldLed, maxBright); 
   if(maxBright >1)
     maxBright -= 2;
   delay(1);
  }
  
  //delay(1000); // you can set a delay to see the effect
  active++;
  
  if(active >= 3)
  {
    active = 0;
  }
}
