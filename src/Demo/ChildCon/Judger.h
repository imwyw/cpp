#pragma once
#include "Task.h"
#include "Ball.h"

class Judger
{
public:
	Judger();
	~Judger();
	void AnalysisTask(Task task, Ball balls[], int length);
};

