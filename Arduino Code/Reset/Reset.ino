#include <Servo.h>

//Run this code ones to bring all servos to base position

void setup() {
  
  //<servo_name>.attach(<pin_number>)
  servo9.attach(3);
  servo10.attach(4);
  servo11.attach(5);
  servo12.attach(6);

  //attaching ldr to arduino pins and setting them as input
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
}
void loop() {
  //base positions may vary from build to build
  servo9.write(5);
  servo10.write(0);
  servo11.write(0);
  servo12.write(15);
  }
}
