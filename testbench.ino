/*
#include <Q2HX711.h>

#include <HX711_ADC.h>
*/
#include <HX711.h>

const int LOADCELL_DOUT_PIN = A1;
const int LOADCELL_SCK_PIN = A0;

HX711 scale;


void setup() {
  Serial.println("ProgramStart");
    delay(5000);
  Serial.begin(9600);
   scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
}

void loop() {
  if (scale.is_ready()) {
    long reading = scale.read();
    Serial.print("HX711 reading: ");
    Serial.println(reading);
  } else {
    Serial.println("HX711 not found.");
  }

  delay(100);

}