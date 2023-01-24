#include <Servo.h>//including servo library for controlling servo 
Servo myservo;  //creating servo object for controlling servo input
void setup() {
  myservo.attach(9);  //attaching given 9 pin to servo object for controlling
  pinMode(13,INPUT);//set 13 digital pin as input of sensor 
}
//fxn for activating motor to perform specific task
void motor() {
  //using for loop for opening gate
  for (int pos = 0; pos <= 120; pos += 1) {
    myservo.write(pos);              
    delay(10);
  }
  //checking if object is there or not ?
  for(;digitalRead(13)==1;) {}
  //using for loop for closing gate                     
  for (int pos = 120; pos >= 0; pos -= 1) { 
    myservo.write(pos);              
    delay(10);
  }
}

void loop() 
{
  if (digitalRead(13)==1) //reading input from infrared sensor
  { 
    motor();//calling motor fxn
  }
  delay (10);
}