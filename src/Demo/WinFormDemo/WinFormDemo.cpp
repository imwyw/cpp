#include "stdafx.h"
#include "Main.h"
#include "CommonHelper.h"
#include "FrmZombie.h"
#include "FrmGraphics.h"
#include "KeyForm.h"

using namespace WinFormDemo;

//���߳����ԣ���Щ���Ҫ���߳�
[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//���������ڲ�������
	//Application::Run(gcnew Main());
	//Application::Run(gcnew FrmZombie());
	//Application::Run(gcnew FrmGraphics());
	Application::Run(gcnew KeyForm());
	Application::Exit();
	return 0;
}