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
* ios::out输出数据覆盖现有文件
* ios::in打开文件以输入
* ios::app输出数据添加之现有文件末尾
* ios::ate打开文件并移动文件指针至开始

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

### fstream
打开文件供读写
