#pragma once
#include "FrmAddEmp.h"
#include "FrmEmpList.h"

namespace Emp_Form {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MainForm ժҪ
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO:  �ڴ˴���ӹ��캯������
			//
		}

	protected:
		/// <summary>
		/// ������������ʹ�õ���Դ��
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  Ա������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiAddEmp;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiEmpList;


	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiExit;

	private: System::Windows::Forms::ToolStripMenuItem^  ����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  �鿴����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ��������ToolStripMenuItem;


	private:
		/// <summary>
		/// ����������������
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// �����֧������ķ��� - ��Ҫ�޸�
		/// ʹ�ô���༭���޸Ĵ˷��������ݡ�
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->Ա������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiAddEmp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiEmpList = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsmiExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�鿴����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->Ա������ToolStripMenuItem,
					this->����ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1117, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// Ա������ToolStripMenuItem
			// 
			this->Ա������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->tsmiAddEmp,
					this->tsmiEmpList, this->toolStripMenuItem1, this->tsmiExit
			});
			this->Ա������ToolStripMenuItem->Name = L"Ա������ToolStripMenuItem";
			this->Ա������ToolStripMenuItem->Size = System::Drawing::Size(81, 24);
			this->Ա������ToolStripMenuItem->Text = L"Ա������";
			// 
			// tsmiAddEmp
			// 
			this->tsmiAddEmp->Name = L"tsmiAddEmp";
			this->tsmiAddEmp->Size = System::Drawing::Size(181, 26);
			this->tsmiAddEmp->Text = L"���Ա��";
			this->tsmiAddEmp->Click += gcnew System::EventHandler(this, &MainForm::tsmiAddEmp_Click);
			// 
			// tsmiEmpList
			// 
			this->tsmiEmpList->Name = L"tsmiEmpList";
			this->tsmiEmpList->Size = System::Drawing::Size(181, 26);
			this->tsmiEmpList->Text = L"Ա���б�";
			this->tsmiEmpList->Click += gcnew System::EventHandler(this, &MainForm::tsmiEmpList_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(178, 6);
			// 
			// tsmiExit
			// 
			this->tsmiExit->Name = L"tsmiExit";
			this->tsmiExit->Size = System::Drawing::Size(181, 26);
			this->tsmiExit->Text = L"�˳�";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->�鿴����ToolStripMenuItem,
					this->��������ToolStripMenuItem
			});
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->����ToolStripMenuItem->Text = L"����";
			// 
			// �鿴����ToolStripMenuItem
			// 
			this->�鿴����ToolStripMenuItem->Name = L"�鿴����ToolStripMenuItem";
			this->�鿴����ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->�鿴����ToolStripMenuItem->Text = L"�鿴����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(144, 26);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1117, 527);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainForm";
			this->Text = L"Ա������ϵͳ-winform��";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void tsmiAddEmp_Click(System::Object^  sender, System::EventArgs^  e) {
		FrmAddEmp^ frm = gcnew FrmAddEmp();
		frm->MdiParent = this;
		frm->Show();
	}

	private: System::Void tsmiEmpList_Click(System::Object^  sender, System::EventArgs^  e) {
		FrmEmpList^ frm = gcnew FrmEmpList();
		frm->MdiParent = this;
		frm->Show();
	}


	};
}
