/* FSR DDR Pad Controller
 
Connect one end of FSR to power, the other end to Analog 0.
Then connect one end of a 10K resistor from Analog 0 to ground .
And so on for how ever many buttons you require.

Initial code from www.ladyada.net/learn/sensors/fsr.html */
 
#include "Keyboard.h"

int fsrPins[] = {0,1,2,3};
int fsrReadings[4];
int keyPress[] = {KEY_UP_ARROW, KEY_DOWN_ARROW, KEY_LEFT_ARROW, KEY_RIGHT_ARROW};

void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);
  Keyboard.begin();   
}
 
void loop(void) {

  for (int i = 0; i < 4; i++) {
    fsrReadings[i] = analogRead(fsrPins[i]); 
    Serial.print("Analog reading ");
    Serial.print(i);
    Serial.print(" = ");
    Serial.print(fsrReadings[i]);     // the raw analog reading
 
    // We'll have a few threshholds, qualitatively determined
    if (fsrReadings[i] < 10) {
      Serial.println(" - No pressure");
      Keyboard.release(keyPress[i]);
    } else if (fsrReadings[i] < 200) {
      Serial.println(" - Light touch");
    } else if (fsrReadings[i] < 500) {
      Serial.println(" - Light squeeze");
    } else if (fsrReadings[i] < 800) {
      Serial.println(" - Medium squeeze");
    } else {
      Serial.println(" - Big squeeze");
      Keyboard.press(keyPress[i]);
    }
    
 }
  Serial.println("\n");
  delay(1000);

} 
