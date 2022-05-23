# t-lite-usb-joystick

Recycle your broken Jumper T-Lite (or any transmitter with hall sensor gimbals) and use it with a flight simulator. You’ll just need an Arduino Micro or Leonardo board.

**Wiring (for the T-Lite):**
Black: A0 - A2
White: A1 - A3
Yellow: Vcc
Red: Ground

**Library you need:**
https://github.com/MHeironimus/ArduinoJoystickLibrary

**Project forked from:**
https://github.com/akakikuumeri/Akaki-Joystick

**Video tutorial:**
https://youtu.be/wRZsLJ4Cb2E

PLEASE NOTE: the signal could be little shaky because hall sensor needs more resolution. Consider to use a board with better ADC such as Teensy, the Blue Pill etc. or build up an amplification circuit.