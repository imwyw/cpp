#include "stdafx.h"
#include "GameForm.h"

using namespace PokeGame;

//���߳����ԣ���Щ���Ҫ���߳�
[STAThreadAttribute]
int main(cli::array<System::String^>^ args) {
	// �ڴ����κοؼ�֮ǰ���� Windows XP ���ӻ�Ч��
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	//���������ڲ�������
	Application::Run(gcnew GameForm());
	Application::Exit();
	return 0;
}