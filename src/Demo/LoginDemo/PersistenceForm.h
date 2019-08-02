#pragma once
#include "CommonHelper.h"

namespace LoginDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// PersistenceForm 摘要
	/// </summary>
	public ref class PersistenceForm : public System::Windows::Forms::Form
	{
	public:
		PersistenceForm(void)
		{
			InitializeComponent();
			//
			//TODO: 在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~PersistenceForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnSave;
	protected:
	private: System::Windows::Forms::Button^  btnLoad;
	private: System::Windows::Forms::TextBox^  textBox1;



	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->btnLoad = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnSave
			// 
			this->btnSave->Location = System::Drawing::Point(12, 12);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(75, 23);
			this->btnSave->TabIndex = 0;
			this->btnSave->Text = L"Save";
			this->btnSave->UseVisualStyleBackColor = true;
			this->btnSave->Click += gcnew System::EventHandler(this, &PersistenceForm::btnSave_Click);
			// 
			// btnLoad
			// 
			this->btnLoad->Location = System::Drawing::Point(93, 12);
			this->btnLoad->Name = L"btnLoad";
			this->btnLoad->Size = System::Drawing::Size(75, 23);
			this->btnLoad->TabIndex = 1;
			this->btnLoad->Text = L"Load";
			this->btnLoad->UseVisualStyleBackColor = true;
			this->btnLoad->Click += gcnew System::EventHandler(this, &PersistenceForm::btnLoad_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 41);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(328, 182);
			this->textBox1->TabIndex = 2;
			// 
			// PersistenceForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(778, 275);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnLoad);
			this->Controls->Add(this->btnSave);
			this->Name = L"PersistenceForm";
			this->Text = L"PersistenceForm";
			this->Load += gcnew System::EventHandler(this, &PersistenceForm::PersistenceForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:

		String^ curDataPath;//当前持久化保存的路径（包含文件名称）

		System::Void btnSave_Click(System::Object^  sender, System::EventArgs^  e) {
			String^ strValue = textBox1->Text;
			string str = CommonHelper::ConvertToString(strValue);

			ofstream filesave;
			filesave.open(CommonHelper::ConvertToString(curDataPath), ios::app);
			filesave << str;
			filesave.close();
		}

		System::Void btnLoad_Click(System::Object^  sender, System::EventArgs^  e) {

			//判断是否存在该文件，存在则加载文件内容
			if (System::IO::File::Exists(curDataPath))
			{
				ifstream fileread;
				fileread.open(CommonHelper::ConvertToString(curDataPath), ios::in);
				string str;
				System::Text::StringBuilder^ txtValue = gcnew System::Text::StringBuilder();

				while (getline(fileread, str))
				{
					//将c++ 字符串 转换成托管字符串，并添加到临时表里txtValue中
					txtValue->Append(CommonHelper::ConvertToCLRString(str));
				}
				fileread.close();

				//将txtValue值赋值给文本框
				textBox1->Text = txtValue->ToString();
			}

		}
		System::Void PersistenceForm_Load(System::Object^  sender, System::EventArgs^  e) {
			//System::Windows::Forms::Application::StartupPath; 当前路径，也就是 .exe文件所在的路径
			//amazing.data 保存的文件
			curDataPath = System::IO::Path::Combine(System::Windows::Forms::Application::StartupPath, "amazing.data");
		}
	};
}
