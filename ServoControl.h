#ifndef SERVOCONTROL_H
#define SERVOCONTROL_H

#include <Adafruit_PWMServoDriver.h>
#include "Config.h"

void setServo(int ch, float angle);
int angleToPulse(float angle);

#endif
