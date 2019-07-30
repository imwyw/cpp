#include "stdafx.h"
#include "Judger.h"


Judger::Judger()
{
}


Judger::~Judger()
{
}

int Judger::AnalysisTask(Task task, Ball balls[], int length)
{
	// ��û������
	if (task.blackNumber + task.redNumber + task.greenNumber > length)
	{
		return -1;
	}
	int redCount = 0;//��ɫ����
	int blackCount = 0;//��ɫ����
	int greenCount = 0;//��ɫ����
	// ����������ͳ����ɫ
	for (int i = 0; i < length; i++)
	{
		// c_str() string->const *char,���ڱȽ��ַ����Ƿ����
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