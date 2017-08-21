# API
## iostream
### cout
`<<` 插入器，向流输出数据
```cpp
#include <iostream>
using namespace std;

out<<表达式1<<表达式2<<……<<表达式n;
```
### cin
`>>` 析取器，从流中输入数据
```cpp
#include <iostream>
using namespace std;

cin>>变量1>>变量2>>……>>变量n;
```

## fstream
### ofstream/ifstream
ofstream:内存到硬盘

ifstream:硬盘到内存

fstream open方法：
`void open( const char *filename,ios_base::openmode mode = ios_base::in|ios_base::out );`

ios_base打开模式：

模式标志 | 描述
-----|---
ios::app | 追加模式。所有写入都追加到文件末尾。
ios::ate | 文件打开后定位到文件末尾。
ios::in | 打开文件用于读取。
ios::out | 打开文件用于写入。
ios::trunc | 如果该文件已经存在，其内容将在打开文件之前被截断，即把文件长度设为 0。

```cpp
#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	ofstream fileout;//内存到硬盘
	fileout.open("hello.txt",ios::app);
	fileout << "hello world" << endl;
	fileout << "桃花潭水深千尺" << endl;
	fileout << "不及汪伦送我情" << endl;
	fileout << "李白" << endl;
	fileout.close();

	ifstream filein;//硬盘到内存
	filein.open("hello.txt",ios::in);
	string str;
	
	cout << "====================================================" << endl;
	//getline 每次读取一行，内容保存到变量str中
	while(getline(filein,str)){
		cout << str << endl;
	}

	filein.close();

	return 0;
}
```
```cpp
//二进制读写
void EmpMenu::saveData()
{
	//创建输出流
	ofstream ofs;
	//二进制方式打开
	ofs.open("dataEmp.bin",ios::binary);
	for (int i=0;i<30;i++)
	{
		if (empArr[i]==nullptr)
		{
			break;
		}
		ofs.write((char *)empArr[i],sizeof(Employee));
	}
	ofs.close();
	cout<<"文件保存成功!"<<endl;
}

void EmpMenu::loadData()
{
	//创建输入流
	ifstream ifs;
	//二进制读取
	ifs.open("dataEmp.bin",ios::binary);
	Employee *emp = new Employee();
	int i = 0;
	while (ifs.read((char *)emp,sizeof(Employee)))
	{
		empArr[i++] = emp;
		emp = new Employee();
	}
	ifs.close();
	cout<<"读取数据成功!"<<endl;
}
```