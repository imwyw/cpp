#include "stdafx.h"
#include "Game.h"

Game::Game()
{
	string colors[] = { "red", "green", "black" };
	long seed = (long)time(NULL);
	srand((int)seed);
	for (int i = 0; i < 50; i++)
	{
		Ball b;
		b.color = colors[rand() % 3];
		b.x = rand() % 900;
		b.y = rand() % 600;
		allBalls[i] = b;
	}
}


Game::~Game()
{
}


void Game::StartGame(int black, int red, int green)
{
	// �����µ�����
	task.GenerateTask(black, red, green);

	// ʵ����С������
	child = new Child(black + red + green);
}