#pragma once
#include "Ball.h"

class Child
{
public:
	Child();
	~Child();
	Ball *balls;//Ð¡º¢¼ñÈ¡µÄÇò
	bool PickUp(Ball* allBalls, int length);//¼ñÇò
};

