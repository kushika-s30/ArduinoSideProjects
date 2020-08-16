// ---------------------------------------------------------------- //
// Arduino Object Detector using Ultrasoninc Sensor HC-SR04
// Written by Kushika Sivaprakasam
// Using Arduino IDE 1.8.42.0
// Using HC-SR04 Module
// Tested on 24 August 2020
// ---------------------------------------------------------------- //


int redLED=11; // pin D11 of Arduino connected to a red LED 
int blueLED=12; // pin D12 of Arduino connected to a blue LED 
int greenLED=13; // pin D13 of Arduino connected to a green LED 
int echoPin=9; // pin D9 of Arduino connected to pin Echo of HC-SR04
int trigPin=10; // pin D10 of Arduino connected to pin Trig of HC-SR04

int objDet=0; //initialize variables

long duration, distance; // define variables

void setup() { 
  pinMode(LED,OUTPUT); // Set the LED pin as an OUTPUT
  pinMode(trigPin,OUTPUT);// Sets the trigPin as an OUTPUT
  pinMode(echoPin,INPUT); // Sets the echoPin as an INPUT
}

void loop() {
      
      // Clear the trigPin condition
      digitalWrite(trigPin, LOW); 
      delay(10);
      
      // Set the trigPin HIGH (ACTIVE) for 10 microseconds
      digitalWrite(trigPin, HIGH);
      delayMicroseconds(10);
      digitalWrite(trigPin, LOW);
      
      // Read the echoPin, returns the sound wave travel time in microseconds
      duration = pulseIn(echoPin, HIGH);
      
      // Calculate the distance
      distance = duration * 0.034 / 2; 
      
      
      if(distance<15 || distance==15){
        digitalWrite(redLED,HIGH);}  // Distance range= 0-15 cm, Red LED set to HIGH
      else if(distance>15 && distance<45){
        digitalWrite(blueLED,HIGH);} // Distance range= 15-45 cm, Blue LED set to HIGH
      else if(distance>45 && distance<60){
        digitalWrite(greenLED,HIGH);} // Distance range= 45-60 cm, Green LED set to HIGH
      else{
        // All LEDs set to LOW if no condition is satisfied
        digitalWrite(redLED,LOW);
        digitalWrite(blueLED,LOW);
        digitalWrite(greenLED,LOW); 
      }
}
