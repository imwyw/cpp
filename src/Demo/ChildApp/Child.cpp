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
	delete[] balls;//�ͷ������ڴ�
	balls = nullptr;//����ָ���ָ��
}

// ����ball��С���񵽵��� index�Ǽ�ĵڼ�����
bool Child::PickUp(Ball ball, int index)
{
	balls[index] = ball;
	return true;
}