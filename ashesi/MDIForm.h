#pragma once

namespace ashesi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MDIForm
	/// </summary>
	public ref class MDIForm : public System::Windows::Forms::Form
	{
	public:
		MDIForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MDIForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^ toolStrip1;
	private: System::Windows::Forms::ToolStripButton^ tsbtnFile;
	private: System::Windows::Forms::ToolStripButton^ tsbtnStudent;
	private: System::Windows::Forms::ToolStripButton^ tsbtnFaculty;
	private: System::Windows::Forms::ToolStripButton^ tsbtnAdmin;
	private: System::Windows::Forms::StatusStrip^ statusStrip1;
	private: System::Windows::Forms::ToolStripStatusLabel^ tssUser;
	private: System::Windows::Forms::ToolStripProgressBar^ pgbarUser;
	private: System::Windows::Forms::ToolStripStatusLabel^ tssRole;
	private: System::Windows::Forms::ToolStripProgressBar^ pgbarRole;
	private: System::Windows::Forms::ToolStripStatusLabel^ tssLastlgn;
	private: System::Windows::Forms::ToolStripProgressBar^ pgbarlogin;



	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MDIForm::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->tsbtnFile = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbtnStudent = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbtnAdmin = (gcnew System::Windows::Forms::ToolStripButton());
			this->tsbtnFaculty = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->tssUser = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->pgbarUser = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->tssRole = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->pgbarRole = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->tssLastlgn = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->pgbarlogin = (gcnew System::Windows::Forms::ToolStripProgressBar());
			this->toolStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->tsbtnFile, this->tsbtnStudent,
					this->tsbtnFaculty, this->tsbtnAdmin
			});
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(571, 31);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// tsbtnFile
			// 
			this->tsbtnFile->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->tsbtnFile->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbtnFile.Image")));
			this->tsbtnFile->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbtnFile->Name = L"tsbtnFile";
			this->tsbtnFile->Size = System::Drawing::Size(36, 28);
			this->tsbtnFile->Text = L"File";
			// 
			// tsbtnStudent
			// 
			this->tsbtnStudent->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->tsbtnStudent->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbtnStudent.Image")));
			this->tsbtnStudent->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbtnStudent->Name = L"tsbtnStudent";
			this->tsbtnStudent->Size = System::Drawing::Size(64, 28);
			this->tsbtnStudent->Text = L"Student";
			// 
			// tsbtnAdmin
			// 
			this->tsbtnAdmin->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->tsbtnAdmin->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbtnAdmin.Image")));
			this->tsbtnAdmin->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbtnAdmin->Name = L"tsbtnAdmin";
			this->tsbtnAdmin->Size = System::Drawing::Size(57, 28);
			this->tsbtnAdmin->Text = L"Admin";
			// 
			// tsbtnFaculty
			// 
			this->tsbtnFaculty->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->tsbtnFaculty->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tsbtnFaculty.Image")));
			this->tsbtnFaculty->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->tsbtnFaculty->Name = L"tsbtnFaculty";
			this->tsbtnFaculty->Size = System::Drawing::Size(58, 28);
			this->tsbtnFaculty->Text = L"Faculty";
			// 
			// statusStrip1
			// 
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->tssUser, this->pgbarUser,
					this->tssRole, this->pgbarRole, this->tssLastlgn, this->pgbarlogin
			});
			this->statusStrip1->Location = System::Drawing::Point(0, 358);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(571, 26);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// tssUser
			// 
			this->tssUser->BackColor = System::Drawing::Color::White;
			this->tssUser->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->tssUser->Name = L"tssUser";
			this->tssUser->Size = System::Drawing::Size(41, 20);
			this->tssUser->Text = L"User:";
			// 
			// pgbarUser
			// 
			this->pgbarUser->Name = L"pgbarUser";
			this->pgbarUser->Size = System::Drawing::Size(100, 18);
			// 
			// tssRole
			// 
			this->tssRole->BackColor = System::Drawing::Color::White;
			this->tssRole->Name = L"tssRole";
			this->tssRole->Size = System::Drawing::Size(39, 20);
			this->tssRole->Text = L"Role";
			// 
			// pgbarRole
			// 
			this->pgbarRole->Name = L"pgbarRole";
			this->pgbarRole->Size = System::Drawing::Size(100, 18);
			// 
			// tssLastlgn
			// 
			this->tssLastlgn->BackColor = System::Drawing::Color::White;
			this->tssLastlgn->Name = L"tssLastlgn";
			this->tssLastlgn->Size = System::Drawing::Size(76, 20);
			this->tssLastlgn->Text = L"Last Login";
			// 
			// pgbarlogin
			// 
			this->pgbarlogin->Name = L"pgbarlogin";
			this->pgbarlogin->Size = System::Drawing::Size(100, 18);
			// 
			// MDIForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::LightSteelBlue;
			this->ClientSize = System::Drawing::Size(571, 384);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"MDIForm";
			this->Text = L"MDIForm";
			this->Load += gcnew System::EventHandler(this, &MDIForm::MDIForm_Load);
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MDIForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
