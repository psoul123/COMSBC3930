# COMSBC3930
Project

```c

#include <TFT_eSPI.h>
#include <DigitalRainAnimation.hpp>

TFT_eSPI tft = TFT_eSPI();
DigitalRainAnimation<TFT_eSPI> matrix_effect = DigitalRainAnimation<TFT_eSPI>();

void setup() {
  Serial.begin(115200);
  Serial.println("\n\n TFT_eSPI ShowCase");

  tft.begin();
  tft.setRotation(1);

  matrix_effect.init(&tft);
  matrix_effect.setTextAnimMode(AnimMode::SHOWCASE, "\nAll great changes are \npreceded by \nchaos.     \nKnock, knock,                 ");
}

void loop() {
  matrix_effect.loop();
}
```
[Youtube Link] (https://www.youtube.com/watch?v=rvvWfrDUK3Q)
