#include "stdafx.h"
#include "Child.h"
#include <time.h>

Child::Child(int length)
{
	shouldPickUpNum = length;
	balls = new Ball[50];
}

Child::~Child()
{
	delete[] balls;//释放数组内存
	balls = nullptr;//重新指向空指针
}

// 捡球：ball是小孩捡到的球； index是捡的第几个球
bool Child::PickUp(Ball ball, int index)
{
	balls[index] = ball;
	return true;
}