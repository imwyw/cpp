#pragma once
#include "Ball.h"

class Child
{
public:
	Child();
	~Child();
	Ball *balls;//С����ȡ����
	bool PickUp(Ball* allBalls, int length);//����
};

