/////////////////////////////////////////
///  Glove Code for Don't Touch game  ///
///  by Ramsey Nasser & Kaho for      ///
///  3D Leap Motion Game Jam 2014     ///
/////////////////////////////////////////
/*
Based on following examples: 
 -- String to Integer conversion by Tom Igoe
 */
////////////////LIBRARIES////////////////
#include <Adafruit_NeoPixel.h>
////////////////VAIRABLES////////////////
#define PIN 6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(23, PIN, NEO_GRB + NEO_KHZ800);


String inString = "";    // string to hold input
int val;
int row1[] = {
  0,1,2};    
int row2[] = {
  3,7,11,15,19};    
int row3[] = {
  4,8,12,16,20};    
int row4[] = {
  5,9,13,17,21};    
int row5[] = {
  6,10,14,18,22};    

////////////////SET UP////////////////
void setup() {
  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  // send an intro:
  // Serial.println("\n\nString toInt():");
  // Serial.println();
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

////////////////LOOPY SHIT////////////////
void loop() {
  strip.show();
  // colorWipe(strip.Color(0, 0, 255), 50, 20); // Blue

  // Read serial input:
  while (Serial.available() > 0) {
    int inChar = Serial.read();    
     
    // if you get a newline, print the string,
    // then the string's value:
    if (inChar == '\n') {
      val = 0;
      val = inString.toInt();
      inString = "";    
    } else {
      inString += (char)inChar;
    }

  }
  
      
    if (val > 0 && val <= 50) {
      for (int i = 0; i<3; i++){
        colorWipe(strip.Color(0, 0, map(val,1, 50, 0, 255)), 50, row1[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 0), 50, row2[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 0), 50, row3[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 0), 50, row4[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 0), 50, row5[i]); // Blue
      } 
    }

    else if (val> 50 && val <= 101) {
      for (int i = 0; i<3; i++){
        colorWipe(strip.Color(0, 0, 255), 50, row1[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, map(val, 51, 101, 0, 255)), 50, row2[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 0), 50, row3[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 0), 50, row4[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 0), 50, row5[i]); // Blue
      } 
    }

    else if (val> 101 && val <= 152) {
      for (int i = 0; i<3; i++){
        colorWipe(strip.Color(0, 0, 255), 50, row1[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 255), 50, row2[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, map(val,102, 152, 0, 255)), 50, row3[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 0), 50, row4[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 0), 50, row5[i]); // Blue
      } 
    }

    else if (val> 152 && val <= 203) {
      for (int i = 0; i<3; i++){
        colorWipe(strip.Color(0, 0, 255), 50, row1[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 255), 50, row2[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 255), 50, row3[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, map(val,153, 203, 0, 255)), 50, row4[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 0), 50, row5[i]); // Blue
      } 
    }

    else if (val> 203 && val <= 255) {
      for (int i = 0; i<3; i++){
        colorWipe(strip.Color(0, 0, 255), 50, row1[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 255), 50, row2[i]); // Blue
      } 
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 255), 50, row3[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, 255), 50, row4[i]); // Blue
      }
      for (int i = 0; i<5; i++){
        colorWipe(strip.Color(0, 0, map(val,204, 255, 0, 255)),50 , row5[i]); // Blue
      }
    }
}

void colorWipe(uint32_t c, uint8_t wait, int i) { 
  strip.setPixelColor(i, c);
  strip.show();
  //delay(10);
}



