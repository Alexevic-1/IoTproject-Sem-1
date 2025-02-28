/*
 keyestudio Mini Tank Robot v2.0
 lesson 8.1
 motor driver
 http://www.keyestudio.com
*/ 

#define ML_Ctrl 13  //define the direction control pin of left motor
#define ML_PWM 11   //define the PWM control pin of left motor
#define MR_Ctrl 12  //define direction control pin of right motor
#define MR_PWM 3   // define the PWM control pin of right motor

void setup()
{
  pinMode(ML_Ctrl, OUTPUT);//define direction control pin of left motor to output
  pinMode(ML_PWM, OUTPUT);//define PWM control pin of left motor as output
  pinMode(MR_Ctrl, OUTPUT);//define direction control pin of right motor as output.
  pinMode(MR_PWM, OUTPUT);//define the PWM control pin of right motor as output
}

void loop()
{ 
  digitalWrite(ML_Ctrl,LOW);//set the direction control pin of left motor to LOW
  analogWrite(ML_PWM,200);//set the PWM control speed of left motor to 200
  digitalWrite(MR_Ctrl,LOW);//set the direction control pin of right motor to LOW
  analogWrite(MR_PWM,200);//set the PWM control speed of right motor to 200

  //front
  delay(2000);//delay in 2s
   digitalWrite(ML_Ctrl,HIGH);//set the direction control pin of left motor to HIGH
  analogWrite(ML_PWM,200);//set the PWM control speed of left motor to 200  
digitalWrite(MR_Ctrl,HIGH);//set the direction control pin of right motor to HIGH
  analogWrite(MR_PWM,200);//set the PWM control speed of right motor to 200

   //back
  delay(2000);//delay in 2s 
  digitalWrite(ML_Ctrl,HIGH);//set the direction control pin of left motor to HIGH
  analogWrite(ML_PWM,200);//set the PWM control speed of left motor to 200
  digitalWrite(MR_Ctrl,LOW);//set the direction control pin of right motor to LOW
  analogWrite(MR_PWM,200);//set the PWM control speed of right motor to 200

    //left
  delay(2000);//delay in 2s
   digitalWrite(ML_Ctrl,LOW);//set the direction control pin of left motor to LOW
  analogWrite(ML_PWM,200);//set the PWM control speed of left motor to 200
  digitalWrite(MR_Ctrl,HIGH);//set the direction control pin of right motor to HIGH
  analogWrite(MR_PWM,200);//set the PWM control speed of right motor to 200

   //right
  delay(2000);//delay in 2s
  analogWrite(ML_PWM,0);//set the PWM control speed of left motor to 0
  analogWrite(MR_PWM,0);//set the PWM control speed of right motor to 0

    //stop
  delay(2000);//delay in 2s
}//*****************************************
