# ArduinoSideProjects
Simple, beginner-level projects developed using the Arduino UNO board. 

## 1. Proximity Indicator using Ultrasoninc Sensor HC-SR04 

This sketch uses Ultrasoninc Sensor HC-SR04 to find the distance of a given object and depending on the distance range, the LED glows. 

Distance Range:

0-15 : RED LED GLOWS

15-45 : BLUE LED GLOWS

45-60 : GREEN LED GLOWS

This sketch uses 1960 bytes (6%) of program storage space. Maximum is 32256 bytes. Global variables use 9 bytes (0%) of dynamic memory, leaving 2039 bytes for local variables. Maximum is 2048 bytes.

## 2. LED Dice 

This sketch makes use of 6 LEDs which are connected parallelly to 6 digital pins of the Arduino UNO.

Whenever the PUSH button is pressed, a random number of LEDs between (1-6) will glow, serving the purpose of a dice. 


This sketch uses 1724 bytes (5%) of program storage space. Maximum is 32256 bytes.
Global variables use 15 bytes (0%) of dynamic memory, leaving 2033 bytes for local variables. Maximum is 2048 bytes.

## 3. Angular Sonar

This sketch works similar to proximity indicator however, it is given an angular motion using a Servo motor. The Ultrasonic sensor is attached to the Servo motor which enables the ultrasonic sensor to have an angular movement(15-165 degrees). 

The Red LED glows whenever an object is sensed at a distance closer than 20 cm and the sonar freezes its movement until the object is placed farther than 20 cm. 


