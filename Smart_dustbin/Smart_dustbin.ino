#include<Servo.h>
Servo tap_servo;

int sensor_pin = 3;
int sensor_pin2 = 4;
int tap_servo_pin = 5;
int val;
int val2;

void setup(){
  pinMode(sensor_pin,INPUT);
  pinMode(sensor_pin2,INPUT);
  tap_servo.attach(tap_servo_pin);
}

void loop(){
  val = digitalRead(sensor_pin);
  val2 = digitalRead(sensor_pin2);
  if(val==0)
  {
    tap_servo.write(0);
  }
  if(val==1)
  {
    tap_servo.write(90);
    delay(1000);
  }
  if(val2==0)
  {
    tap_servo.write(0);
  }
  if(val2==1)
  {
    tap_servo.write(90);
    delay(1000);
  }
}