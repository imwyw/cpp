# CLR窗体开发
## C++类型与CLR类型
这种开发模式比较法克的地方在于，c++类型与clr托管类型之间的转换
```cpp
using namespace System;
using namespace System::Collections;
using namespace System::Data;

// CLR类型与C++类型相互转换帮助类
ref class CLRTypeHelper
{
public:
	/*
	将CLR的String^ 转换成C++的char*
	\param cmstr 待转换的String^数据
	\return 转换后的char*数据
	*/
	static char* ToCPlusChar(String^ cmstr)
	{
		return ((char*)(void*)System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(cmstr));
	}

	/*
	将C++的char*转换成CLR的String^
	\param cmstr 待转换的char*数据
	\return 转换后的String^数据
	*/
	static String^ ToMgrString(char* cs)
	{
		//return (System::Runtime::InteropServices::Marshal::PtrToStringAnsi((IntPtr)cx));
		return System::String(cs).ToString();
	}

	/*
	将CLR的String^ 转换成C++的string
	\param cmstr 待转换的String^数据
	\return 转换后的string数据
	*/
	static string ToCPlusString(String^ cmstr)
	{
		string cstr = (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(cmstr)).ToPointer();
		return cstr;
	}

	/*
	将CLR的String^ 转换成C++的string
	\param cmstr 待转换的String^数据
	\return 转换后的string数据
	*/
	static String^ ToMgrString(const string& cstr)
	{
		const char* cc = cstr.data();
		System::String^ cmstr = gcnew System::String(cc);
		return cmstr;
	}

	/*
	将CLR的Int32^转换成C++的int
	\param cmstr 待转换的Int32^数据
	\return 转换后的int数据
	*/
	static int ToCPlusInt(Int32 i)
	{
		int data = i;
		return data;
	}

	/*
	将C++的int转换成CLR的Int32^
	\param cmstr 待转换的int数据
	\return 转换后的Int32^数据
	*/
	static Int32 ToMgrInt(int i)
	{
		Int32 k = 5;
		String^ str = k.ToString();
		return  System::Int32(i);
	}
};
```
注意stdafx.h头文件中需要添加引用：
```cpp
#include <string>
using namespace std;
```
