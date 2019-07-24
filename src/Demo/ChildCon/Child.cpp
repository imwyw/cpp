#include "stdafx.h"
#include "Child.h"
#include <time.h>

Child::Child()
{
	balls = nullptr;
}


Child::~Child()
{
	delete[] balls;//释放数组内存
	balls = nullptr;//重新指向空指针
}

bool Child::PickUp(Ball * allBalls, int length)
{
	balls = new Ball[length];
	long seed = time(NULL);//随机因子
	srand((int)seed);
	for (int i = 0; i < length; i++)
	{
		int index = 0;//球的位置 0-49
		do
		{
			index = rand() % 50;
		} while (allBalls[index].state);//判断index位置的球是否已经被捡起，如果已经被捡起则重新随机
		allBalls[index].state = true;//修改球的状态为捡起
		this->balls[i] = allBalls[index];
	}
	return true;
}