#include "stdafx.h"
#include "FrmMain.h"

using namespace ChildApp;

//���߳����ԣ���Щ���Ҫ���߳�
[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//���������ڲ�������
	Application::Run(gcnew FrmMain());
	Application::Exit();
	return 0;
}