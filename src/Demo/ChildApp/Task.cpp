#include "stdafx.h"
#include "Task.h"


Task::Task()
{
}


Task::~Task()
{
}

void Task::GenerateTask(int blackNum, int redNum, int greenNum)
{
	this->blackNumber = blackNum;
	this->redNumber = redNum;
	this->greenNumber = greenNum;
}