#include <Servo.h>
Servo ESC;
int potval;

void setup() {
  ESC.attach(9,2000,8000);
  Serial.begin(9600);
}

void loop() {
  potval = analogRead(A0);
  Serial.println(potval);
  potval = map(potval,0,1023,0,180);
  ESC.write(potval);
}
