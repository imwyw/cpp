# HelloWorld
环境：WIN10 IDE-VS2015
## 新建项目
文件-新建项目，选择Visual C++模板，win32控制台程序，如下图所示：

![](../assets/BASE/Hello_New.png)

## 入口函数
int main() 是入口函数，添加如下代码：
```cpp
// HelloWorld.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "iostream"
#include "stdlib.h"
using namespace std;

int main()
{
	cout << "Hello World" << endl;

	system("pause");
	return 0;
}
```

F5执行该程序，呈现如下效果：

![](../assets/BASE/Hello_Res.png)