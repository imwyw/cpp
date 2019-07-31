#pragma once

namespace WinFormDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmZombie 摘要
	/// </summary>
	public ref class FrmZombie : public System::Windows::Forms::Form
	{
	public:
		FrmZombie(void)
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
		~FrmZombie()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::Button^  btnStart;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  pbZom;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmZombie::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->btnStart = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pbZom = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZom))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmZombie::timer1_Tick);
			// 
			// btnStart
			// 
			this->btnStart->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnStart.BackgroundImage")));
			this->btnStart->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->btnStart->Location = System::Drawing::Point(1008, 541);
			this->btnStart->Name = L"btnStart";
			this->btnStart->Size = System::Drawing::Size(102, 49);
			this->btnStart->TabIndex = 2;
			this->btnStart->UseVisualStyleBackColor = true;
			this->btnStart->Click += gcnew System::EventHandler(this, &FrmZombie::btnStart_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(261, 280);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(74, 84);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 4;
			this->pictureBox1->TabStop = false;
			// 
			// pbZom
			// 
			this->pbZom->BackColor = System::Drawing::Color::Transparent;
			this->pbZom->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pbZom.Image")));
			this->pbZom->Location = System::Drawing::Point(995, 265);
			this->pbZom->Name = L"pbZom";
			this->pbZom->Size = System::Drawing::Size(133, 128);
			this->pbZom->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pbZom->TabIndex = 5;
			this->pbZom->TabStop = false;
			// 
			// FrmZombie
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1407, 602);
			this->Controls->Add(this->pbZom);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnStart);
			this->DoubleBuffered = true;
			this->Name = L"FrmZombie";
			this->Text = L"僵尸行走";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbZom))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnStart_Click(System::Object^  sender, System::EventArgs^  e) {
		timer1->Start();
	}


	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		pbZom->Location = System::Drawing::Point(pbZom->Location.X - 5, pbZom->Location.Y);
	}

	};
}
