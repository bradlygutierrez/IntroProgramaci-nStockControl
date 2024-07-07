#pragma once
#include "Connection.cpp"
#include "MenuMain.h"
#include "Register.h"
#include "User.h"



namespace StockControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(592, 440);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 52);
			this->button1->TabIndex = 72;
			this->button1->Text = L"Registrarse ";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Login::button1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Turquoise;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(308, 440);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(199, 52);
			this->button3->TabIndex = 71;
			this->button3->Text = L"Ingresar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Login::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->textBox2->Location = System::Drawing::Point(364, 332);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(381, 26);
			this->textBox2->TabIndex = 70;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->textBox1->Location = System::Drawing::Point(364, 230);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(381, 26);
			this->textBox1->TabIndex = 69;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label2->Location = System::Drawing::Point(359, 281);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(131, 31);
			this->label2->TabIndex = 68;
			this->label2->Text = L"Contraseña";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label1->Location = System::Drawing::Point(359, 175);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(219, 31);
			this->label1->TabIndex = 67;
			this->label1->Text = L"Nombre de Usuario";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1098, 667);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Login";
			this->Text = L"Login";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: User^ user = nullptr; 

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		MenuMain^ menuu = gcnew MenuMain();
		

		String^ username = this->textBox1->Text; 
		String^ password = this->textBox2->Text;

		if (username->Length == 0 || password->Length == 0) {
			MessageBox::Show("Please enter email and password.",
			"Email or password are empty", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			SqlConnection sqlConn(connString);
			sqlConn.Open();
			MessageBox::Show("Opened Connection.");

			String^ sqlQuery = "SELECT * FROM [BDStock].[dbo].[User] WHERE Username = @username AND Userpassword = @password";
			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@username", username);
			command.Parameters->AddWithValue("@password", password);

			SqlDataReader^ reader = command.ExecuteReader();
			if (reader->Read()) {
				menuu->Show();
				//user->setUsername(reader->GetString(1));
				//user->setUseremail(reader->GetString(2));
				//user->setUserpassword(reader->GetString(3));
			}
			else {
				MessageBox::Show("Email or password incorrect.",
					"Email or password error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (Exception^ e) {
			MessageBox::Show("Failed to connect to database.",
				"Database Connection Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Register^ registro = gcnew Register();
		registro->Show();
	}
};
}
