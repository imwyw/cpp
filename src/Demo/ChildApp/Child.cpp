#include "stdafx.h"
#include "Child.h"
#include <time.h>

Child::Child(int length)
{
	shouldPickUpNum = length;
	balls = new Ball[MAX_BALL_COUNT];
}

Child::~Child()
{
	delete[] balls;//释放数组内存
	balls = nullptr;//重新指向空指针
}

bool Child::PickUp(Ball ball, int index)
{
	// 将捡到的球依次添加至数组balls
	balls[index] = ball;
	return true;
}