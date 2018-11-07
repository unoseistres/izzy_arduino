#include <Adafruit_NeoPixel.h> // include neopixel library

#define PIN 12 // Which pin on the Arduino is connected to the NeoPixels?
#define NUMPIXELS 4 // How many NeoPixels are attached to the Arduino?

// When we setup the NeoPixel library, we tell it how many pixels, and which pin to use to send signals.
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int val;
// runs when you turn on the Flora
void setup() {
  Serial.begin(9600);       // start serial communication at 9600bps
  pixels.begin(); // This initializes the NeoPixel library.
}

//
//  pixels.setPixelColor(0, pixels.Color(0,0,50));
//  pixels.setPixelColor(1, pixels.Color(0,0,50));
//  pixels.setPixelColor(2, pixels.Color(0,0,50));
//  pixels.setPixelColor(3, pixels.Color(0,0,50));
//
//  pixels.show();
//  delay(500);
//
//  pixels.setPixelColor(0, pixels.Color(0,50,50));
//  pixels.setPixelColor(1, pixels.Color(0,50,50));
//  pixels.setPixelColor(2, pixels.Color(0,50,50));
//  pixels.setPixelColor(3, pixels.Color(0,50,50));
//
//  pixels.show();
//  delay(500);

void loop() {
  if(Serial.available())         // if data is available to read
  {
    val = Serial.read();           // read it and store it in 'val'
    if( val == 0 )               // if 'H' was received
    {
pixels.setPixelColor(0, pixels.Color(0,0,50));
pixels.setPixelColor(1, pixels.Color(0,0,50));
pixels.setPixelColor(2, pixels.Color(0,0,50));
pixels.setPixelColor(3, pixels.Color(0,0,50));

pixels.show();
delay(500);
    } 
    else if( val == 1 ) { 
pixels.setPixelColor(0, pixels.Color(255,0,0));
pixels.setPixelColor(1, pixels.Color(255,0,0));
pixels.setPixelColor(2, pixels.Color(255,0,0));
pixels.setPixelColor(3, pixels.Color(255,0,0));
pixels.show();
delay(500);
    }
  }
}


