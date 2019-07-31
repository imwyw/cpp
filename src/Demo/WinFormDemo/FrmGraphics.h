#pragma once

namespace WinFormDemo {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FrmGraphics 摘要
	/// </summary>
	public ref class FrmGraphics : public System::Windows::Forms::Form
	{
	private:
		int imageIndex = 0;
	public:
		FrmGraphics(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//

			// 双缓冲控件必要设置
			this->SetStyle(ControlStyles::OptimizedDoubleBuffer, true);
			this->SetStyle(ControlStyles::AllPaintingInWmPaint, true);
			this->SetStyle(ControlStyles::UserPaint, true);
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~FrmGraphics()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	protected:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FrmGraphics::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Interval = 200;
			this->timer1->Tick += gcnew System::EventHandler(this, &FrmGraphics::timer1_Tick);
			// 
			// FrmGraphics
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Zoom;
			this->ClientSize = System::Drawing::Size(1272, 544);
			this->Name = L"FrmGraphics";
			this->Text = L"GDI绘图";
			this->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FrmGraphics::FrmGraphics_Paint);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: int position_x = 700;
	private: System::Void FrmGraphics_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
		/*
		Pen^ pen = gcnew Pen(Color::Red);
		e->Graphics->DrawEllipse(pen, 100, 100, 100, 100);

		// font 类使用全类名
		System::Drawing::Font^ font = gcnew System::Drawing::Font("微软雅黑", 40, FontStyle::Bold);
		Brush^ brush = gcnew SolidBrush(Color::Green);
		e->Graphics->DrawString("小学期", font, brush, 100, 300);
		*/
		String^ imgName = "frame_" + imageIndex + ".png";
		Image^ image = Image::FromFile("..\\..\\images\\images\\Zombies\\Zombie\\Zombie\\" + imgName);
		//e->Graphics->DrawImageUnscaled(image, 300, 100, 90, 120);// 按照图片原始比例绘制
		e->Graphics->DrawImage(image, position_x--, 100);

		imageIndex++;
		if (imageIndex == 21)
		{
			imageIndex = 0;
		}
	}
	private: System::Void timer1_Tick(System::Object^  sender, System::EventArgs^  e) {
		// 使控件的整个图面无效并导致重绘控件，调用FrmGraphics_Paint重绘
		this->Invalidate();
	}

	};
}
