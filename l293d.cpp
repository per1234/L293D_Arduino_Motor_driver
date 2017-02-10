#include"l293d.h"

ldriver::ldriver(int p1 =3,int p2 =4,int p3 =5,int p4 =6):pin1(p1),pin2(p2),pin3(p3),pin4(p4){

pinMode(pin1,OUTPUT);	
pinMode(pin2,OUTPUT);	
pinMode(pin3,OUTPUT);	
pinMode(pin4,OUTPUT);	
}

void ldriver::Forward()
{
	digitalWrite(pin1,HIGH);
	digitalWrite(pin2,LOW);
	digitalWrite(pin3,HIGH);
	digitalWrite(pin4,LOW);
}
void ldriver::Backward()
{
	
	digitalWrite(pin1,LOW);
	digitalWrite(pin2,HIGH);
	digitalWrite(pin3,LOW);
	digitalWrite(pin4,HIGH);
}

void ldriver::Left()
{
	
	digitalWrite(pin1,LOW);
	digitalWrite(pin2,LOW);
	digitalWrite(pin3,HIGH);
	digitalWrite(pin4,LOW);
}
void ldriver::Right()
{
	digitalWrite(pin1,HIGH);
	digitalWrite(pin2,LOW);
	digitalWrite(pin3,LOW);
	digitalWrite(pin4,LOW);
}
void ldriver::Stop()
{
	digitalWrite(pin1,LOW);
	digitalWrite(pin2,LOW);
	digitalWrite(pin3,LOW);
	digitalWrite(pin4,LOW);
}
