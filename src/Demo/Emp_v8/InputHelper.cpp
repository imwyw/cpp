#include "stdafx.h"
#include "InputHelper.h"

InputHelper::InputHelper()
{
}

InputHelper::~InputHelper()
{
}

string InputHelper::GetLine()
{
	// cin.getline方法参数只能用字符数组
	char inputChars[1000] = {};
	// 必须要忽略前面的换行，否则很可能直接跳过getline了
	cin.ignore();
	// 允许输入中有空格和制表符的出现
	cin.getline(inputChars, 1000);
	return inputChars;
}