#pragma once
#include "Connection.h"
#include "User.h"

namespace StockControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Usuario
	/// </summary>
	public ref class Usuario : public System::Windows::Forms::Form
	{
	public:
		Usuario(void)
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
		~Usuario()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ btnEditar;

	private: System::Windows::Forms::Button^ btnGuardar;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ tbPasswordConfirmed;

	private: System::Windows::Forms::TextBox^ tbEmail;

	private: System::Windows::Forms::TextBox^ tbUsername;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::TextBox^ textBoxSearch;

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
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btnEditar = (gcnew System::Windows::Forms::Button());
			this->btnGuardar = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tbPasswordConfirmed = (gcnew System::Windows::Forms::TextBox());
			this->tbEmail = (gcnew System::Windows::Forms::TextBox());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-2, 2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1099, 666);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Usuario::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->tbPassword);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->btnEditar);
			this->tabPage1->Controls->Add(this->btnGuardar);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->tbPasswordConfirmed);
			this->tabPage1->Controls->Add(this->tbEmail);
			this->tabPage1->Controls->Add(this->tbUsername);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1091, 637);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Datos";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Usuario::tabPage1_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(414, 331);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->Size = System::Drawing::Size(569, 34);
			this->tbPassword->TabIndex = 87;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label5->Location = System::Drawing::Point(131, 331);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(137, 31);
			this->label5->TabIndex = 86;
			this->label5->Text = L"Contraseña:";
			// 
			// btnEditar
			// 
			this->btnEditar->BackColor = System::Drawing::Color::Turquoise;
			this->btnEditar->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEditar->Location = System::Drawing::Point(815, 531);
			this->btnEditar->Margin = System::Windows::Forms::Padding(4);
			this->btnEditar->Name = L"btnEditar";
			this->btnEditar->Size = System::Drawing::Size(199, 52);
			this->btnEditar->TabIndex = 85;
			this->btnEditar->Text = L"EDITAR ";
			this->btnEditar->UseVisualStyleBackColor = false;
			this->btnEditar->Click += gcnew System::EventHandler(this, &Usuario::btnEditar_Click);
			// 
			// btnGuardar
			// 
			this->btnGuardar->BackColor = System::Drawing::Color::Turquoise;
			this->btnGuardar->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnGuardar->ForeColor = System::Drawing::Color::Black;
			this->btnGuardar->Location = System::Drawing::Point(586, 531);
			this->btnGuardar->Margin = System::Windows::Forms::Padding(4);
			this->btnGuardar->Name = L"btnGuardar";
			this->btnGuardar->Size = System::Drawing::Size(199, 52);
			this->btnGuardar->TabIndex = 84;
			this->btnGuardar->Text = L"Guardar";
			this->btnGuardar->UseVisualStyleBackColor = false;
			this->btnGuardar->Click += gcnew System::EventHandler(this, &Usuario::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Turquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(355, 531);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(199, 52);
			this->button2->TabIndex = 83;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Usuario::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(122, 531);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(199, 52);
			this->button1->TabIndex = 82;
			this->button1->Text = L"Nuevo Usuario";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Usuario::button1_Click);
			// 
			// tbPasswordConfirmed
			// 
			this->tbPasswordConfirmed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tbPasswordConfirmed->Location = System::Drawing::Point(414, 410);
			this->tbPasswordConfirmed->Name = L"tbPasswordConfirmed";
			this->tbPasswordConfirmed->Size = System::Drawing::Size(569, 34);
			this->tbPasswordConfirmed->TabIndex = 81;
			// 
			// tbEmail
			// 
			this->tbEmail->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbEmail->Location = System::Drawing::Point(414, 246);
			this->tbEmail->Name = L"tbEmail";
			this->tbEmail->Size = System::Drawing::Size(569, 34);
			this->tbEmail->TabIndex = 80;
			// 
			// tbUsername
			// 
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->Location = System::Drawing::Point(414, 168);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(569, 34);
			this->tbUsername->TabIndex = 79;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label4->Location = System::Drawing::Point(131, 410);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(245, 31);
			this->label4->TabIndex = 78;
			this->label4->Text = L"Confirmar contraseña:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label3->Location = System::Drawing::Point(131, 247);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 31);
			this->label3->TabIndex = 77;
			this->label3->Text = L"Correo:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label2->Location = System::Drawing::Point(131, 169);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(225, 31);
			this->label2->TabIndex = 76;
			this->label2->Text = L"Nombre de Usuario:";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label1->Location = System::Drawing::Point(308, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(545, 41);
			this->label1->TabIndex = 75;
			this->label1->Text = L"INGRESE LOS DATOS DE SU USUARIO";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->dataGridView1);
			this->tabPage2->Controls->Add(this->buttonSearch);
			this->tabPage2->Controls->Add(this->textBoxSearch);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1091, 637);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Registro";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(193, 167);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(678, 348);
			this->dataGridView1->TabIndex = 87;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Usuario::dataGridView1_CellContentClick);
			// 
			// buttonSearch
			// 
			this->buttonSearch->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->buttonSearch->Location = System::Drawing::Point(162, 85);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(127, 43);
			this->buttonSearch->TabIndex = 86;
			this->buttonSearch->Text = L"Buscar";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &Usuario::buttonSearch_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(307, 97);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(564, 22);
			this->textBoxSearch->TabIndex = 85;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label6->Location = System::Drawing::Point(369, 30);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(368, 41);
			this->label6->TabIndex = 76;
			this->label6->Text = L"REGISTRO DE USUARIOS";
			// 
			// Usuario
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1098, 667);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Usuario";
			this->Text = L"Usuario";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ strConn = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
		DatabaseManager^ dbManager = gcnew DatabaseManager (strConn);

		String^ password = tbPassword->Text;
		String^ passwordConfirmation = tbPasswordConfirmed->Text;
		String^ username = tbUsername->Text;
		String^ useremail = tbEmail->Text;
		
		if (password == passwordConfirmation) {
			if (password->Length != 0 && passwordConfirmation->Length != 0 && useremail->Length != 0 && username->Length != 0) {
				if (dbManager->ExecuteQueryRegister(username, useremail, password)) {
					// If the registration is successful, you can proceed with other actions
				MessageBox:Show:("User created successfully ");

				}
			}
			else {
				MessageBox::Show("fields empty, please, try again", "Registration Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);

			}
		}
		else
		{
			MessageBox::Show("Passwords are different, please, try again", "Registration Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		};
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->tbEmail->Text = "";
		this->tbPassword->Text = "";
		this->tbEmail->Text = "";
		this->tbPasswordConfirmed->Text = "";
	}
	
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->tabControl1->SelectedTab == this->tabPage2) {
			try {
				String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
				DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

				DataTable^ user = dbManager->SelectAllUsers();
				if (user->Rows->Count > 0) {
					// Bind DataTable to DataGridView
					this->dataGridView1->DataSource = user;
					MessageBox::Show("Users loaded successfully.", "Load Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show("No categories found.", "No Data", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	
	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ searchQuery = this->textBoxSearch->Text;

		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			DataTable^ dt;

			if (searchQuery->Trim()->Length == 0)
			{
				// If search query is empty, retrieve all categories
				dt = dbManager->SelectAllUsers();
			}
			else
			{
				// Perform search based on the entered search query
				dt = dbManager->SearchUsers(searchQuery);
			}

			if (dt->Rows->Count > 0)
			{
				this->dataGridView1->DataSource = dt;
			}
			else
			{
				MessageBox::Show("No matching records found.", "No Data", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	private: int userID;


	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0)
		{
			DataGridViewRow^ selectedRow = this->dataGridView1->Rows[e->RowIndex];

			// Retrieve CategoryID from the selected row
			userID = Convert::ToInt32(selectedRow->Cells["UserID"]->Value);

			// Fetch category information from database using DatabaseManager
			try {
				String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
				DatabaseManager^ dbManager = gcnew DatabaseManager(connString);
				User^ user = dbManager->getUserByID(userID);
				// Display category information in text boxes
				tabPage1->Show(); // Ensure tabPage1 is visible
				tabControl1->SelectTab(tabPage1); // Switch to tabPage1

				// Print category information to console
				this->tbUsername->Text = user->Username;
				this->tbEmail->Text = user->Email;
				this->tbPassword->Text = user->Password;
				this->tbPasswordConfirmed->Text = "";
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int userId = this->userID;

		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			if (dbManager->DeleteUser(userId)) {
				MessageBox::Show("User deleted successfully.", "Delete Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				tbUsername->Text = "";
				tbPassword->Text = "";
				tbEmail->Text = "";
				tbPasswordConfirmed->Text = "";
				// Refresh DataGridView after deletion
				buttonSearch_Click(sender, e); // Call the search button click event to refresh data
			}
			else {
				MessageBox::Show("Failed to delete user.", "Delete Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	
	private: System::Void btnEditar_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ username = tbUsername->Text;
		String^ useremail = tbEmail->Text;
		String^ password = tbPassword->Text;

		// Validate input if necessary

		// Update category in database using DatabaseManager
		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			if (dbManager->EditUser(userID, useremail, username, password)) {
				MessageBox::Show("User updated successfully.", "Edit Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Refresh DataGridView after update
				buttonSearch_Click(sender, e); // Call the search button click event to refresh data
			}
			else {
				MessageBox::Show("Failed to update user.", "Edit Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
};
}
