#pragma once
#include "Ball.h"

class Child
{
public:
	// length С��Ӧ�ü���������
	Child(int length);
	~Child();
	// С��Ӧ�ü���������
	int shouldPickUpNum;
	//С����ȡ����TODO���˴��ع�Ϊvector����ʵ�ָ���
	Ball *balls;
	// ����ball�ǵ�ǰ�񵽵��� index�Ǽ�ĵڼ�����
	bool PickUp(Ball ball, int index);
};

