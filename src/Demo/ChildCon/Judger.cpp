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
		cout << "��ϲ�㣬С����" << endl;
	}
	else
	{
		cout << "С���ѣ�Ҫ��������Ŷ��" << endl;
	}

	cout << "��ɫ��" << redCount << endl;
	cout << "��ɫ��" << blackCount << endl;
	cout << "��ɫ��" << greenCount << endl;
}