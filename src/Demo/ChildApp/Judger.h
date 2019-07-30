#pragma once
#include "Task.h"
#include "Ball.h"

class Judger
{
public:
	Judger();
	~Judger();
	/*
	裁定游戏结果
	task:包含目标数目
	childPickedBalls:小孩捡起的所有球
	totalPickUpBall:小孩捡到的球的数量，有可能超过目标数目，也可以通过childPickedBalls获取，懒得重构了。。。
	*/
	int AnalysisTask(Task task, Ball childPickedBalls[], int totalPickUpBall);
};

