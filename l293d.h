/***********************************L293D*******************************************/
// Motor driver IC with Quadruple High current Dual H bridge.

#include<Arduino.h>

class ldriver
{

	private:
	int pin1;
	int pin2;
	int pin3;
	int pin4;
	public:
	ldriver(int,int,int,int);
	void Forward();
	void Backward();
	void Left();
	void Right();
	void Stop();
};
