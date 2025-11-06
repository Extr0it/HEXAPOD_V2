#ifndef CONFIG_H
#define CONFIG_H

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

#define SERVO_FREQ 50
#define SERVO_MIN 150
#define SERVO_MAX 600

extern Adafruit_PWMServoDriver pca1; // declarat în ServoControl.cpp

// Dimensiuni reale ale segmentelor
const float L1 = 64;
const float L2 = 70;
const float L3 = 155;

#endif
