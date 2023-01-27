#include <Stepper.h>
//Define pins

int drivePUL = 7;
int driveDIR = 6;
int blackrockEnable = 3;
const int revs = 32767;

Stepper myStepper(stepsPerRevolution, drivePUL, driveDIR);

void setup() {
  myStepper.setSpeed(20); //speed is in RPM;
  Serial.begin(9600);
  while (!Serial);
  Serial.println("It is on");

}

void loop() {

  Serial.println("clockwise"); 
  myStepper.step(revs);//controls the direction
  
  //Serial.println("counterclockwise");
  //myStepper.step(-revs); //controls the direction
  //delay(100);

}
