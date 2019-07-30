#pragma once
class Task
{
public:
	Task();
	~Task();
	int blackNumber;
	int redNumber;
	int greenNumber;
	void GenerateTask(int blackNum, int redNum, int greenNum);//生成一个任务

};

