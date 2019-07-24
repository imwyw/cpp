#include "stdafx.h"
#include "Child.h"
#include <time.h>

Child::Child()
{
	balls = nullptr;
}


Child::~Child()
{
	delete[] balls;//�ͷ������ڴ�
	balls = nullptr;//����ָ���ָ��
}

bool Child::PickUp(Ball * allBalls, int length)
{
	balls = new Ball[length];
	long seed = time(NULL);//�������
	srand((int)seed);
	for (int i = 0; i < length; i++)
	{
		int index = 0;//���λ�� 0-49
		do
		{
			index = rand() % 50;
		} while (allBalls[index].state);//�ж�indexλ�õ����Ƿ��Ѿ�����������Ѿ����������������
		allBalls[index].state = true;//�޸����״̬Ϊ����
		this->balls[i] = allBalls[index];
	}
	return true;
}