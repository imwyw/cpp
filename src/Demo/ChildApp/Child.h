#pragma once
#include "Ball.h"

class Child
{
public:
	Child(int length);
	~Child();
	int shouldPickUpNum; // 小孩应该拣的球的数量
	Ball *balls;//小孩捡取的球
	bool PickUp(Ball ball, int index);//捡球
};

