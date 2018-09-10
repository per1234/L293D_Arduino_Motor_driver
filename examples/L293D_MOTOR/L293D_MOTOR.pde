#include "l293d.h"    // include library

ldriver l(2,3,4,5);   // PIN numbers in object of ldriver class: class name obj(int,int,int,int)
void setup()
{
}

void loop()
{
  l.Forward();    // forward motion on motor
  l.Backward();   // for backward motion
  l.Left();       // for left motion
  l.Right();      // right motion
}
