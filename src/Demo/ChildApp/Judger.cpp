#include "stdafx.h"
#include "Judger.h"


Judger::Judger()
{
}


Judger::~Judger()
{
}

int Judger::AnalysisTask(Task task, Ball childPickedBalls[], int totalPickUpBall)
{
	// 球还没捡完呢
	if (task.blackNumber + task.redNumber + task.greenNumber > totalPickUpBall)
	{
		return -1;
	}
	int redCount = 0;//红色计数
	int blackCount = 0;//黑色计数
	int greenCount = 0;//绿色计数
	// 遍历所有球，统计颜色
	for (int i = 0; i < totalPickUpBall; i++)
	{
		// c_str() string->const *char,用于比较字符串是否相等
		if (strcmp("red", childPickedBalls[i].color.c_str()) == 0)
		{
			redCount++;
		}
		else if (strcmp("green", childPickedBalls[i].color.c_str()) == 0)
		{
			greenCount++;
		}
		else
		{
			blackCount++;
		}
	}

	//判断与任务是否匹配
	if (task.redNumber == redCount
		&&task.blackNumber == blackCount
		&&task.greenNumber == greenCount)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}