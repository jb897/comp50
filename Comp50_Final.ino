#include <Servo.h>

// Declare variables
Servo Servo1;
Servo Servo2;
Servo Servo3;


// Setup Function
void setup() {
Servo1.attach(9);
Servo2.attach(10);
Servo3.attach(11);

rest();

}

// Move to different positions
void loop() {
  delay(5000);
  cobra();
  delay(5000);
  wave();
  delay(5000);
  rest();
  while(69){};
}

// Hangs Arm
void rest() {
  Servo1.write(180);
  Servo2.write(150);
  Servo3.write(90);

}

void cobra() {
  Servo1.write(15);
  Servo2.write(180);
  Servo3.write(175);
}

void wave() {
  Servo1.write(40);
  for (int i = 0; i<=3; i++) {
      Servo2.write(100);
      delay(1100);
      Servo2.write(125);
      delay(1100);
  }

}
void openMouth() {
  Servo3.write(110);
}

void closeMouth() {
  Servo3.write(75);
}


