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
	delete[] balls;//�ͷ������ڴ�
	balls = nullptr;//����ָ���ָ��
}

bool Child::PickUp(Ball ball, int index)
{
	// ���񵽵����������������balls
	balls[index] = ball;
	return true;
}