#include "stdafx.h"
#include "Judger.h"


Judger::Judger()
{
}


Judger::~Judger()
{
}

void Judger::AnalysisTask(Task task, Ball balls[], int length)
{
	int redCount = 0;//红色计数
	int blackCount = 0;//黑色计数
	int greenCount = 0;//绿色计数
	// 遍历所有球，统计颜色
	for (int i = 0; i < length; i++)
	{
		// c_str() string->const *char,用于比较字符串是否相等
		if (strcmp("red", balls[i].color.c_str()) == 0)
		{
			redCount++;
		}
		else if (strcmp("green", balls[i].color.c_str()) == 0)
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
		cout << "恭喜你，小朋友" << endl;
	}
	else
	{
		cout << "小朋友，要继续加油哦！" << endl;
	}

	cout << "红色：" << redCount << endl;
	cout << "黑色：" << blackCount << endl;
	cout << "绿色：" << greenCount << endl;
}