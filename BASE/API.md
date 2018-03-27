<!-- TOC -->

- [API](#api)
    - [iostream](#iostream)
        - [cout](#cout)
        - [cin](#cin)
        - [getline](#getline)
    - [iomanip](#iomanip)
        - [setw/setfill/left/right](#setwsetfillleftright)
    - [fstream](#fstream)
        - [ofstream/ifstream](#ofstreamifstream)

<!-- /TOC -->

<a id="markdown-api" name="api"></a>
# API
<a id="markdown-iostream" name="iostream"></a>
## iostream
<a id="markdown-cout" name="cout"></a>
### cout
`<<` 插入器，向流输出数据
```cpp
#include <iostream>
using namespace std;

cout << 表达式1 << 表达式2 << …… << 表达式n;
```
<a id="markdown-cin" name="cin"></a>
### cin
`>>` 析取器，从流中输入数据
```cpp
#include <iostream>
using namespace std;

cin >> 变量1 >> 变量2 >> …… >> 变量n;
```

用于输入一个数字或者是一个字符串(无特殊字符，如空格等)。当cin接收一个字符串会过滤掉不可见字符，遇“空格”、“TAB”、“回车”就结束了。

<a id="markdown-getline" name="getline"></a>
### getline
接收一个字符串，可以接收空格、制表符等并输出。从输入流中读入字符，存到string变量，直到出现以下情况为止：
1. 读入了文件结束标志
2. 读到一个新行
3. 达到字符串的最大长度
如果getline没有读入字符，将返回false，这一点可用于判断文件是否结束。

```cpp
#include <iostream>
#include <string>

using namespace std;

void main() {
	string name;
	getline(cin, name);
}
```

<a id="markdown-iomanip" name="iomanip"></a>
## iomanip
是I/O流控制头文件,就像C里面的格式化输出一样，io代表输入输出，manip是manipulator（操纵器）的缩写。

<a id="markdown-setwsetfillleftright" name="setwsetfillleftright"></a>
### setw/setfill/left/right
setw(n)用法： 通俗地讲就是预设宽度
1. setw后面紧跟的内容有效 
2. setw默认右对齐，就是从右边开始填

```cpp
cout << 'A' << setfill('*') << left << setw(3) << 'B' << endl;//AB**
cout << setfill('*') << left << setw(3) << 'A' << 'B' << endl;//A**B
cout << 'A' << setfill('*') << right << setw(3) << 'B' << endl;//A**B
cout << setfill('*') << right << setw(3) << 'A' << 'B' << endl;//**AB
cout << endl;
cout << 'A' << setfill('*') << setw(3) << 'B' << endl;//A**B
cout << setfill('*') << setw(3) << 'A' << 'B' << endl;//**AB
cout << 'A' << setfill('*') << setw(3) << 'B' << endl;//A**B
cout << setfill('*') << setw(3) << 'A' << 'B' << endl;//**AB
```

<a id="markdown-fstream" name="fstream"></a>
## fstream
<a id="markdown-ofstreamifstream" name="ofstreamifstream"></a>
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