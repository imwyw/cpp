#pragma once
#include "FrmGraphics.h"
#include "FrmZombie.h"
#include "Main.h"
#include "KeyTestForm.h"

namespace WinFormDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// NavForm 摘要
	/// </summary>
	public ref class NavForm : public System::Windows::Forms::Form
	{
	public:
		NavForm(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~NavForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(192, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"常用控件";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NavForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(460, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(192, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"GDI绘图";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &NavForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(223, 12);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(192, 75);
			this->button3->TabIndex = 2;
			this->button3->Text = L"僵尸行走-卡顿";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &NavForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 117);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(192, 75);
			this->button4->TabIndex = 3;
			this->button4->Text = L"方块移动";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &NavForm::button4_Click);
			// 
			// NavForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1027, 448);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"NavForm";
			this->Text = L"NavForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	private:
		System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			Main^ frm = gcnew Main();
			frm->ShowDialog();
		}
		System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			FrmGraphics^ frm = gcnew FrmGraphics();
			frm->ShowDialog();
		}
		System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			FrmZombie^ frm = gcnew FrmZombie();
			frm->ShowDialog();
		}


		System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			KeyTestForm^ frm = gcnew KeyTestForm();
			frm->ShowDialog();
		}
	};
}
