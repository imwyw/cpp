#pragma once
#include "stdafx.h"

class Book
{
public:
	Book();
	Book(string date, string isbn, string name, string auth, string publisher);
	string publishDate;//����ʱ��
	string ISBN;
	string name;//����
	string auth;//����
	string publisher;//������
};

