#pragma once
#include "Ball.h"
#include "Task.h"
#include "Child.h"
#include "Judger.h"

class Game
{
public:
	Game();
	~Game();
	Task task;//任务
	Child *child;//儿童
	Judger judger;//裁判
	Ball allBalls[50];//所有的球
	void StartGame(int black, int red, int green);
};

