<!-- TOC -->

- [HelloWorld](#helloworld)
    - [新建项目和C++文件](#新建项目和c文件)
    - [入口函数](#入口函数)

<!-- /TOC -->

<a id="markdown-helloworld" name="helloworld"></a>
# HelloWorld
环境：WIN10 IDE-VS2015
<a id="markdown-新建项目和c文件" name="新建项目和c文件"></a>
## 新建项目和C++文件
文件-新建项目，选择Visual C++模板，win32控制台程序，如下图所示：

![](../assets/BASE/Hello_New.png)

选择空项目：

![](../assets/BASE/Hello_New_1.png)

新建项：

![](../assets/BASE/Hello_New_2.png)

添加一个C++文件，作为控制台程序入口文件：

![](../assets/BASE/Hello_New_3.png)

<a id="markdown-入口函数" name="入口函数"></a>
## 入口函数
方法main() 是入口函数，添加如下代码：
```cpp
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


