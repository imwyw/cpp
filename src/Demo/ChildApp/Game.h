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
	Task task;//����
	Child *child;//��ͯ
	Judger judger;//����
	Ball allBalls[MAX_BALL_COUNT];//���е���
	void StartGame(int black, int red, int green);
};
