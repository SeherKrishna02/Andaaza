#include <AccelStepper.h>
#include <elapsedMillis.h>

//
// Steppers
//
#define X_STEP_PIN         54 //turntable motor
#define X_DIR_PIN          55
#define X_ENABLE_PIN       38
  #define X_CS_PIN         53

/*
#define Y_STEP_PIN         60 
#define Y_DIR_PIN          61
#define Y_ENABLE_PIN       56
  #define Y_CS_PIN         49
*/

#define Z_STEP_PIN         46
#define Z_DIR_PIN          48
#define Z_ENABLE_PIN       62
  #define Z_CS_PIN         40



// Creates an instance
AccelStepper stepperSpool1(AccelStepper::DRIVER, X_STEP_PIN, X_DIR_PIN); //turntable motor
//AccelStepper stepperSpool2(AccelStepper::DRIVER, Y_STEP_PIN, Y_DIR_PIN); 
AccelStepper stepperSpool3(AccelStepper::DRIVER, Z_STEP_PIN, Z_DIR_PIN); // drawing motor

elapsedMillis printTime;    // one second info printout timer.
const int maxSpeedLimit = 1000.0;  // set this to the maximum speed you want to use.

// Variables to store current, previous and move position
int long newval = 0;
int previous = 0;
int zSensorVal = 0;
int xSensorVal = 0;

void setup() {

 //MOTORS
 
  pinMode(X_STEP_PIN, OUTPUT); 
  pinMode(X_DIR_PIN, OUTPUT);
  pinMode(X_ENABLE_PIN, OUTPUT);
  pinMode(X_CS_PIN, OUTPUT);
 /* 
  pinMode(Y_STEP_PIN, OUTPUT);
  pinMode(Y_DIR_PIN, OUTPUT);
  pinMode(Y_ENABLE_PIN, OUTPUT);
  pinMode(Y_CS_PIN, OUTPUT);
  */
  pinMode(Z_STEP_PIN, OUTPUT);
  pinMode(Z_DIR_PIN, OUTPUT);
  pinMode(Z_ENABLE_PIN, OUTPUT);
  pinMode(Z_CS_PIN, OUTPUT);

  //STEPPERS CONFIG 
  //stepperSpool1.setAcceleration(maxSpeedLimit); //x
  stepperSpool1.setMaxSpeed(maxSpeedLimit);
  //stepperSpool1.moveTo(2000);
  //stepperSpool1.setSpeed(maxSpeedLimit/5.0);    // initial speed target
   stepperSpool1.setSpeed(500); 

   stepperSpool3.setAcceleration(4800); //z
   stepperSpool3.setMaxSpeed(4800);
   //stepperSpool3.setSpeed(4800);
  
    digitalWrite(X_DIR_PIN,LOW); 
   // digitalWrite(Y_DIR_PIN,LOW);
    digitalWrite(Z_DIR_PIN,LOW);

}

void loop() {

  zSensorVal = analogRead(A5);  //Read Potentiometer value from the drawing axis
  if ((zSensorVal > previous+6) || (zSensorVal < previous-6)) {  // Check that a move of the pot is at least > or < than 6
    newval = map(zSensorVal, 0, 1023, 0, 1600);  // Map value (1600 = 1 stepper shaft rotation)
    stepperSpool3.runToNewPosition(newval);  // Move stepper to new position
    previous = zSensorVal;  // save current value into variable previous
  }
/*
  xSensorVal = analogRead(A5);   // read the potentiometer value for the turn table
  // map it to a the maximum speed range
  int motorSpeed = map(xSensorVal, 0, 1023, 5, maxSpeedLimit);
  // set the motor speed:
  if (motorSpeed > 0) {
    stepperSpool1.setSpeed((float)motorSpeed);
  }
  */
  stepperSpool1.runSpeed();


}
