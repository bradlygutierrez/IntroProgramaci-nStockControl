#pragma once
#include "Connection.h"
#include "FileManager.h"
#include "Output.h"
#include "ComboBoxItem.h"
namespace StockControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Salida
	/// </summary>
	public ref class Salida : public System::Windows::Forms::Form
	{
	public:
		Salida(void)
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
		~Salida()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
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
	private: System::Windows::Forms::Button^ buttonSearchs;
	private: System::Windows::Forms::TextBox^ textBoxSearchs;


	private: System::Windows::Forms::DataGridView^ dataGridViewSalidas;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DateTimePicker^ OutputDateTime;



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
			this->OutputDateTime = (gcnew System::Windows::Forms::DateTimePicker());
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
			this->dataGridViewSalidas = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalidas))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 1);
			this->tabControl1->Margin = System::Windows::Forms::Padding(2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(822, 545);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Salida::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->OutputDateTime);
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
			this->tabPage1->Size = System::Drawing::Size(814, 519);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Datos";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &Salida::tabPage1_Click);
			this->tabPage1->Enter += gcnew System::EventHandler(this, &Salida::tabPage1_Enter);
			// 
			// OutputDateTime
			// 
			this->OutputDateTime->Location = System::Drawing::Point(308, 141);
			this->OutputDateTime->Name = L"OutputDateTime";
			this->OutputDateTime->Size = System::Drawing::Size(283, 20);
			this->OutputDateTime->TabIndex = 41;
			this->OutputDateTime->Value = System::DateTime(2024, 7, 12, 0, 0, 0, 0);
			this->OutputDateTime->ValueChanged += gcnew System::EventHandler(this, &Salida::OutputDateTime_ValueChanged);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Turquoise;
			this->button3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::Color::Black;
			this->button3->Location = System::Drawing::Point(574, 414);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 42);
			this->button3->TabIndex = 40;
			this->button3->Text = L"Guardar";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Salida::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Turquoise;
			this->button2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(387, 414);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 42);
			this->button2->TabIndex = 39;
			this->button2->Text = L"Eliminar";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Salida::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Turquoise;
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(199, 414);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 42);
			this->button1->TabIndex = 38;
			this->button1->Text = L"Nueva Salida";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Salida::button1_Click);
			// 
			// comboBoxUser
			// 
			this->comboBoxUser->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxUser->FormattingEnabled = true;
			this->comboBoxUser->Location = System::Drawing::Point(308, 350);
			this->comboBoxUser->Name = L"comboBoxUser";
			this->comboBoxUser->Size = System::Drawing::Size(283, 24);
			this->comboBoxUser->TabIndex = 37;
			this->comboBoxUser->SelectedIndexChanged += gcnew System::EventHandler(this, &Salida::comboBoxUser_SelectedIndexChanged);
			// 
			// textBoxMonto
			// 
			this->textBoxMonto->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMonto->Location = System::Drawing::Point(308, 295);
			this->textBoxMonto->Name = L"textBoxMonto";
			this->textBoxMonto->Size = System::Drawing::Size(283, 23);
			this->textBoxMonto->TabIndex = 36;
			this->textBoxMonto->TextChanged += gcnew System::EventHandler(this, &Salida::textBoxMonto_TextChanged);
			// 
			// textBoxCant
			// 
			this->textBoxCant->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxCant->Location = System::Drawing::Point(308, 245);
			this->textBoxCant->Name = L"textBoxCant";
			this->textBoxCant->Size = System::Drawing::Size(283, 23);
			this->textBoxCant->TabIndex = 35;
			// 
			// comboBoxProd
			// 
			this->comboBoxProd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBoxProd->FormattingEnabled = true;
			this->comboBoxProd->Location = System::Drawing::Point(308, 193);
			this->comboBoxProd->Name = L"comboBoxProd";
			this->comboBoxProd->Size = System::Drawing::Size(283, 24);
			this->comboBoxProd->TabIndex = 34;
			this->comboBoxProd->SelectedIndexChanged += gcnew System::EventHandler(this, &Salida::comboBoxProd_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label6->Location = System::Drawing::Point(93, 352);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(72, 22);
			this->label6->TabIndex = 32;
			this->label6->Text = L"Usuario";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label5->Location = System::Drawing::Point(93, 297);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(145, 22);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Monto Productos";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label4->Location = System::Drawing::Point(93, 245);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(82, 22);
			this->label4->TabIndex = 30;
			this->label4->Text = L"Cantidad";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label3->Location = System::Drawing::Point(93, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(82, 22);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Producto";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label2->Location = System::Drawing::Point(93, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 22);
			this->label2->TabIndex = 28;
			this->label2->Text = L"Fecha";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label1->Location = System::Drawing::Point(258, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(384, 38);
			this->label1->TabIndex = 27;
			this->label1->Text = L"INGRESE LOS DATOS DE SALIDA";
			this->label1->UseCompatibleTextRendering = true;
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->buttonSearchs);
			this->tabPage2->Controls->Add(this->textBoxSearchs);
			this->tabPage2->Controls->Add(this->dataGridViewSalidas);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(814, 519);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Registro";
			this->tabPage2->UseVisualStyleBackColor = true;
			this->tabPage2->Click += gcnew System::EventHandler(this, &Salida::tabPage2_Click);
			// 
			// buttonSearchs
			// 
			this->buttonSearchs->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonSearchs->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearchs->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->buttonSearchs->Location = System::Drawing::Point(92, 89);
			this->buttonSearchs->Margin = System::Windows::Forms::Padding(2);
			this->buttonSearchs->Name = L"buttonSearchs";
			this->buttonSearchs->Size = System::Drawing::Size(95, 35);
			this->buttonSearchs->TabIndex = 88;
			this->buttonSearchs->Text = L"Buscar";
			this->buttonSearchs->UseVisualStyleBackColor = true;
			this->buttonSearchs->Click += gcnew System::EventHandler(this, &Salida::buttonSearchs_Click);
			// 
			// textBoxSearchs
			// 
			this->textBoxSearchs->Location = System::Drawing::Point(201, 98);
			this->textBoxSearchs->Margin = System::Windows::Forms::Padding(2);
			this->textBoxSearchs->Name = L"textBoxSearchs";
			this->textBoxSearchs->Size = System::Drawing::Size(443, 20);
			this->textBoxSearchs->TabIndex = 87;
			// 
			// dataGridViewSalidas
			// 
			this->dataGridViewSalidas->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewSalidas->Location = System::Drawing::Point(78, 162);
			this->dataGridViewSalidas->Margin = System::Windows::Forms::Padding(2);
			this->dataGridViewSalidas->Name = L"dataGridViewSalidas";
			this->dataGridViewSalidas->RowHeadersWidth = 51;
			this->dataGridViewSalidas->RowTemplate->Height = 24;
			this->dataGridViewSalidas->Size = System::Drawing::Size(658, 316);
			this->dataGridViewSalidas->TabIndex = 86;
			this->dataGridViewSalidas->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Salida::dataGridViewSalidas_CellContentClick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label7->Location = System::Drawing::Point(332, 41);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(80, 35);
			this->label7->TabIndex = 85;
			this->label7->Text = L"Salidas";
			this->label7->UseCompatibleTextRendering = true;
			// 
			// Salida
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(824, 542);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Salida";
			this->Text = L"Salida";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewSalidas))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion
		System::Void Salida::LlenarProductos()
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

		System::Void Salida::LlenarUsuarios()
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

		System::Void Salida::Salida_Load(System::Object^ sender, System::EventArgs^ e)
		{
			LlenarProductos();
			LlenarUsuarios();
		}
	
	
	


	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
		private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			if (this->tabControl1->SelectedTab == this->tabPage2) {
				try {
					String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
					DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

					DataTable^ outputs = dbManager->SelectAllOutputs();
					if (outputs->Rows->Count > 0) {
						// Bind DataTable to DataGridView
						this->dataGridViewSalidas->DataSource = outputs;
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
	private: int outputId;
	private: System::Void dataGridViewSalidas_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0)
		{
			DataGridViewRow^ selectedRow = this->dataGridViewSalidas->Rows[e->RowIndex];

			// Retrieve CategoryID from the selected row
			outputId = Convert::ToInt32(selectedRow->Cells["OutputID"]->Value);

			// Fetch category information from database using DatabaseManager
			try {
				String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
				DatabaseManager^ dbManager = gcnew DatabaseManager(connString);
				Output^ output = dbManager->GetOutputById(outputId);
				// Display category information in text boxes
				tabPage1->Show(); // Ensure tabPage1 is visible
				tabControl1->SelectTab(tabPage1); // Switch to tabPage1

				// Print category information to console
				OutputDateTime->Value = output->OutputDate;
				comboBoxProd->Text = Convert::ToString(output->ProductID);
				textBoxCant->Text = Convert::ToString(output->OutputQuantity);
				textBoxMonto->Text = Convert::ToString(output->OutputPrice);
				comboBoxUser->Text = Convert::ToString(output->UserID);
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int outputID = this->outputId;

		MessageBox::Show(outputID.ToString());

		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			if (dbManager->DeleteOutput(outputID)) {
				MessageBox::Show("Output deleted successfully.", "Delete Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
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
				dt = dbManager->SelectAllOutputs();
			}
			else
			{
				// Perform search based on the entered search query
				dt = dbManager->SearchOutputs(searchQuery);
			}

			if (dt->Rows->Count > 0)
			{
				this->dataGridViewSalidas->DataSource = dt;
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
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage1_Enter(System::Object^ sender, System::EventArgs^ e) {
	LlenarProductos();
	LlenarUsuarios();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	

	
	
	// Validate input (if needed)

	// Save category to database using DatabaseManager
	try {
		String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
		DatabaseManager^ dbManager = gcnew DatabaseManager(connString);
		DateTime outputDate = Convert::ToDateTime(OutputDateTime->Value);
		double outputPrice = Convert::ToDouble(textBoxMonto->Text);
		int outputQuantity = Convert::ToInt32(textBoxCant->Text);
		String^ selectedProductName = comboBoxProd->Text;
		String^ selectedUserName = comboBoxUser->Text;

		int productID = dbManager->GetProductIDByName(selectedProductName);
		int userID = dbManager->GetUserIDByName(selectedUserName);

		if (dbManager->CreateNewOutput(outputDate, outputPrice, outputQuantity, productID, userID)) {
			MessageBox::Show("Category created successfully.", "Create Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Clear text boxes after successful creation
			textBoxMonto->Text = "";
			textBoxCant->Text = "";
			comboBoxProd -> Text = "";
			comboBoxUser->Text = "";
			
			// Refresh DataGridView after creation
			buttonSearchs_Click(sender, e); // Call the search button click event to refresh data
		}
		else {
			MessageBox::Show("Failed to create output.", "Create Error",MessageBoxButtons::OK, MessageBoxIcon::Warning);
			MessageBox::Show("The value is: " + productID.ToString(), "Variable Value", MessageBoxButtons::OK, MessageBoxIcon::Information);
			MessageBox::Show("The value is: " + userID.ToString(), "Variable Value", MessageBoxButtons::OK, MessageBoxIcon::Information);
	
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
private: System::Void comboBoxProd_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBoxMonto_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBoxUser_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void OutputDateTime_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	textBoxMonto->Text = "";
	textBoxCant->Text = "";
	comboBoxProd->Text = "";
	comboBoxUser->Text = "";
	
}
};
}
