#pragma once
#include "FrmConfig.h"
#include "Game.h"

namespace ChildApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmMain 摘要
	/// </summary>
	public ref class FrmMain : public System::Windows::Forms::Form
	{
	public:
		Game *game;
		int totalPickUpBall; // 小孩捡到的球的数量
		PictureBox^ pbPickupBall; // 用户选择的球
		int x, y; // 鼠标点击时的x，y轴坐标

	private: System::Windows::Forms::ImageList^  ilBalls;
	public:
		bool isMoved; // 是否被移动

		FrmMain(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
			totalPickUpBall = 0;
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~FrmMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  游戏ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiConfig;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiStart;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiJudge;



	private: System::Windows::Forms::ToolStripSeparator^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiExit;
	private: System::Windows::Forms::ToolStripMenuItem^  tsmiHelp;


	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^  toolStripStatusLabel1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  lblTargetGreen;

	private: System::Windows::Forms::Label^  lblTargetRed;

	private: System::Windows::Forms::Label^  lblTargetBlack;
	private: System::Windows::Forms::Panel^  plBlack;
	private: System::Windows::Forms::Panel^  plRed;
	private: System::Windows::Forms::Panel^  plGreen;




	private: System::Windows::Forms::Label^  lblBlack;
	private: System::Windows::Forms::Label^  lblRed;
	private: System::Windows::Forms::Label^  lblGreen;
	private: System::ComponentModel::IContainer^  components;


	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmMain::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->游戏ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiConfig = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiStart = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiJudge = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->tsmiExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tsmiHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->toolStripStatusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->lblTargetGreen = (gcnew System::Windows::Forms::Label());
			this->lblTargetRed = (gcnew System::Windows::Forms::Label());
			this->lblTargetBlack = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->plBlack = (gcnew System::Windows::Forms::Panel());
			this->plRed = (gcnew System::Windows::Forms::Panel());
			this->plGreen = (gcnew System::Windows::Forms::Panel());
			this->lblBlack = (gcnew System::Windows::Forms::Label());
			this->lblRed = (gcnew System::Windows::Forms::Label());
			this->lblGreen = (gcnew System::Windows::Forms::Label());
			this->ilBalls = (gcnew System::Windows::Forms::ImageList(this->components));
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->游戏ToolStripMenuItem,
					this->tsmiHelp
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1470, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// 游戏ToolStripMenuItem
			// 
			this->游戏ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->tsmiConfig,
					this->tsmiStart, this->tsmiJudge, this->toolStripMenuItem1, this->tsmiExit
			});
			this->游戏ToolStripMenuItem->Name = L"游戏ToolStripMenuItem";
			this->游戏ToolStripMenuItem->Size = System::Drawing::Size(51, 24);
			this->游戏ToolStripMenuItem->Text = L"游戏";
			// 
			// tsmiConfig
			// 
			this->tsmiConfig->Name = L"tsmiConfig";
			this->tsmiConfig->Size = System::Drawing::Size(114, 26);
			this->tsmiConfig->Text = L"设置";
			this->tsmiConfig->Click += gcnew System::EventHandler(this, &FrmMain::tsmiConfig_Click);
			// 
			// tsmiStart
			// 
			this->tsmiStart->Name = L"tsmiStart";
			this->tsmiStart->Size = System::Drawing::Size(114, 26);
			this->tsmiStart->Text = L"开始";
			this->tsmiStart->Click += gcnew System::EventHandler(this, &FrmMain::tsmiStart_Click);
			// 
			// tsmiJudge
			// 
			this->tsmiJudge->Name = L"tsmiJudge";
			this->tsmiJudge->Size = System::Drawing::Size(114, 26);
			this->tsmiJudge->Text = L"裁定";
			this->tsmiJudge->Click += gcnew System::EventHandler(this, &FrmMain::tsmiJudge_Click);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(111, 6);
			// 
			// tsmiExit
			// 
			this->tsmiExit->Name = L"tsmiExit";
			this->tsmiExit->Size = System::Drawing::Size(114, 26);
			this->tsmiExit->Text = L"退出";
			this->tsmiExit->Click += gcnew System::EventHandler(this, &FrmMain::tsmiExit_Click);
			// 
			// tsmiHelp
			// 
			this->tsmiHelp->Name = L"tsmiHelp";
			this->tsmiHelp->Size = System::Drawing::Size(51, 24);
			this->tsmiHelp->Text = L"帮助";
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->toolStripStatusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 856);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(1470, 25);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// toolStripStatusLabel1
			// 
			this->toolStripStatusLabel1->Name = L"toolStripStatusLabel1";
			this->toolStripStatusLabel1->Size = System::Drawing::Size(161, 20);
			this->toolStripStatusLabel1->Text = L"安徽信息工程学院 AIIT";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::Color::Transparent;
			this->groupBox1->Controls->Add(this->lblTargetGreen);
			this->groupBox1->Controls->Add(this->lblTargetRed);
			this->groupBox1->Controls->Add(this->lblTargetBlack);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(1330, 79);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(128, 119);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"目标";
			// 
			// lblTargetGreen
			// 
			this->lblTargetGreen->AutoSize = true;
			this->lblTargetGreen->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lblTargetGreen->Location = System::Drawing::Point(73, 83);
			this->lblTargetGreen->Name = L"lblTargetGreen";
			this->lblTargetGreen->Size = System::Drawing::Size(20, 20);
			this->lblTargetGreen->TabIndex = 5;
			this->lblTargetGreen->Text = L"0";
			// 
			// lblTargetRed
			// 
			this->lblTargetRed->AutoSize = true;
			this->lblTargetRed->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lblTargetRed->Location = System::Drawing::Point(73, 52);
			this->lblTargetRed->Name = L"lblTargetRed";
			this->lblTargetRed->Size = System::Drawing::Size(20, 20);
			this->lblTargetRed->TabIndex = 4;
			this->lblTargetRed->Text = L"0";
			// 
			// lblTargetBlack
			// 
			this->lblTargetBlack->AutoSize = true;
			this->lblTargetBlack->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lblTargetBlack->Location = System::Drawing::Point(73, 21);
			this->lblTargetBlack->Name = L"lblTargetBlack";
			this->lblTargetBlack->Size = System::Drawing::Size(20, 20);
			this->lblTargetBlack->TabIndex = 3;
			this->lblTargetBlack->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label3->Location = System::Drawing::Point(6, 83);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(72, 20);
			this->label3->TabIndex = 2;
			this->label3->Text = L"绿色：";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label2->Location = System::Drawing::Point(6, 52);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"红色：";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->label1->Location = System::Drawing::Point(6, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"黑色：";
			// 
			// plBlack
			// 
			this->plBlack->BackColor = System::Drawing::Color::Black;
			this->plBlack->Location = System::Drawing::Point(1330, 218);
			this->plBlack->Name = L"plBlack";
			this->plBlack->Size = System::Drawing::Size(100, 100);
			this->plBlack->TabIndex = 3;
			// 
			// plRed
			// 
			this->plRed->BackColor = System::Drawing::Color::Red;
			this->plRed->Location = System::Drawing::Point(1330, 369);
			this->plRed->Name = L"plRed";
			this->plRed->Size = System::Drawing::Size(100, 100);
			this->plRed->TabIndex = 4;
			// 
			// plGreen
			// 
			this->plGreen->BackColor = System::Drawing::Color::Lime;
			this->plGreen->Location = System::Drawing::Point(1330, 521);
			this->plGreen->Name = L"plGreen";
			this->plGreen->Size = System::Drawing::Size(100, 100);
			this->plGreen->TabIndex = 5;
			// 
			// lblBlack
			// 
			this->lblBlack->AutoSize = true;
			this->lblBlack->BackColor = System::Drawing::Color::Transparent;
			this->lblBlack->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lblBlack->Location = System::Drawing::Point(1369, 321);
			this->lblBlack->Name = L"lblBlack";
			this->lblBlack->Size = System::Drawing::Size(20, 20);
			this->lblBlack->TabIndex = 6;
			this->lblBlack->Text = L"0";
			// 
			// lblRed
			// 
			this->lblRed->AutoSize = true;
			this->lblRed->BackColor = System::Drawing::Color::Transparent;
			this->lblRed->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lblRed->Location = System::Drawing::Point(1369, 472);
			this->lblRed->Name = L"lblRed";
			this->lblRed->Size = System::Drawing::Size(20, 20);
			this->lblRed->TabIndex = 7;
			this->lblRed->Text = L"0";
			// 
			// lblGreen
			// 
			this->lblGreen->AutoSize = true;
			this->lblGreen->BackColor = System::Drawing::Color::Transparent;
			this->lblGreen->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->lblGreen->Location = System::Drawing::Point(1369, 624);
			this->lblGreen->Name = L"lblGreen";
			this->lblGreen->Size = System::Drawing::Size(20, 20);
			this->lblGreen->TabIndex = 8;
			this->lblGreen->Text = L"0";
			// 
			// ilBalls
			// 
			this->ilBalls->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"ilBalls.ImageStream")));
			this->ilBalls->TransparentColor = System::Drawing::Color::Transparent;
			this->ilBalls->Images->SetKeyName(0, L"black1.png");
			this->ilBalls->Images->SetKeyName(1, L"red.png");
			this->ilBalls->Images->SetKeyName(2, L"green.png");
			// 
			// FrmMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(1470, 881);
			this->Controls->Add(this->lblGreen);
			this->Controls->Add(this->lblRed);
			this->Controls->Add(this->lblBlack);
			this->Controls->Add(this->plGreen);
			this->Controls->Add(this->plRed);
			this->Controls->Add(this->plBlack);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"FrmMain";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"儿童认知游戏";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void tsmiConfig_Click(System::Object^  sender, System::EventArgs^  e) {
		FrmConfig^ frm = gcnew FrmConfig();
		frm->ShowDialog();
	}

	private: System::Void tsmiStart_Click(System::Object^  sender, System::EventArgs^  e) {
		game = new Game();
		int b, r, g;
		// 随机指定目标
		if (DataHelper::isRandom) {
			long seed = (long)time(NULL);
			srand((int)seed);

			// 此处有变动，每个颜色最多4个
			r = rand() % 5;
			g = rand() % 5;
			b = rand() % 5;

			// 如果随机得到0的话，则修改为1
			r = r == 0 ? 1 : r;
			g = g == 0 ? 1 : g;
			b = b == 0 ? 1 : b;
		}
		else {
			r = DataHelper::red;
			g = DataHelper::green;
			b = DataHelper::black;
		}
		game->StartGame(b, r, g);

		clearBalls();
		showTarget();
		createBalls();
	}

	private: System::Void tsmiJudge_Click(System::Object^  sender, System::EventArgs^  e) {
		// judger 在头文件中已声明栈对象，不需要实例化
		int result = game->judger.AnalysisTask(game->task, game->child->balls, totalPickUpBall);
		if (result == -1)
		{
			MessageBox::Show("小朋友，你还没捡完呢。");
		}
		else if (result == 0)
		{
			MessageBox::Show("小朋友，对不起，任务失败，再接再厉哦！");
		}
		else {
			int total = 0; // 与篮子颜色匹配的球的数量
			for (int i = 0; i < plBlack->Controls->Count; i++)
			{
				PictureBox^ ball = (PictureBox^)plBlack->Controls[i];
				if (game->allBalls[Int32::Parse(ball->Tag->ToString())].color == "black")
				{
					total++;
				}
			}
			for (int i = 0; i < plRed->Controls->Count; i++)
			{
				PictureBox^ ball = (PictureBox^)plRed->Controls[i];
				if (game->allBalls[Int32::Parse(ball->Tag->ToString())].color == "red")
				{
					total++;
				}
			}
			for (int i = 0; i < plGreen->Controls->Count; i++)
			{
				PictureBox^ ball = (PictureBox^)plGreen->Controls[i];
				if (game->allBalls[Int32::Parse(ball->Tag->ToString())].color == "green")
				{
					total++;
				}
			}
			if (total == game->task.blackNumber + game->task.redNumber + game->task.greenNumber)
			{
				MessageBox::Show("小朋友，你真厉害！！");
			}
			else {
				MessageBox::Show("小朋友，不错哦，但是球的位置放错了，加油！！");
			}
		}
	}

	private: System::Void tsmiExit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

			 // 鼠标按下
	private: System::Void pbBall_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		pbPickupBall = (PictureBox^)sender;
		pbPickupBall->BringToFront();
		x = e->Location.X;
		y = e->Location.Y;
		isMoved = true;
	}

			 // 鼠标移动
	private: System::Void pbBall_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (isMoved)
		{
			pbPickupBall->BringToFront();
			int offsetX = e->Location.X - x; // x轴的偏移量
			int offsetY = e->Location.Y - y; // y轴的偏移量
			pbPickupBall->Top += offsetY; // 改变x轴的位置
			pbPickupBall->Left += offsetX; // 改变y轴的位置
		}
	}

			 // 鼠标松开
	private: System::Void pbBall_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		pbPickupBall->BringToFront();
		// 拖拽到的篮子
		Panel^ panel = nullptr;

		if (isMoved &&pbPickupBall->Left >= plBlack->Left
			&& pbPickupBall->Left <= plBlack->Left + plBlack->Width
			&& pbPickupBall->Top >= plBlack->Top
			&& pbPickupBall->Top <= plBlack->Top + plBlack->Height)
		{
			panel = plBlack;
			lblBlack->Text = (Int32::Parse(lblBlack->Text) + 1) + "";
		}
		else if (isMoved &&pbPickupBall->Left >= plRed->Left
			&& pbPickupBall->Left <= plRed->Left + plRed->Width
			&& pbPickupBall->Top >= plRed->Top
			&& pbPickupBall->Top <= plRed->Top + plRed->Height)
		{
			panel = plRed;
			lblRed->Text = (Int32::Parse(lblRed->Text) + 1) + "";
		}
		else if (isMoved && pbPickupBall->Left >= plGreen->Left
			&& pbPickupBall->Left <= plGreen->Left + plGreen->Width
			&& pbPickupBall->Top >= plGreen->Top
			&& pbPickupBall->Top <= plGreen->Top + plGreen->Height)
		{
			panel = plGreen;
			lblGreen->Text = (Int32::Parse(lblGreen->Text) + 1) + "";
		}

		if (panel != nullptr)
		{
			// 拖拽至【目标Panel】中的位置
			pbPickupBall->Location = Point(12.5, 12.5);
			panel->Controls->Add(pbPickupBall); // 将球添加到Panel篮子中
			pbPickupBall->BringToFront(); // 将球放到最前面
			this->Controls->Remove(pbPickupBall); // 将球从主界面移除

			// 移除主界面绑定的三个鼠标事件
			pbPickupBall->MouseDown -= gcnew System::Windows::Forms::MouseEventHandler(this, &FrmMain::pbBall_MouseDown);
			pbPickupBall->MouseMove -= gcnew System::Windows::Forms::MouseEventHandler(this, &FrmMain::pbBall_MouseMove);
			pbPickupBall->MouseUp -= gcnew System::Windows::Forms::MouseEventHandler(this, &FrmMain::pbBall_MouseUp);

			// 捡起当前球的索引
			int ballIndex = Int32::Parse(pbPickupBall->Tag->ToString());

			// 当前已经捡起了几个球，有可能大于目标数目
			totalPickUpBall = Int32::Parse(lblBlack->Text) + Int32::Parse(lblRed->Text) + Int32::Parse(lblGreen->Text);

			(game->child)->PickUp(game->allBalls[ballIndex], totalPickUpBall - 1);
		}

		isMoved = false;
		pbPickupBall = nullptr;
	}

			 /*=============================界面操作==================================*/
			 // 清空界面上的所有球 
			 void clearBalls() {
				 // 清空主面板上的球
				 for (int i = this->Controls->Count - 1; i >= 0; i--)
				 {
					 if (this->Controls[i]->GetType()->Name == "PictureBox")
					 {
						 this->Controls->RemoveAt(i);
					 }
				 }

				 // 清空三个篮子的球
				 plBlack->Controls->Clear();
				 lblBlack->Text = "0";
				 plRed->Controls->Clear();
				 lblRed->Text = "0";
				 plGreen->Controls->Clear();
				 lblGreen->Text = "0";
			 }

			 // 显示任务函数
			 void showTarget() {
				 lblTargetBlack->Text = "" + game->task.blackNumber;
				 lblTargetRed->Text = "" + game->task.redNumber;
				 lblTargetGreen->Text = "" + game->task.greenNumber;
			 }

			 // 在界面上生成球
			 void createBalls() {
				 System::Windows::Forms::PictureBox^  pbBall;
				 int colorIndex; // 球的图片在ImageList中的位置
				 for (int i = 0; i < 50; i++)
				 {
					 pbBall = (gcnew System::Windows::Forms::PictureBox());
					 pbBall->BackColor = System::Drawing::Color::Transparent;
					 string color = game->allBalls[i].color;
					 if (color == "black") {
						 colorIndex = 0;
					 }
					 else if (color == "red") {
						 colorIndex = 1;
					 }
					 else {
						 colorIndex = 2;
					 }
					 pbBall->Tag = i; // 记录在数组中的位置
					 pbBall->Image = ilBalls->Images[colorIndex];
					 pbBall->Location = System::Drawing::Point(game->allBalls[i].x, game->allBalls[i].y);
					 pbBall->Size = System::Drawing::Size(50, 50);
					 pbBall->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;

					 // 针对每个球添加 鼠标事件
					 pbBall->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmMain::pbBall_MouseDown);
					 pbBall->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmMain::pbBall_MouseMove);
					 pbBall->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &FrmMain::pbBall_MouseUp);

					 this->Controls->Add(pbBall);
				 }
			 }

	};
}
