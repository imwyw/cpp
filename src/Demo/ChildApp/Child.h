#pragma once
#include "Ball.h"

class Child
{
public:
	Child(int length);
	~Child();
	int shouldPickUpNum; // С��Ӧ�ü���������
	Ball *balls;//С����ȡ����
	bool PickUp(Ball ball, int index);//����
};

