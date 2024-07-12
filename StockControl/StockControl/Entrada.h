#pragma once
#include "Connection.h"
#include "FileManager.h"
#include "Input.h"
#include "ComboBoxItem.h"
namespace StockControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Entrada
	/// </summary>
	public ref class Entrada : public System::Windows::Forms::Form
	{
	public:
		Entrada(void)
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
		~Entrada()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBoxUser;
	private: System::Windows::Forms::TextBox^ textBoxMonto;


	private: System::Windows::Forms::TextBox^ textBoxCant;

	private: System::Windows::Forms::ComboBox^ comboBoxProd;



	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ buttonSearchs;
	private: System::Windows::Forms::TextBox^ textBoxSearchs;
	private: System::Windows::Forms::DataGridView^ dataGridViewEntradas;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ InputDateTime;

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
			this->InputDateTime = (gcnew System::Windows::Forms::DateTimePicker());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBoxUser = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxMonto = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCant = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxProd = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->buttonSearchs = (gcnew System::Windows::Forms::Button());
			this->textBoxSearchs = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewEntradas = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEntradas))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(1, 0);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(823, 543);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Entrada::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->InputDateTime);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->comboBoxUser);
			this->tabPage1->Controls->Add(this->textBoxMonto);
			this->tabPage1->Controls->Add(this->textBoxCant);
			this->tabPage1->Controls->Add(this->comboBoxProd);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(815, 517);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Datos";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Enter += gcnew System::EventHandler(this, &Entrada::tabPage1_Enter);
			// 
			// InputDateTime
			// 
			this->InputDateTime->Location = System::Drawing::Point(308, 140);
			this->InputDateTime->Name = L"InputDateTime";
			this->InputDateTime->Size = System::Drawing::Size(283, 20);
			this->InputDateTime->TabIndex = 69;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Turquoise;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(574, 408);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 42);
			this->button3->TabIndex = 68;
			this->button3->Text = L"Guardar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Entrada::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Turquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(386, 408);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 42);
			this->button2->TabIndex = 67;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Entrada::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 7.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(198, 408);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 42);
			this->button1->TabIndex = 66;
			this->button1->Text = L"Nueva Entrada";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Entrada::button1_Click);
			// 
			// comboBoxUser
			// 
			this->comboBoxUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxUser->FormattingEnabled = true;
			this->comboBoxUser->Location = System::Drawing::Point(308, 344);
			this->comboBoxUser->Name = L"comboBoxUser";
			this->comboBoxUser->Size = System::Drawing::Size(283, 24);
			this->comboBoxUser->TabIndex = 65;
			// 
			// textBoxMonto
			// 
			this->textBoxMonto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMonto->Location = System::Drawing::Point(308, 289);
			this->textBoxMonto->Name = L"textBoxMonto";
			this->textBoxMonto->Size = System::Drawing::Size(283, 23);
			this->textBoxMonto->TabIndex = 64;
			// 
			// textBoxCant
			// 
			this->textBoxCant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCant->Location = System::Drawing::Point(308, 239);
			this->textBoxCant->Name = L"textBoxCant";
			this->textBoxCant->Size = System::Drawing::Size(283, 23);
			this->textBoxCant->TabIndex = 63;
			// 
			// comboBoxProd
			// 
			this->comboBoxProd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxProd->FormattingEnabled = true;
			this->comboBoxProd->Location = System::Drawing::Point(308, 188);
			this->comboBoxProd->Name = L"comboBoxProd";
			this->comboBoxProd->Size = System::Drawing::Size(283, 24);
			this->comboBoxProd->TabIndex = 62;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label6->Location = System::Drawing::Point(92, 346);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(76, 25);
			this->label6->TabIndex = 60;
			this->label6->Text = L"Usuario";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label5->Location = System::Drawing::Point(92, 291);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 25);
			this->label5->TabIndex = 59;
			this->label5->Text = L"Monto Productos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label4->Location = System::Drawing::Point(92, 240);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 25);
			this->label4->TabIndex = 58;
			this->label4->Text = L"Cantidad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label3->Location = System::Drawing::Point(92, 188);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(89, 25);
			this->label3->TabIndex = 57;
			this->label3->Text = L"Producto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label2->Location = System::Drawing::Point(92, 136);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(58, 25);
			this->label2->TabIndex = 56;
			this->label2->Text = L"Fecha";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label1->Location = System::Drawing::Point(259, 72);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(413, 38);
			this->label1->TabIndex = 55;
			this->label1->Text = L"INGRESE LOS DATOS DE ENTRADA";
			this->label1->UseCompatibleTextRendering = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->buttonSearchs);
			this->tabPage2->Controls->Add(this->textBoxSearchs);
			this->tabPage2->Controls->Add(this->dataGridViewEntradas);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(815, 517);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Registro";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// buttonSearchs
			// 
			this->buttonSearchs->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonSearchs->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearchs->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->buttonSearchs->Location = System::Drawing::Point(92, 88);
			this->buttonSearchs->Margin = System::Windows::Forms::Padding(2);
			this->buttonSearchs->Name = L"buttonSearchs";
			this->buttonSearchs->Size = System::Drawing::Size(95, 35);
			this->buttonSearchs->TabIndex = 92;
			this->buttonSearchs->Text = L"Buscar";
			this->buttonSearchs->UseVisualStyleBackColor = true;
			this->buttonSearchs->Click += gcnew System::EventHandler(this, &Entrada::buttonSearchs_Click);
			// 
			// textBoxSearchs
			// 
			this->textBoxSearchs->Location = System::Drawing::Point(201, 97);
			this->textBoxSearchs->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSearchs->Name = L"textBoxSearchs";
			this->textBoxSearchs->Size = System::Drawing::Size(443, 20);
			this->textBoxSearchs->TabIndex = 91;
			// 
			// dataGridViewEntradas
			// 
			this->dataGridViewEntradas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewEntradas->Location = System::Drawing::Point(78, 161);
			this->dataGridViewEntradas->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewEntradas->Name = L"dataGridViewEntradas";
			this->dataGridViewEntradas->RowHeadersWidth = 51;
			this->dataGridViewEntradas->RowTemplate->Height = 24;
			this->dataGridViewEntradas->Size = System::Drawing::Size(658, 316);
			this->dataGridViewEntradas->TabIndex = 90;
			this->dataGridViewEntradas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Entrada::dataGridViewEntradas_CellContentClick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label7->Location = System::Drawing::Point(332, 40);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(98, 35);
			this->label7->TabIndex = 89;
			this->label7->Text = L"Entradas";
			this->label7->UseCompatibleTextRendering = true;
			// 
			// Entrada
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 542);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Entrada";
			this->Text = L"Entrada";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewEntradas))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	System::Void Entrada::LlenarProductos()
		{
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbConnection = gcnew DatabaseManager(connString);

			DataTable^ dtProductos = dbConnection->SelectAllProducts();

			comboBoxProd->Items->Clear();
			for each (DataRow ^ row in dtProductos->Rows)
			{
				String^ producto = row["Productname"]->ToString();
				String^ codigo = row["ProductID"]->ToString();
				comboBoxProd->Items->Add(gcnew ComboBoxItem(producto, codigo));
			}
			comboBoxProd->DisplayMember = "DisplayMember";
			comboBoxProd->ValueMember = "ValueMember";
		}

		System::Void Entrada::LlenarUsuarios()
		{
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbConnection = gcnew DatabaseManager(connString);

			DataTable^ dtUsuarios = dbConnection->SelectAllUsers();

			comboBoxUser->Items->Clear();
			for each (DataRow ^ row in dtUsuarios->Rows)
			{
				String^ usuario = row["Username"]->ToString();
				String^ codigo = row["UserID"]->ToString();
				comboBoxUser->Items->Add(gcnew ComboBoxItem(usuario, codigo));
			}
			comboBoxUser->DisplayMember = "DisplayMember";
			comboBoxUser->ValueMember = "ValueMember";
		}

		System::Void Entrada::Entrada_Load(System::Object^ sender, System::EventArgs^ e)
		{
			LlenarProductos();
			LlenarUsuarios();
		}
private: int inputId;
private: System::Void dataGridViewEntradas_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (e->RowIndex >= 0 && e->ColumnIndex >= 0)
	{
		DataGridViewRow^ selectedRow = this->dataGridViewEntradas->Rows[e->RowIndex];

		// Retrieve CategoryID from the selected row
		inputId = Convert::ToInt32(selectedRow->Cells["InputID"]->Value);

		// Fetch category information from database using DatabaseManager
		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);
			Input^ input = dbManager->GetInputById(inputId);
			// Display category information in text boxes
			tabPage1->Show(); // Ensure tabPage1 is visible
			tabControl1->SelectTab(tabPage1); // Switch to tabPage1

			// Print category information to console
			InputDateTime->Value = input->InputDate;
			comboBoxProd->Text = Convert::ToString(input->ProductID);
			textBoxCant->Text = Convert::ToString(input->InputQuantity);
			textBoxMonto->Text = Convert::ToString(input->InputPrice);
			comboBoxUser->Text = Convert::ToString(input->UserID);
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->tabControl1->SelectedTab == this->tabPage2) {
		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			DataTable^ inputs = dbManager->SelectAllInputs();
			if (inputs->Rows->Count > 0) {
				// Bind DataTable to DataGridView
				this->dataGridViewEntradas->DataSource = inputs;
				MessageBox::Show("Outputs loaded successfully.", "Load Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				LlenarProductos();
				LlenarUsuarios();
			}
			else {
				MessageBox::Show("No outputs found.", "No Data", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	int inputID = this->inputId;

	MessageBox::Show(inputID.ToString());

	try {
		String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
		DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

		if (dbManager->DeleteInput(inputID)) {
			MessageBox::Show("Input deleted successfully.", "Delete Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
			comboBoxProd->Text = "";
			textBoxCant->Text = "";
			textBoxMonto->Text = "";
			comboBoxUser->Text = "";
			// Refresh DataGridView after deletion
			buttonSearchs_Click(sender, e); // Call the search button click event to refresh data
		}
		else {
			MessageBox::Show("Failed to delete output.", "Delete Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void buttonSearchs_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ searchQuery = this->textBoxSearchs->Text;

	try {
		String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
		DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

		DataTable^ dt;

		if (searchQuery->Trim()->Length == 0)
		{
			// If search query is empty, retrieve all categories
			dt = dbManager->SelectAllInputs();
		}
		else
		{
			// Perform search based on the entered search query
			dt = dbManager->SearchInputs(searchQuery);
		}

		if (dt->Rows->Count > 0)
		{
			this->dataGridViewEntradas->DataSource = dt;
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
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	

	// Validate input (if needed)

	// Save category to database using DatabaseManager
	try {
		String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
		DatabaseManager^ dbManager = gcnew DatabaseManager(connString);
		DateTime inputDate = InputDateTime->Value;
		double inputPrice = Convert::ToDouble(textBoxMonto->Text);
		int inputQuantity = Convert::ToInt32(textBoxCant->Text);
		String^ selectedProductName = comboBoxProd->Text;
		String^ selectedUserName = comboBoxUser->Text;

		int productID = dbManager->GetProductIDByName(selectedProductName);
		int userID = dbManager->GetUserIDByName(selectedUserName);
		if (dbManager->CreateNewInput(inputDate, inputPrice, inputQuantity, productID, userID)) {
			MessageBox::Show("Input created successfully.", "Create Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Clear text boxes after successful creation
			textBoxMonto->Text = "";
			textBoxCant->Text = "";
			comboBoxProd->Text = "";
			comboBoxUser->Text = "";

			// Refresh DataGridView after creation
			buttonSearchs_Click(sender, e); // Call the search button click event to refresh data
		}
		else {
			MessageBox::Show("Failed to create output.", "Create Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);

		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxMonto->Text = "";
	textBoxCant->Text = "";
	comboBoxProd->Text = "";
	comboBoxUser->Text = "";
}
private: System::Void tabPage1_Enter(System::Object^ sender, System::EventArgs^ e) {
	LlenarProductos();
	LlenarUsuarios();
}
};
}
