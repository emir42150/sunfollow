#include <Servo.h>

Servo servo;
const int LDR_HAUT = A0;
const int LDR_BAS  = A1;
const int ZONE_MORTE = 40;     // tolérance
int angle = 90;                // 90 = panneau à plat

void setup() {
  servo.attach(9);
  servo.write(angle);
}

void loop() {
  int haut = analogRead(LDR_HAUT);
  int bas  = analogRead(LDR_BAS);
  int diff = haut - bas;

  if (haut + bas < 100) {            // nuit : retour à plat
    if (angle < 90) angle++;
    else if (angle > 90) angle--;
  }
  else if (diff > ZONE_MORTE) {      // plus de lumière en haut
    angle++;
  } else if (diff < -ZONE_MORTE) {   // plus de lumière en bas
    angle--;
  }                                  // sinon : bien aligné, on ne bouge pas

  angle = constrain(angle, 10, 170); // butées
  servo.write(angle);
  delay(30);
}
