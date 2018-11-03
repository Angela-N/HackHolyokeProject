
#include "Ultrasonic.h"

Ultrasonic ultrasonic(12,13);

volatile int count = 0;
long d[4];
double v[3];
double a[2];
void setup() {
//lcd.begin(16, 2);
//lcd.setCursor(0, 0);
//lcd.print("HC-SR4 testing..");
//delay(1000);
  pinMode(9,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
//  if (count % 4 != 0)
//  {
    d[count%4] = ultrasonic.Ranging(CM);
    Serial.print(d[count % 4]);
    Serial.print("cm ");
    if (ultrasonic.Ranging(CM) <= 200)
    analogWrite(9,ultrasonic.Ranging(CM)/4);
    else
    analogWrite(9,0);
    delay(100);
//    if ((count % 4) >= 1)
//    {
//      v[(count%4)-1] = (double)(d[(count%4)] - d[(count %4) - 1]) / 0.1;
//      Serial.print(v[count % 4 - 1]);
//      Serial.println("cm/s");
//    }
//  }
  count ++;
//Serial.print(ultrasonic.Ranging(CM));
//    Serial.println("cm");
}
//
//ISR (TIMER1_OVF_vect) 
//{
//    TCNT1 = 40536;
//    count++;
//    int dis = ultrasonic.Ranging(CM);
//    Serial.print(ultrasonic.Ranging(CM));
//    Serial.println("cm");
//}
