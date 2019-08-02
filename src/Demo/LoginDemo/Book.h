#pragma once
#include "stdafx.h"

class Book
{
public:
	Book();
	Book(string date, string isbn, string name, string auth, string publisher);
	string publishDate;//出版时间
	string ISBN;
	string name;//姓名
	string auth;//作者
	string publisher;//出版社
};

