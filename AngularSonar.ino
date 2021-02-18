#include <Servo.h> // Includes the Servo library

// Defining Trig and Echo pins of the Ultrasonic Sensor
const int trigPin = 9;
const int echoPin = 10;
// Variables for the duration and the distance
long duration;
int distance;

int RED = 2; // Variable that defines Red LED 

Servo myServo; // Creates a servo object for controlling the servo motor

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
  pinMode(echoPin, INPUT); // Sets the echoPin as an Input
  myServo.attach(8); // Defines on which pin the servo motor is attached
}
void loop() {
  // rotates the servo motor from 15 to 165 degrees
  for(int i=15;i<=165;i++){  
  myServo.write(i);
  delay(30);
  distance = calculateDistance();// Calls a function for calculating the distance measured by the Ultrasonic sensor for each degree
    
   //To make Red LED glow when object is closer than 20cm
   if(distance<20){
      digitalWrite(RED,HIGH); // NOTE: The LED glows and the servo is paused at the particular angle until the object is moved farther than 20cm
    }
    else{
      digitalWrite(RED,LOW);
    }
  }
  
  // Repeats the previous lines from 165 to 15 degrees
  for(int i=165;i>15;i--){  
  myServo.write(i);
  delay(30);
  distance = calculateDistance();
    if(distance<20){
      digitalWrite(RED,HIGH);
      delay(1000);
     }
     else{
      digitalWrite(RED,LOW);
    }
  }
}

// Function for calculating the distance measured by the Ultrasonic sensor
int calculateDistance(){ 
  
  digitalWrite(trigPin, LOW); // To clear the signals of trigPin 
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH); 
  delayMicroseconds(10); // Sets the trigPin on HIGH state for 10 micro seconds
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH); // Reads the echoPin, returns the sound wave travel time in microseconds
  distance= (duration*0.034)/2;
  return distance;
} 
