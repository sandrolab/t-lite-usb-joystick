// USB Joystick with hall effect sensors
// NOTE: This sketch file is for use with Arduino Leonardo and
//       Arduino Micro only.
//------------------------------------------------------------

//change these to define which pins your hall effect sensors or potentiometers are connected.
//to change button connections, scroll down to loop()
#define X_PIN A3
#define Y_PIN A2
#define R_PIN A1
#define T_PIN A0
//change these to change trim and limits. Calibrating your joystick in Windows achieves the same thing
#define X_MIN 213
#define X_MAX 577
#define X_TRIM 0
#define X_INVERT 1
//to invert an axis, change 1 to -1
#define Y_MIN 577
#define Y_MAX 262
#define Y_TRIM 0
#define Y_INVERT -1

#define R_MIN 674
#define R_MAX 300
#define R_TRIM 0
#define R_INVERT -1

#define T_MIN 213
#define T_MAX 532
#define T_TRIM 0
#define T_INVERT 1

#include <Joystick.h>

Joystick_ Joystick(0x04,JOYSTICK_TYPE_JOYSTICK,
  0, 0,                  // Button Count, Hat Switch Count
  true, true, false,     // X and Y, but no Z Axis
  false, false, false,   // No Rx, Ry, or Rz
  true, true,            // Yes rudder, yes throttle
  false, false, false);  // No accelerator, brake, or steering

void setup() {
  
  analogReference(INTERNAL);

  // Initialize Joystick Library
  Joystick.begin(false); //false = dont send automatically. We will sendState() at the end of the loop
  Joystick.setXAxisRange(-512, 512);
  Joystick.setYAxisRange(-512, 512);
  Joystick.setRudderRange(-512, 512);
  Joystick.setThrottleRange(-512, 512);
 
}

void loop() {
  
  //Read analog axes
  int value = map(analogRead(X_PIN) + X_TRIM , X_MIN, X_MAX, -512, 512) * X_INVERT;
  Joystick.setXAxis(value);
  value = map(analogRead(Y_PIN) + Y_TRIM , Y_MIN, Y_MAX, -512, 512) *Y_INVERT;
  Joystick.setYAxis(value);
  value = map(analogRead(R_PIN) + R_TRIM , R_MIN, R_MAX, -512, 512) * R_INVERT;
  Joystick.setRudder(value);
  value = map(analogRead(T_PIN) + T_TRIM , T_MIN, T_MAX, -512, 512) * T_INVERT;
  Joystick.setThrottle(value);
  
  Joystick.sendState();
  delay(50);
}
