#include "stdafx.h"
#include "CommonHelper.h"
#include "NavForm.h"

using namespace WinFormDemo;

//单线程特性，有些组件要求单线程
[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
	// 在创建任何控件之前启用 Windows XP 可视化效果
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//创建主窗口并运行它
	Application::Run(gcnew NavForm());
	Application::Exit();
	return 0;
}