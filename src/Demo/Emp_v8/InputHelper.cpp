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
	// cin.getline��������ֻ�����ַ�����
	char inputChars[1000] = {};
	// ����Ҫ����ǰ��Ļ��У�����ܿ���ֱ������getline��
	cin.ignore();
	// �����������пո���Ʊ���ĳ���
	cin.getline(inputChars, 1000);
	return inputChars;
}