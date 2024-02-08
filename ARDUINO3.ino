int thres = 900;//setting threshold value as per the enviroment condition
void setup() {
 pinMode(13,OUTPUT);//set 13 digital pin as output
 pinMode(A0,INPUT); //set A0 anlog pin as input voltage of ldr 
 Serial.begin(9600);// starting serial communication between arduino and laptop
}

void loop()
{ 
 //taking value from enviroment about brightness and setting threshold value
 Serial.println(analogRead(A0));
 //taking decision as per our requirements
 if(thres<=analogRead(A0))
 {
  //enabling light 
   digitalWrite(13,HIGH);  
 }
 
 else
 {
  //trun off the light 
  digitalWrite(13,LOW);
 };
}
