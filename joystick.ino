*
 * This ESP32 code is created by esp32io.com
 *
 * This ESP32 code is released in the public domain
 * also citated lecture links
 * If you need further information, please visit esp32 joystick
 */

#include <ezButton.h>

#define VRX_PIN  36 // ESP32 pin GIOP36 connected to VRX pin
#define VRY_PIN  39 // ESP32 pin GIOP39 connected to VRY pin
#define SW_PIN   17 // ESP32 pin GIOP17 connected to SW  pin

ezButton button(SW_PIN);
//when the button clicked, 0 value shows
int valueX = 0; // to the X-axis value
int valueY = 0; // to the Y-axis value
int bValue = 0; // To value of the button

void setup() {
  Serial.begin(9600) ;
  button.setDebounceTime(50); // set debounce time to 50 milliseconds
}

void loop() {
  button.loop(); // MUST call the loop() function first

  // read X and Y analog values
  valueX = analogRead(VRX_PIN);
  valueY = analogRead(VRY_PIN);

  // Read the button value
  bValue = button.getState();

  if (button.isPressed()) {
    Serial.println("The button is pressed");
  }

  if (button.isReleased()) {
    Serial.println("The button is released");
  }

  // print data to Serial Monitor on Arduino IDE
  Serial.print("x = ");
  Serial.print(valueX);
  Serial.print(", y = ");
  Serial.print(valueY);
  Serial.print(" : button = ");
  Serial.println(bValue);
}
