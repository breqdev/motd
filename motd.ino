#include "Adafruit_ThinkInk.h"

#define EPD_CS A0
#define EPD_DC A1
#define SRAM_CS -1
#define EPD_RESET A2
#define EPD_BUSY A3

ThinkInk_154_Mono_D67 display(EPD_DC, EPD_RESET, EPD_CS, SRAM_CS, EPD_BUSY);

void setup()
{
  Serial.begin(115200);
  while (!Serial)
  {
    delay(10);
  }
  display.begin(THINKINK_MONO);

  display.clearBuffer();
  display.setTextSize(6);
  display.setTextColor(EPD_BLACK);

  display.setCursor(10, 25);
  display.println("safe ");
  display.setCursor(10, 75);
  display.println(" and ");
  display.setCursor(10, 125);
  display.println("sound");

  display.display();
}

void loop()
{
}
