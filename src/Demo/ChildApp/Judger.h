#pragma once
#include "Task.h"
#include "Ball.h"

class Judger
{
public:
	Judger();
	~Judger();
	/*
	�ö���Ϸ���
	task:����Ŀ����Ŀ
	childPickedBalls:С�������������
	totalPickUpBall:С���񵽵�����������п��ܳ���Ŀ����Ŀ��Ҳ����ͨ��childPickedBalls��ȡ�������ع��ˡ�����
	*/
	int AnalysisTask(Task task, Ball childPickedBalls[], int totalPickUpBall);
};

