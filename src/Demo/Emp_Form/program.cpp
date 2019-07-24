#include "stdafx.h"
#include "MainForm.h"

//使用MainForm.h 代码中的命名空间
using namespace Emp_Form;

//单线程特性，有些组件要求单线程
[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
	// 在创建任何控件之前启用 Windows XP 可视化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//创建主窗口并运行它
	Application::Run(gcnew MainForm());
	return 0;
}