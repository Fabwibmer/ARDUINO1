//including servo library
#include<Servo.h>
Servo myservo;//creating servo object 
int val;// decalring val variable
void setup()
{
  pinMode(A1,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);// connecting with serial monitor
  myservo.attach(A1);//attach servo object with serial pin A0
}

void loop()
{
  val=analogRead(A0);//reading signal value from potentiometer
  Serial.println(val);// printing value in serial monitor 
  val=map(val,0,1023,0,180);//mapping value to degree format
  myservo.write(val);//giving these value to servo motor for movement 
  delay(150);// delay for motion of servo 
}