#include "Config.h"
#include "ServoControl.h"
#include "IK.h"
#include "Leg.h"

void setup() {
  Wire.begin();
  pca1.begin();
  pca1.setPWMFreq(SERVO_FREQ);

  delay(1000);
}

void loop() {
  for (float t = 0; t <= 1.0; t += 0.03) {
    legPath(leg1, t);      // picior 1
    legPath(leg2, t);      // picior 2 (sincron cu 1)
    legPath(leg3, 1 - t);  // picior 3 (opus)
    delay(25);
  }
}
