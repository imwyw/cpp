#pragma once

namespace PokeGame {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// GameForm 摘要
	/// </summary>
	public ref class GameForm : public System::Windows::Forms::Form
	{
	public:
		GameForm(void)
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
		~GameForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  游戏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiStart;

	private: System::Windows::Forms::ImageList^  ilPokes;
	private: System::Windows::Forms::Panel^  plPokeList;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(GameForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->游戏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiStart = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ilPokes = (gcnew System::Windows::Forms::ImageList(this->components));
			this->plPokeList = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->游戏ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1319, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 游戏ToolStripMenuItem
			// 
			this->游戏ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->tsmiStart });
			this->游戏ToolStripMenuItem->Name = L"游戏ToolStripMenuItem";
			this->游戏ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->游戏ToolStripMenuItem->Text = L"游戏";
			// 
			// tsmiStart
			// 
			this->tsmiStart->Name = L"tsmiStart";
			this->tsmiStart->Size = System::Drawing::Size(114, 26);
			this->tsmiStart->Text = L"开始";
			this->tsmiStart->Click += gcnew System::EventHandler(this, &GameForm::tsmiStart_Click);
			// 
			// ilPokes
			// 
			this->ilPokes->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ilPokes.ImageStream")));
			this->ilPokes->TransparentColor = System::Drawing::Color::Transparent;
			this->ilPokes->Images->SetKeyName(0, L"1.jpg");
			this->ilPokes->Images->SetKeyName(1, L"2.jpg");
			this->ilPokes->Images->SetKeyName(2, L"3.jpg");
			this->ilPokes->Images->SetKeyName(3, L"4.jpg");
			this->ilPokes->Images->SetKeyName(4, L"5.jpg");
			this->ilPokes->Images->SetKeyName(5, L"6.jpg");
			this->ilPokes->Images->SetKeyName(6, L"7.jpg");
			this->ilPokes->Images->SetKeyName(7, L"8.jpg");
			this->ilPokes->Images->SetKeyName(8, L"9.jpg");
			this->ilPokes->Images->SetKeyName(9, L"10.jpg");
			this->ilPokes->Images->SetKeyName(10, L"11.jpg");
			this->ilPokes->Images->SetKeyName(11, L"12.jpg");
			this->ilPokes->Images->SetKeyName(12, L"13.jpg");
			this->ilPokes->Images->SetKeyName(13, L"14.jpg");
			this->ilPokes->Images->SetKeyName(14, L"15.jpg");
			this->ilPokes->Images->SetKeyName(15, L"16.jpg");
			this->ilPokes->Images->SetKeyName(16, L"17.jpg");
			this->ilPokes->Images->SetKeyName(17, L"18.jpg");
			this->ilPokes->Images->SetKeyName(18, L"19.jpg");
			this->ilPokes->Images->SetKeyName(19, L"20.jpg");
			this->ilPokes->Images->SetKeyName(20, L"21.jpg");
			this->ilPokes->Images->SetKeyName(21, L"22.jpg");
			this->ilPokes->Images->SetKeyName(22, L"23.jpg");
			this->ilPokes->Images->SetKeyName(23, L"24.jpg");
			this->ilPokes->Images->SetKeyName(24, L"25.jpg");
			this->ilPokes->Images->SetKeyName(25, L"26.jpg");
			this->ilPokes->Images->SetKeyName(26, L"27.jpg");
			this->ilPokes->Images->SetKeyName(27, L"28.jpg");
			this->ilPokes->Images->SetKeyName(28, L"29.jpg");
			this->ilPokes->Images->SetKeyName(29, L"30.jpg");
			this->ilPokes->Images->SetKeyName(30, L"31.jpg");
			this->ilPokes->Images->SetKeyName(31, L"32.jpg");
			this->ilPokes->Images->SetKeyName(32, L"33.jpg");
			this->ilPokes->Images->SetKeyName(33, L"34.jpg");
			this->ilPokes->Images->SetKeyName(34, L"35.jpg");
			this->ilPokes->Images->SetKeyName(35, L"36.jpg");
			this->ilPokes->Images->SetKeyName(36, L"37.jpg");
			this->ilPokes->Images->SetKeyName(37, L"38.jpg");
			this->ilPokes->Images->SetKeyName(38, L"39.jpg");
			this->ilPokes->Images->SetKeyName(39, L"40.jpg");
			this->ilPokes->Images->SetKeyName(40, L"41.jpg");
			this->ilPokes->Images->SetKeyName(41, L"42.jpg");
			this->ilPokes->Images->SetKeyName(42, L"43.jpg");
			this->ilPokes->Images->SetKeyName(43, L"44.jpg");
			this->ilPokes->Images->SetKeyName(44, L"45.jpg");
			this->ilPokes->Images->SetKeyName(45, L"46.jpg");
			this->ilPokes->Images->SetKeyName(46, L"47.jpg");
			this->ilPokes->Images->SetKeyName(47, L"48.jpg");
			this->ilPokes->Images->SetKeyName(48, L"49.jpg");
			this->ilPokes->Images->SetKeyName(49, L"50.jpg");
			this->ilPokes->Images->SetKeyName(50, L"51.jpg");
			this->ilPokes->Images->SetKeyName(51, L"52.jpg");
			this->ilPokes->Images->SetKeyName(52, L"53.jpg");
			this->ilPokes->Images->SetKeyName(53, L"54.jpg");
			// 
			// plPokeList
			// 
			this->plPokeList->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->plPokeList->Location = System::Drawing::Point(0, 415);
			this->plPokeList->Name = L"plPokeList";
			this->plPokeList->Size = System::Drawing::Size(1319, 242);
			this->plPokeList->TabIndex = 1;
			// 
			// GameForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1319, 657);
			this->Controls->Add(this->plPokeList);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"GameForm";
			this->Text = L"欢乐斗地主";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void tsmiStart_Click(System::Object^  sender, System::EventArgs^  e) {
		// 每次生成前先清空
		for (int i = plPokeList->Controls->Count - 1; i >= 0; i--)
		{
			if (plPokeList->Controls[i]->GetType()->Name == "PictureBox")
			{
				plPokeList->Controls->RemoveAt(i);
			}
		}
		PictureBox^ picBox;
		// 三人斗地主，每人17张牌
		for (int i = 0; i < 17; i++)
		{
			picBox = gcnew PictureBox();
			picBox->Image = ilPokes->Images[i];
			picBox->Location = System::Drawing::Point(100 + 30 * i, 30);
			picBox->Size = System::Drawing::Size(105, 150);
			picBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			picBox->Tag = 0;// 0 默认没有突出显示
			picBox->Click += gcnew System::EventHandler(this, &GameForm::picPokeBox_Click);
			plPokeList->Controls->Add(picBox);
			picBox->BringToFront();
		}
	}


			 // 点击扑克牌事件
	private: System::Void picPokeBox_Click(System::Object^  sender, System::EventArgs^  e) {
		PictureBox^ curPoke = (PictureBox^)sender;

		if (curPoke->Tag->ToString() == "0")
		{
			curPoke->Location = System::Drawing::Point(curPoke->Location.X, curPoke->Location.Y - 30);
			curPoke->Tag = 1;
		}
		else
		{
			curPoke->Location = System::Drawing::Point(curPoke->Location.X, curPoke->Location.Y + 30);
			curPoke->Tag = 0;
		}
	}

	};
}
