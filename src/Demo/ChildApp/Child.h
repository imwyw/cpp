#pragma once
#include "Ball.h"

class Child
{
public:
	// length 小孩应该拣的球的数量
	Child(int length);
	~Child();
	// 小孩应该拣的球的数量
	int shouldPickUpNum;
	//小孩捡取的球，TODO，此处重构为vector向量实现更好
	Ball *balls;
	// 捡球：ball是当前捡到的球； index是捡的第几个球
	bool PickUp(Ball ball, int index);
};

