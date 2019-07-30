#pragma once
#include "Task.h"
#include "Ball.h"

class Judger
{
public:
	Judger();
	~Judger();
	int AnalysisTask(Task task, Ball balls[], int length);
};

