#include <Stepper.h>
#define STEPS 2038 // the number of steps in one revolution of your motor (28BYJ-48)
Stepper stepper(STEPS, 2, 3, 4, 5);
Stepper stepper1(2038, 6, 7, 8, 9);
//int potState = 0; 
//int pot1State = 0;
void setup() {
  Serial.begin(9600); 
 }
 void loop() {
 // potState = analogRead(A0); //reads the values from the potentiometers
  //pot1State = analogRead(A1); //
  
 // Serial.println(pot1State); // sends joystick data to serial port for debuging
  stepper.setSpeed(90);
  stepper1.setSpeed(90);

  //if (potState > 600){  //all code below controls movement
   stepper.step(20);
   delay(5);
   stepper1.step(20);
   delay(500);
 // } 
 // if (potState < 400){
  stepper.step(-20);
  delay(5);
 // }

 // if (pot1State < 400){
   stepper1.step(-20);
   delay(500);
 // }
  //if (pot1State > 600){

  //}
  
 }
