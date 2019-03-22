/*
four legged
*/
#include <Servo.h>

Servo fr[3],fl[3],br[3],bl[3];/*fr=front-right , fl=front-left , br=back-right , bl=back-left*/
double length1=5,length2=5,length3=2; 
double height1=4,height2=4;
double th3=height2/length2;
double th1=height1/length1;
double theta1=asin(th1);
double theta3=asin(th3);
double height3=(length3)*(tan(theta1));
double th5=height3/length1;
double height4=height1+height2-height3;
double th3=height4/length2;
double theta5=asin(th5);
double theta4=asin(th4);
double alpha=theta5-theta1;
double beta=alpha+theta4-theta3;
double ratio=beta/alpha

void setup() {
  for(int i=0; i<10; i=i+4)
{
   fr[i].attach(i);
   fl[i].attach(i+1);
   br[i].attach(i+2);
   bl[i].attach(i+3);
}
    
}

void loop() 
{
    for (int j=0;j<4;j++)
    { 
        /*seting up bot to start*/
        fr[i].write(90);/*setting 90 degree as its stand angle*/ 
        fl[i].write(90);
        br[i].write(90);
        bl[i].write(90);
    }
}
void walk_forward()
{
    Serial.println("Started walking forward");
   bl[1].write(85);  /*BENDING OF BACK-LEFT LEG*/
   fr[1].write(80-alpha);/*ROTATION OF RIGHT SERVO 2 AT ANGLE OF ALPHA + 10(for liftment of leg above grounf level)*/
   fr[0].write(90-beta);/*Rotation of servo1 for final movement at angle of beta*/
   fr[1].write(90-alpha);/*Finally placing of leg on ground level*/
   /*NOW SAME PROCESS CONTINUES ON LEFT-BACK LEG*/
   fr[1].write(80-beta);
   bl[1].write(90);
   bl[1].write(100+alpha);
   bl[0].write(90+beta);
   bl[1].write(90+alpha);
   
}
void walk_backward()
{

}
void run_forward()
{

}
void run_backward()
{

}
void turn_right()
{

}
void turn_left()
{

}