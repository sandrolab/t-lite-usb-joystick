# t-lite-usb-joystick

I forked this project to convert my Jumper T-Lite (or any transmitter with hall sensor gimbals) and use it via USB with a flight simulator. You’ll just need an **Arduino Micro or Leonardo board**.

## Wiring (for the T-Lite)

- Black: A0 - A2
- White: A1 - A3
- Yellow: Vcc
- Red: Ground

**PLEASE NOTE:** the signal could be little shaky because hall sensor needs more resolution. Consider to use a board with better ADC such as Teensy, the Blue Pill etc. or build up an amplification circuit.

## Library
https://github.com/MHeironimus/ArduinoJoystickLibrary

## Video tutorial
https://youtu.be/wRZsLJ4Cb2E
