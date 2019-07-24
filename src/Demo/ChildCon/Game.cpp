#include "stdafx.h"
#include "Game.h"
#include <time.h>
#include "Judger.h"
#include "Child.h"


Game::Game()
{
	string color[] = { "red","black","green" };
	long seed = time(NULL);
	srand((int)seed);
	for (int i = 0; i < 50; i++)
	{
		Ball b;
		int index = rand() % 3;//������� 0-2
		b.color = color[index];
		allBalls[i] = b;
	}
}


Game::~Game()
{
}


void Game::StartGame()
{
	/*
	1.����һ������
	2.���������С����С������
	3.�����ж�
	*/
	Task task;
	Child child;
	Judger judger;

	task.GenerateTask(1, 2, 3);
	int len = 1 + 2 + 3;
	if (child.PickUp(allBalls, len))
	{
		judger.AnalysisTask(task, child.balls, len);
	}
}