<!-- TOC -->

- [面向对象](#面向对象)
    - [类定义](#类定义)
    - [环形队列的实现](#环形队列的实现)
    - [构造函数](#构造函数)
        - [构造函数的重载](#构造函数的重载)
        - [初始化列表](#初始化列表)
        - [拷贝构造函数](#拷贝构造函数)
    - [析构函数](#析构函数)
    - [对象数组](#对象数组)
    - [拷贝](#拷贝)
        - [浅拷贝](#浅拷贝)
        - [深拷贝](#深拷贝)
    - [类与类的关系](#类与类的关系)
        - [依赖](#依赖)
        - [聚合](#聚合)
        - [继承](#继承)
            - [继承关系](#继承关系)
            - [实现语法](#实现语法)
            - [继承中的访问权限](#继承中的访问权限)
            - [继承中构造和析构](#继承中构造和析构)

<!-- /TOC -->

<a id="markdown-面向对象" name="面向对象"></a>
# 面向对象
C++ 在 C 语言的基础上增加了面向对象编程，C++ 支持面向对象程序设计。类是 C++ 的核心特性，通常被称为用户定义的类型。
类用于指定对象的形式，它包含了数据表示法和用于处理数据的方法。类中的数据和方法称为类的成员。函数在一个类被称为类的成员。

![](../assets/BASE/cpp_class.png)

<a id="markdown-类定义" name="类定义"></a>
## 类定义
定义一个类，本质上是定义一个数据类型的蓝图。
这实际上并没有定义任何数据，但它定义了类的名称意味着什么，也就是说，它定义了类的对象包括了什么，以及可以在这个对象上执行哪些操作。
类定义是以关键字 class 开头，后跟类的名称。类的主体是包含在一对花括号中。
类定义后必须跟着一个分号或一个声明列表。例如，我们使用关键字 class 定义 Box 数据类型，如下所示：
```cpp
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

class Box
{
public://公有成员
	//长度
	double length;
	//宽度
	double width;
	//高度
	double height;

	//计算体积
	double GetVolume() {
		return height*width*length;
	};

	//获取表面积
	double GetArea();

protected://受保护成员
	//颜色
	string color;

private://私有成员
	//材质
	string material;
};

//Box的派生类BigBox
class BigBox :public Box {
};

double Box::GetArea() {
	return (length*width + length*height + width*height) * 2;
};

int main()
{
	Box box1;//对象box1，从栈实例化对象

	Box *pBox = new Box();//从堆实例化对象

	//栈上对象使用点【.】
	box1.length = 10;
	box1.width = 5;
	box1.height = 3;

	//堆上对象
	pBox->length = 100;
	pBox->width = 50;
	pBox->height = 30;


	cout << "盒子体积：" << box1.GetVolume() << endl;
	cout << "盒子表面积：" << box1.GetArea() << endl;

	cout << "//////////////////////////////////////////////////////////////////////////" << endl;

	cout << "pbox盒子体积：" << pBox->GetVolume() << endl;
	cout << "pbox盒子表面积：" << pBox->GetArea() << endl;

	cout << "//////////////////////////////////////////////////////////////////////////" << endl;

	BigBox bigBox1;

	//继承了父类的属性
	bigBox1.length = 3;
	bigBox1.width = 2;
	bigBox1.height = 1;
	
	system("pause");

	return 0;
}
```

<a id="markdown-环形队列的实现" name="环形队列的实现"></a>
## 环形队列的实现
MyQueue.cpp
```cpp
#include <iostream>
#include "MyQueue.h"
using namespace std;

MyQueue::MyQueue(int queueCapacity)
{
	m_iQueueCapacity = queueCapacity;
	ClearQueue();

	m_pQueue = new int[queueCapacity];
}

MyQueue::~MyQueue()
{
	delete[]m_pQueue;
	m_pQueue = NULL;
}

void MyQueue::ClearQueue()
{
	m_iHead = 0;
	m_iTail = 0;
	m_iQueueLen = 0;
}

bool MyQueue::QueueEmpty() const
{
	return m_iQueueLen == 0;
}

bool MyQueue::QueueFull() const
{
	return m_iQueueLen == m_iQueueCapacity;
}

int MyQueue::QueueLength() const
{
	return m_iQueueLen;
}

bool MyQueue::EnQueue(int element)
{
	if (QueueFull())
	{
		return false;
	}
	m_pQueue[m_iTail] = element;
	m_iTail++;
	m_iTail = m_iTail % m_iQueueCapacity;

	m_iQueueLen++;
	return true;
}

bool MyQueue::DeQueue(int &element)
{
	if (QueueEmpty())
	{
		return false;
	}
	element = m_pQueue[m_iHead];
	m_iHead++;
	m_iHead = m_iHead % m_iQueueCapacity;
	m_iQueueLen--;
	return true;
}

void MyQueue::QueueTraverse()
{
	cout << "=================start=======================" << endl;
	for (int i = m_iHead; i < m_iHead + m_iQueueLen; i++)
	{
		cout << m_pQueue[i % m_iQueueCapacity] << endl;
	}
	cout << "=================end========================" << endl;
}

```
MyQueue.h
```cpp
#pragma once
class MyQueue
{
public:
	/*MyQueue();
	~MyQueue();*/
	MyQueue(int queueCapacity); // 构造函数，创建队列
	virtual ~MyQueue();//析构函数，销毁队列
	void ClearQueue();//清空队列
	int QueueLength() const;//
	bool QueueEmpty() const;//判空队列
	bool QueueFull() const;//判断是否满了
	bool EnQueue(int element);//
	bool DeQueue(int &element);//
	void QueueTraverse();//遍历队列
private:
	int *m_pQueue;//队列数组指针
	int m_iQueueLen;//队列元素个数
	int m_iQueueCapacity;//队列数组容量
	int m_iHead;//队头
	int m_iTail;//队尾

};

```
Program.cpp
```cpp
#include <iostream>
#include "MyQueue.h"
using namespace std;

void main() {
	MyQueue *p = new MyQueue(4);
	p->EnQueue(0);
	p->EnQueue(1);
	p->EnQueue(2);
	p->EnQueue(3);

	int ele;
	p->DeQueue(ele);
	p->DeQueue(ele);
	p->DeQueue(ele);

	p->EnQueue(4);
	p->EnQueue(5);

	p->QueueTraverse();

	system("pause");

}
```

<a id="markdown-构造函数" name="构造函数"></a>
## 构造函数
<a id="markdown-构造函数的重载" name="构造函数的重载"></a>
### 构造函数的重载
<a id="markdown-初始化列表" name="初始化列表"></a>
### 初始化列表
<a id="markdown-拷贝构造函数" name="拷贝构造函数"></a>
### 拷贝构造函数

<a id="markdown-析构函数" name="析构函数"></a>
## 析构函数
```cpp
class Student
{
public:
	Student();//默认构造函数
	Student(string name);//重载，带参数构造函数
	Student(const Student &stu);//拷贝的构造函数
	Student(string name, int age);//自动绑定列表

	~Student();//析构函数，释放资源

	void SetName(string name);
	void GetName();
private:
	string m_Name;
	int m_Age;
};

//默认构造函数
Student::Student()
{
	cout << "默认构造函数" << endl;
};

//构造函数重载，有参数的构造函数
Student::Student(string name)
{
	m_Name = name;
	cout << "带参数的构造函数" << endl;
}

Student::Student(string name, int age) :m_Name(name), m_Age(age)
{
	cout << "自动绑定列表发生在构造函数之前！" << endl;
}

//析构函数
Student::~Student()
{
	cout << "析构函数，对象销毁时自动调用，释放资源" << endl;
}

//拷贝构造函数
Student::Student(const Student & stu)
{
	cout << "拷贝对象" << endl;
}

void Student::SetName(string name)
{
	m_Name = name;
}

void Student::GetName()
{
	cout << m_Name << endl;
}

//栈上实例化对象，会自动调用析构函数自动释放
void GetStudentStack();

//堆上实例化对象，并不会自动调用析构函数释放资源
void GetStudentHeap();

void main() {
	Student stu("Jack");
	stu.GetName();

	Student *pStu = new Student("Lucy");
	pStu->GetName();

	Student stu1 = stu;
	cout << "//////////////////////////////////////////////////////////////////////////" << endl;

	Student *pStuAge = new Student("秦始皇", 54);
	pStuAge->GetName();
	delete pStuAge;
	pStuAge = NULL;
	cout << "//////////////////////////////////////////////////////////////////////////" << endl;

	cout << "栈上实例化：" << endl;
	GetStudentStack();
	cout << "//////////////////////////////////////////////////////////////////////////" << endl;

	cout << "堆上实例化：" << endl;
	GetStudentHeap();
	cout << "//////////////////////////////////////////////////////////////////////////" << endl;

	system("pause");
}

void GetStudentStack() {
	Student stu;
}

void GetStudentHeap() {
	Student *pStu = new Student();

	//需要手动释放
	delete pStu;
	pStu = NULL;
}
```

<a id="markdown-对象数组" name="对象数组"></a>
## 对象数组
```cpp
class Student {
public:
	Student();
	~Student();
	string Name;
	int Age;
};

Student::Student()
{
}

Student::~Student()
{
	cout << "释放。。。" << endl;
}

void main() {
	const int LEN = 3;

	//栈上 数组
	Student stus[LEN];
	stus[0].Name = "赵大力";
	stus[0].Age = 1;

	//堆上 数组
	Student *pStus = new Student[LEN];

	/*第一个元素*/
	pStus->Name = "赵二狗";
	pStus[0].Age = 1;

	/*第二个元素*/
	pStus++;
	pStus->Name = "钱多多";
	pStus[0].Age = 2;

	for (int i = 0; i < LEN; i++)
	{
		cout << "第" << i << "个元素：" << stus[i].Name << endl;
	}

	//指针方式遍历就比较麻烦了，先让指针指向第一个元素，通过下标访问，不再改变指针
	pStus--;
	for (int i = 0; i < LEN; i++)
	{
		cout << "指针：第" << i << "个元素：" << pStus[i].Name << endl;
	}

	//会调用三次析构，申请的内存都会释放
	delete[]pStus;
	pStus = NULL;

	system("pause");
}
```

<a id="markdown-拷贝" name="拷贝"></a>
## 拷贝
<a id="markdown-浅拷贝" name="浅拷贝"></a>
### 浅拷贝
<a id="markdown-深拷贝" name="深拷贝"></a>
### 深拷贝
```cpp
//////////////////////////////////////////////////////////////////////////
class Array
{
public:
	Array(int cnt);

	void printAddr();
	int *m_pArr;
};

Array::Array(int cnt) {
	m_pArr = new int[cnt];
}

void Array::printAddr() {
	cout << m_pArr << endl;
}
//////////////////////////////////////////////////////////////////////////
class ArrayDeep
{
public:
	ArrayDeep(int cnt);
	ArrayDeep(const ArrayDeep &arr);
	~ArrayDeep();

	void setCount(int cnt);
	int getCount();

	void printAddr();
private:
	int m_iCount;
	int *m_pArr;
};

//默认构造
ArrayDeep::ArrayDeep(int cnt)
{
	m_iCount = cnt;
	m_pArr = new int[m_iCount];
}

//拷贝构造
ArrayDeep::ArrayDeep(const ArrayDeep & arr)
{
	m_iCount = arr.m_iCount;
	m_pArr = new int[m_iCount];
	for (int i = 0; i < m_iCount; i++)
	{
		m_pArr[i] = arr.m_pArr[i];
	}
}

ArrayDeep::~ArrayDeep()
{
}

void ArrayDeep::setCount(int cnt)
{
	m_iCount = cnt;
}

int ArrayDeep::getCount()
{
	return m_iCount;
}

void ArrayDeep::printAddr()
{
	cout << "m_pArr的地址：" << m_pArr << endl;
}
//////////////////////////////////////////////////////////////////////////
void main() {
	Array pArr1(3);
	/*浅拷贝，指针地址指向同一块内存地址*/
	Array pArr2 = pArr1;

	cout << "====================浅拷贝====================" << endl;
	pArr1.printAddr();
	pArr2.printAddr();

	ArrayDeep pArrDeep1(3);
	/*深拷贝*/
	ArrayDeep pArrDeep2(pArrDeep1);

	cout << "====================深拷贝====================" << endl;
	pArrDeep1.printAddr();
	pArrDeep2.printAddr();

	system("pause");
}
```

<a id="markdown-类与类的关系" name="类与类的关系"></a>
## 类与类的关系

<a id="markdown-依赖" name="依赖"></a>
### 依赖

<a id="markdown-聚合" name="聚合"></a>
### 聚合

<a id="markdown-继承" name="继承"></a>
### 继承

面向对象程序设计中最重要的一个概念是继承。继承允许我们依据另一个类来定义一个类，这使得创建和维护一个应用程序变得更容易。

这样做，也达到了重用代码功能和提高执行时间的效果。

我们以学院教学管理系统为例说明，系统中存在以下人员类型：学生、教师、行政人员等，其中学生和教师的类图如下所示：

![](..\assets\BASE\继承1.jpg)

上图中存在很多属性方法重复，如id、name等都是共同的属性，如再增加人员类型的话也需要增加这些共同属性和方法，重复劳动。

同时，如果共同方法发生变化，是否需要每个类重复的进行修改呢？

我们可以通过继承避免以上问题的出现，增加Person基类，对应如下：

![](..\assets\BASE\继承2.jpg)

<a id="markdown-继承关系" name="继承关系"></a>
#### 继承关系
- 公有继承

公有继承的特点是基类的公有成员和保护成员作为派生类的成员时，它们都保持原有的状态，而基类的私有成员仍然是私有的，不能被这个派生类的子类所访问。

- 私有继承

私有继承的特点是基类的公有成员和保护成员都作为派生类的私有成员，并且不能被这个派生类的子类所访问。

- 保护继承

保护继承的特点是基类的所有公有成员和保护成员都成为派生类的保护成员，并且只能被它的派生类成员函数或友元访问，基类的私有成员仍然是私有的。

以下列举了不同继承方式基类和派生类特性：

基类中各权限--> | public | protected | private
---|--------|-----------|--------
公有继承派生权限变化 |  public | protected | 不可见
私有继承(默认)派生权限变化 | private | private | 不可见
保护继承派生权限变化 | protected | protected | 不可见


<a id="markdown-实现语法" name="实现语法"></a>
#### 实现语法



<a id="markdown-继承中的访问权限" name="继承中的访问权限"></a>
#### 继承中的访问权限

<a id="markdown-继承中构造和析构" name="继承中构造和析构"></a>
#### 继承中构造和析构

https://blog.csdn.net/ecitnet/article/details/2060431

http://www.cnblogs.com/qlwy/archive/2011/08/25/2153584.html

