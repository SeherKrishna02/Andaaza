//this is the one for the Friday. March 17 Demo

#include <AccelStepper.h>

const int COIL1_PIN1 = 46; //z axis toolhead
const int COIL1_PIN2 = 48;
const int COIL2_PIN1 = 62;
const int COIL2_PIN2 = 40;

const int SOUND_PIN = A5;
const int THRESHOLD = 528;

const int MAX_SPEED = 7000; //speed for z axis
const int ACCELERATION = 10000;

const int MOTOR2_COIL1_PIN1 = 54; //x axis turntable
const int MOTOR2_COIL1_PIN2 = 55;
const int MOTOR2_COIL2_PIN1 = 38;
const int MOTOR2_COIL2_PIN2 = 53;

const int MOTOR2_SPEED = 400; //set speed of turntable
const int MOTOR2_MAXSPEED = 2000; //set speed of turntable

AccelStepper stepper1(AccelStepper::DRIVER, COIL1_PIN1, COIL1_PIN2, COIL2_PIN1, COIL2_PIN2);
AccelStepper stepper2(AccelStepper::DRIVER, MOTOR2_COIL1_PIN1, MOTOR2_COIL1_PIN2, MOTOR2_COIL2_PIN1, MOTOR2_COIL2_PIN2);

void setup() {
  pinMode(COIL1_PIN1, OUTPUT);
  pinMode(COIL1_PIN2, OUTPUT);
  pinMode(COIL2_PIN1, OUTPUT);
  pinMode(COIL2_PIN2, OUTPUT);
  pinMode(MOTOR2_COIL1_PIN1, OUTPUT);
  pinMode(MOTOR2_COIL1_PIN2, OUTPUT);
  pinMode(MOTOR2_COIL2_PIN1, OUTPUT);
  pinMode(MOTOR2_COIL2_PIN2, OUTPUT);

  stepper1.setMaxSpeed(MAX_SPEED);
  stepper1.setAcceleration(ACCELERATION);

  stepper2.setMaxSpeed(MOTOR2_MAXSPEED);
  stepper2.setSpeed(MOTOR2_SPEED);

  //Serial.begin(9600);
}

void loop() {
  int soundInput = analogRead(SOUND_PIN);

  if (soundInput > THRESHOLD) {
    stepper1.move(30);
      stepper2.runSpeed();

    stepper1.runToPosition();
//    stepper1.move(-5);
//    stepper1.runToPosition();
  }

  stepper1.move(-1);
  stepper1.runSpeedToPosition();

  stepper2.runSpeed();

//  Serial.print("Stepper 1 position: ");
//  Serial.println(stepper1.currentPosition());
//  Serial.print("Stepper 2 speed: ");
//  Serial.println(MOTOR2_SPEED);
  delay(1);
}
