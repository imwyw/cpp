#pragma once

namespace LoginDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

	/// <summary>
	/// KeyTestForm 摘要
	/// </summary>
	public ref class KeyTestForm : public System::Windows::Forms::Form
	{
	public:
		KeyTestForm(void)
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
		~KeyTestForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pbMove;
	protected:

	protected:

	protected:

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
			this->pbMove = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMove))->BeginInit();
			this->SuspendLayout();
			// 
			// pbMove
			// 
			this->pbMove->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->pbMove->Location = System::Drawing::Point(0, 0);
			this->pbMove->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->pbMove->Name = L"pbMove";
			this->pbMove->Size = System::Drawing::Size(53, 50);
			this->pbMove->TabIndex = 0;
			this->pbMove->TabStop = false;
			// 
			// KeyTestForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(830, 547);
			this->Controls->Add(this->pbMove);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->MaximizeBox = false;
			this->Name = L"KeyTestForm";
			this->Text = L"按下方向键移动小方块";
			this->Load += gcnew System::EventHandler(this, &KeyTestForm::KeyTestForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbMove))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

		/************************************************************************/
		/* add by wangyuanwei 2017-08-17                                                                     */
		/************************************************************************/
	private:
		SynchronizationContext^ m_sync;

		System::Void KeyTestForm_Load(System::Object^  sender, System::EventArgs^  e) {
			InitKeyEvt();
			m_sync = SynchronizationContext::Current;
		}

		//初始化键盘事件
		void InitKeyEvt() {
			this->KeyPreview = true;
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &KeyTestForm::KeyForm_KeyDown);

		}

		//添加按钮后，KeyDown事件不再响应方向键
		System::Void KeyForm_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			switch (e->KeyData) {
			case System::Windows::Forms::Keys::Up:    // 向上键
				MoveBox(0);
				break;
			case System::Windows::Forms::Keys::Down:	// 向下键
				MoveBox(1);
				break;
			case System::Windows::Forms::Keys::Left:	// 向左键
				MoveBox(2);
				break;
			case System::Windows::Forms::Keys::Right:	// 向右键
				MoveBox(3);
				break;
			case System::Windows::Forms::Keys::Space://space键
				StartThreadMove();
				break;
			}
		}

		//0-up,1-down,2-left,3-right
		void MoveBox(int direction) {
			int border_l = 0;//左边界
			int border_t = 0;//右边界
			int border_r = this->Width - pbMove->Width - 10;
			int border_b = this->ClientRectangle.Height - pbMove->Height - 10;//下边界,需要用工作区高度进行计算
			int step = 5;//步进

						 //up
			if (direction == 0)
			{
				if (this->pbMove->Top >= step)
				{
					this->pbMove->Top -= step;
				}
				else
				{
					this->pbMove->Top = 0;
				}
			}
			//down
			else if (direction == 1)
			{
				if (this->pbMove->Top <= border_b)
				{
					this->pbMove->Top += step;
				}
				else
				{
					this->pbMove->Top = border_b;
				}
			}
			//left
			else if (direction == 2)
			{
				if (this->pbMove->Left >= step)
				{
					this->pbMove->Left -= step;
				}
				else
				{
					this->pbMove->Left = border_l;
				}
			}
			//right
			else if (direction == 3)
			{
				if (this->pbMove->Left <= border_r)
				{
					this->pbMove->Left += step;
				}
				else
				{
					this->pbMove->Left = border_r;
				}
			}

			pbMove->Refresh();
		}

		//开辟线程，委托调用
		void StartThreadMove() {
			System::Windows::Forms::PictureBox^ moveBox = gcnew System::Windows::Forms::PictureBox();

			moveBox->BackColor = System::Drawing::Color::Red;
			moveBox->Location = System::Drawing::Point(0, 0);
			moveBox->Name = L"pbNewBox";
			moveBox->Size = System::Drawing::Size(5, 5);
			moveBox->TabIndex = 0;
			moveBox->TabStop = false;

			this->Controls->Add(moveBox);

			Thread^ th = gcnew Thread(gcnew ParameterizedThreadStart(this, &KeyTestForm::ThreadMove));
			th->IsBackground = true;
			th->Start(moveBox);
		}

		//子线程中执行，通知主线程进行更新
		void ThreadMove(System::Object^ sender) {
			for (int i = 0; i < 200; i++)
			{
				m_sync->Post(gcnew Threading::SendOrPostCallback(this, &KeyTestForm::NewBoxAndMove), sender);
				Thread::Sleep(100);
			}
		}

		//UI线程操作不停的移动，不能在此方法内Sleep挂起，否则卡死
		void NewBoxAndMove(System::Object^ sender) {
			System::Windows::Forms::PictureBox^ box = (System::Windows::Forms::PictureBox^)sender;

			box->Left += 2;
			box->Refresh();
		}


	};
}
