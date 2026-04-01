#include <ESP32Servo.h>

// Create Servo Objects
Servo servoYaw;   // Left/Right movement
Servo servoPitch; // Up/Down movement
Servo servoBlink; // Eyelid movement

/ ESP32 GPIO Pins (safe PWM pins)
const int yawPin = 25;
const int pitchPin = 26;
const int blinkPin = 27;

// Servo PWM settings
const int servoFreq = 50;      // Standard servo frequency
const int servoResolution = 16;

