
#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
  #include <avr/power.h>
#endif

#define PIN            2

#define NUMPIXELS      1

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 500; // delay for half a second
int randomNumber;

void setup() {
  pixels.begin(); // This initializes the NeoPixel library.
}

void loop() {

  randomNumber = random(0,3);
  for(int i=0; i< NUMPIXELS; i++){
    if(i == randomNumber){
        pixels.setPixelColor(i, pixels.Color(150,255,0));
        pixels.show();
    }
    else{
      pixels.setPixelColor(i, pixels.Color(0,0,0));
        pixels.show();
    }
  }

  delay(delayval);
  /*
  for(int i=0;i<NUMPIXELS;i++){
    pixels.setPixelColor(i, pixels.Color(0,150,0)); // Moderately bright green color.

    pixels.show(); 

    delay(delayval);
  }
  */
}
