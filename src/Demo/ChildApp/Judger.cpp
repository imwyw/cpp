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
	// ��û������
	if (task.blackNumber + task.redNumber + task.greenNumber > totalPickUpBall)
	{
		return -1;
	}
	int redCount = 0;//��ɫ����
	int blackCount = 0;//��ɫ����
	int greenCount = 0;//��ɫ����
	// ����������ͳ����ɫ
	for (int i = 0; i < totalPickUpBall; i++)
	{
		// c_str() string->const *char,���ڱȽ��ַ����Ƿ����
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

	//�ж��������Ƿ�ƥ��
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