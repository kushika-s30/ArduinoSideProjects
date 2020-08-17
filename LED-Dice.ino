int dice;                           //Declare the variable that will take a random number between 1 to 6
int buttonState=0;                  //Define a buttonState variable (should be set to HIGH when a switch is pressed)

void setup() {
                                    //Set pin 2 as INPUT pin and pins 8-13 as OUTPUT pins
  pinMode(2,INPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);  
}

void loop() {
  buttonState=digitalRead(2);        //Read the input at pin 2 and assign it to buttonState
  if(buttonState==HIGH){
    dice=random(8,14);               //Generate a random number between 8-14 and assign that number to dice when switch is pressed
    for(int i=8;i<=dice;i++){
     digitalWrite(i,HIGH);           //This loop sets the required number of LED pins to HIGH  
     }
    delay(1000);                     //LEDs glow for 1000 milliseconds 
    for(int i=8;i<=dice;i++){
     digitalWrite(i,LOW);            //This loop sets the required number of LED pins to LOW
     } 
  }
}
