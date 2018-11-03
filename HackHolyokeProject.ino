#include "Ultrasonic.h"
 
Ultrasonic ultrasonic(12,13);
 
void setup() {
 
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}
 
void loop()
{
    if (ultrasonic.Ranging(CM) <= 200)
    tone(9,5000-ultrasonic.Ranging(CM)*100);
    else
    analogWrite(9,0);
    delay(100);
}
