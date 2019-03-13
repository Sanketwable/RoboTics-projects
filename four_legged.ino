/*
four legged
*/
#include <Servo.h>

Servo fr[4],fl[4],br[4],bl[4];



void setup() {
  for(int i=0; i<4; i=i+4)
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
        fr[i].write(90);
        fl[i].write(90);
        br[i].write(90);
        bl[i].write(90);
    }
    void 

}
void walk_forward()
{
    br[2].write(95);
    bl[2].write(90);
    fl[2].write(95);
    fr[2].write(100);
    fr[]

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