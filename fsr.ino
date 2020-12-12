/* FSR simple testing sketch. 
 
Connect one end of FSR to power, the other end to Analog 0.
Then connect one end of a 10K resistor from Analog 0 to ground 
 
For more information see www.ladyada.net/learn/sensors/fsr.html */
 
int fsrPin1 = 0;     // the FSR and 10K pulldown are connected to a0
int fsrReading1;     // the analog reading from the FSR resistor divider
int fsrPin2 = 1;     // the FSR and 10K pulldown are connected to a0
int fsrReading2;     // the analog reading from the FSR resistor divider 

int fsrPin3 = 2;     // the FSR and 10K pulldown are connected to a0
int fsrReading3;     // the analog reading from the FSR resistor divider
int fsrPin4 = 3;     // the FSR and 10K pulldown are connected to a0
int fsrReading4;     // the analog reading from the FSR resistor divider 
void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);   
}
 
void loop(void) {
  fsrReading1 = analogRead(fsrPin1);  
 
  Serial.print("Analog reading 1 = ");
  Serial.print(fsrReading1);     // the raw analog reading
 
  // We'll have a few threshholds, qualitatively determined
  if (fsrReading1 < 10) {
    Serial.println(" - No pressure");
  } else if (fsrReading1 < 200) {
    Serial.println(" - Light touch");
  } else if (fsrReading1 < 500) {
    Serial.println(" - Light squeeze");
  } else if (fsrReading1 < 800) {
    Serial.println(" - Medium squeeze");
  } else {
    Serial.println(" - Big squeeze");
  }

  
  fsrReading2 = analogRead(fsrPin2);  
 
  Serial.print("Analog reading 2 = ");
  Serial.print(fsrReading2);     // the raw analog reading
 
  // We'll have a few threshholds, qualitatively determined
  if (fsrReading2 < 10) {
    Serial.println(" - No pressure");
  } else if (fsrReading2 < 200) {
    Serial.println(" - Light touch");
  } else if (fsrReading2 < 500) {
    Serial.println(" - Light squeeze");
  } else if (fsrReading2 < 800) {
    Serial.println(" - Medium squeeze");
  } else {
    Serial.println(" - Big squeeze");
  }

  fsrReading3 = analogRead(fsrPin3);  
 
  Serial.print("Analog reading 3 = ");
  Serial.print(fsrReading3);     // the raw analog reading
 
  // We'll have a few threshholds, qualitatively determined
  if (fsrReading3 < 10) {
    Serial.println(" - No pressure");
  } else if (fsrReading3 < 200) {
    Serial.println(" - Light touch");
  } else if (fsrReading3 < 500) {
    Serial.println(" - Light squeeze");
  } else if (fsrReading3 < 800) {
    Serial.println(" - Medium squeeze");
  } else {
    Serial.println(" - Big squeeze");
  }

  fsrReading4 = analogRead(fsrPin4);  
 
  Serial.print("Analog reading 4 = ");
  Serial.print(fsrReading4);     // the raw analog reading
 
  // We'll have a few threshholds, qualitatively determined
  if (fsrReading4 < 10) {
    Serial.println(" - No pressure");
  } else if (fsrReading4 < 200) {
    Serial.println(" - Light touch");
  } else if (fsrReading4 < 500) {
    Serial.println(" - Light squeeze");
  } else if (fsrReading4 < 800) {
    Serial.println(" - Medium squeeze");
  } else {
    Serial.println(" - Big squeeze");
  }
  Serial.println("\n");
  delay(1000);
} 
