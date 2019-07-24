#pragma once
class Ball
{
public:
	Ball();
	~Ball();
	string color;//球的颜色
	int x;//球的x轴位置，控制台版不用
	int y;//球的y轴位置，控制台版不用
	bool state;//球的状态，是否被捡起
};

