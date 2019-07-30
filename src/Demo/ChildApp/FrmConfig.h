#pragma once
#include "stdafx.h"
#include "DataHelper.h"

namespace ChildApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmConfig 摘要
	/// </summary>
	public ref class FrmConfig : public System::Windows::Forms::Form
	{
	public:
		FrmConfig(void)
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
		~FrmConfig()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::NumericUpDown^  numBlack;
	private: System::Windows::Forms::NumericUpDown^  numRed;
	private: System::Windows::Forms::NumericUpDown^  numGreen;



	private: System::Windows::Forms::CheckBox^  chkRandom;
	private: System::Windows::Forms::PictureBox^  btnOK;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmConfig::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->numBlack = (gcnew System::Windows::Forms::NumericUpDown());
			this->numRed = (gcnew System::Windows::Forms::NumericUpDown());
			this->numGreen = (gcnew System::Windows::Forms::NumericUpDown());
			this->chkRandom = (gcnew System::Windows::Forms::CheckBox());
			this->btnOK = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBlack))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRed))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numGreen))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnOK))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(247, 117);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(80, 80);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox2->Location = System::Drawing::Point(407, 117);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(80, 80);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox3->Location = System::Drawing::Point(567, 117);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(80, 80);
			this->pictureBox3->TabIndex = 2;
			this->pictureBox3->TabStop = false;
			// 
			// numBlack
			// 
			this->numBlack->Location = System::Drawing::Point(247, 222);
			this->numBlack->Name = L"numBlack";
			this->numBlack->Size = System::Drawing::Size(80, 25);
			this->numBlack->TabIndex = 3;
			// 
			// numRed
			// 
			this->numRed->Location = System::Drawing::Point(407, 222);
			this->numRed->Name = L"numRed";
			this->numRed->Size = System::Drawing::Size(80, 25);
			this->numRed->TabIndex = 4;
			// 
			// numGreen
			// 
			this->numGreen->Location = System::Drawing::Point(567, 222);
			this->numGreen->Name = L"numGreen";
			this->numGreen->Size = System::Drawing::Size(80, 25);
			this->numGreen->TabIndex = 5;
			// 
			// chkRandom
			// 
			this->chkRandom->AutoSize = true;
			this->chkRandom->Location = System::Drawing::Point(268, 334);
			this->chkRandom->Name = L"chkRandom";
			this->chkRandom->Size = System::Drawing::Size(59, 19);
			this->chkRandom->TabIndex = 6;
			this->chkRandom->Text = L"随机";
			this->chkRandom->UseVisualStyleBackColor = true;
			this->chkRandom->CheckedChanged += gcnew System::EventHandler(this, &FrmConfig::chkRandom_CheckedChanged);
			// 
			// btnOK
			// 
			this->btnOK->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnOK.BackgroundImage")));
			this->btnOK->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnOK->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnOK->Location = System::Drawing::Point(386, 310);
			this->btnOK->Name = L"btnOK";
			this->btnOK->Size = System::Drawing::Size(148, 65);
			this->btnOK->TabIndex = 7;
			this->btnOK->TabStop = false;
			this->btnOK->Click += gcnew System::EventHandler(this, &FrmConfig::btnOK_Click);
			// 
			// FrmConfig
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(905, 509);
			this->Controls->Add(this->btnOK);
			this->Controls->Add(this->chkRandom);
			this->Controls->Add(this->numGreen);
			this->Controls->Add(this->numRed);
			this->Controls->Add(this->numBlack);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"FrmConfig";
			this->Text = L"设置";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numBlack))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numRed))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numGreen))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->btnOK))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		// 勾选切换时
	private: System::Void chkRandom_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		// 随机生成时，禁用手动输入
		if (chkRandom->Checked)
		{
			numBlack->Enabled = false;
			numRed->Enabled = false;
			numGreen->Enabled = false;
		}
		else
		{
			numBlack->Enabled = true;
			numRed->Enabled = true;
			numGreen->Enabled = true;
		}
	}

	private: System::Void btnOK_Click(System::Object^  sender, System::EventArgs^  e) {
		if (chkRandom->Checked)
		{
			DataHelper::isRandom = true;
		}
		else
		{
			DataHelper::isRandom = false;
			DataHelper::black = (int)numBlack->Value;
			DataHelper::red = (int)numRed->Value;
			DataHelper::green = (int)numGreen->Value;
		}
		this->Close();
	}
	};
}
