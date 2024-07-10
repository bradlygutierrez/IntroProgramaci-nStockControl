#pragma once
#include "Connection.h"
#include "FileManager.h"
#include "Category.h"            // Include Category class header



namespace StockControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Categoría
	/// </summary>
	public ref class Categoría : public System::Windows::Forms::Form
	{
	public:
		Categoría(void)
		{
			InitializeComponent();
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Categoría()
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
	private: System::Windows::Forms::Button^ buttonEdit;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ buttonSave;

	private: System::Windows::Forms::Button^ buttonDelete;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBoxProductSize;

	private: System::Windows::Forms::TextBox^ textBoxProductDescription;
	private: System::Windows::Forms::TextBox^ textBoxProductType;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataGridView^ dataGridViewCategories;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::TextBox^ textBoxSearch;

	protected:


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		/// System::Windows::Forms::TabControl^ tabControl1;
		
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->buttonEdit = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBoxProductSize = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProductDescription = (gcnew System::Windows::Forms::TextBox());
			this->textBoxProductType = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->dataGridViewCategories = (gcnew System::Windows::Forms::DataGridView());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCategories))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, -1);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1099, 672);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Categoría::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->buttonEdit);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->buttonSave);
			this->tabPage1->Controls->Add(this->buttonDelete);
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->textBoxProductSize);
			this->tabPage1->Controls->Add(this->textBoxProductDescription);
			this->tabPage1->Controls->Add(this->textBoxProductType);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label8);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1091, 643);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Datos";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// buttonEdit
			// 
			this->buttonEdit->BackColor = System::Drawing::Color::Turquoise;
			this->buttonEdit->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->buttonEdit->Location = System::Drawing::Point(792, 460);
			this->buttonEdit->Margin = System::Windows::Forms::Padding(4);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(199, 52);
			this->buttonEdit->TabIndex = 81;
			this->buttonEdit->Text = L"EDITAR ";
			this->buttonEdit->UseVisualStyleBackColor = false;
			this->buttonEdit->Click += gcnew System::EventHandler(this, &Categoría::buttonEdit_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label1->Location = System::Drawing::Point(299, 71);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(530, 43);
			this->label1->TabIndex = 80;
			this->label1->Text = L"INGRESE LOS DATOS DE LA CATEGORÍA";
			this->label1->UseCompatibleTextRendering = true;
			// 
			// buttonSave
			// 
			this->buttonSave->BackColor = System::Drawing::Color::Turquoise;
			this->buttonSave->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->buttonSave->ForeColor = System::Drawing::Color::Black;
			this->buttonSave->Location = System::Drawing::Point(563, 460);
			this->buttonSave->Margin = System::Windows::Forms::Padding(4);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(199, 52);
			this->buttonSave->TabIndex = 79;
			this->buttonSave->Text = L"Guardar";
			this->buttonSave->UseVisualStyleBackColor = false;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Categoría::buttonSave_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::Turquoise;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->buttonDelete->Location = System::Drawing::Point(332, 460);
			this->buttonDelete->Margin = System::Windows::Forms::Padding(4);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(199, 52);
			this->buttonDelete->TabIndex = 78;
			this->buttonDelete->Text = L"Eliminar";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Categoría::buttonDelete_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Turquoise;
			this->button8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 9, System::Drawing::FontStyle::Bold));
			this->button8->Location = System::Drawing::Point(99, 460);
			this->button8->Margin = System::Windows::Forms::Padding(4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(199, 52);
			this->button8->TabIndex = 77;
			this->button8->Text = L"Nueva categoría";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Categoría::button8_Click);
			// 
			// textBoxProductSize
			// 
			this->textBoxProductSize->Location = System::Drawing::Point(263, 365);
			this->textBoxProductSize->Multiline = true;
			this->textBoxProductSize->Name = L"textBoxProductSize";
			this->textBoxProductSize->Size = System::Drawing::Size(612, 37);
			this->textBoxProductSize->TabIndex = 76;
			// 
			// textBoxProductDescription
			// 
			this->textBoxProductDescription->Location = System::Drawing::Point(263, 257);
			this->textBoxProductDescription->Multiline = true;
			this->textBoxProductDescription->Name = L"textBoxProductDescription";
			this->textBoxProductDescription->Size = System::Drawing::Size(612, 37);
			this->textBoxProductDescription->TabIndex = 75;
			// 
			// textBoxProductType
			// 
			this->textBoxProductType->Location = System::Drawing::Point(263, 156);
			this->textBoxProductType->Multiline = true;
			this->textBoxProductType->Name = L"textBoxProductType";
			this->textBoxProductType->Size = System::Drawing::Size(612, 37);
			this->textBoxProductType->TabIndex = 74;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label5->Location = System::Drawing::Point(141, 358);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(96, 31);
			this->label5->TabIndex = 73;
			this->label5->Text = L"Tamaño";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label6->Location = System::Drawing::Point(103, 263);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(137, 31);
			this->label6->TabIndex = 72;
			this->label6->Text = L"Descripción";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label8->Location = System::Drawing::Point(141, 162);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 31);
			this->label8->TabIndex = 71;
			this->label8->Text = L"Tipo";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->buttonSearch);
			this->tabPage2->Controls->Add(this->textBoxSearch);
			this->tabPage2->Controls->Add(this->dataGridViewCategories);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1091, 643);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Registro";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// buttonSearch
			// 
			this->buttonSearch->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->buttonSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->buttonSearch->Location = System::Drawing::Point(161, 88);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(127, 43);
			this->buttonSearch->TabIndex = 84;
			this->buttonSearch->Text = L"Buscar";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &Categoría::buttonSearch_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(306, 100);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(589, 22);
			this->textBoxSearch->TabIndex = 83;
			// 
			// dataGridViewCategories
			// 
			this->dataGridViewCategories->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewCategories->Location = System::Drawing::Point(143, 179);
			this->dataGridViewCategories->Name = L"dataGridViewCategories";
			this->dataGridViewCategories->RowHeadersWidth = 51;
			this->dataGridViewCategories->RowTemplate->Height = 24;
			this->dataGridViewCategories->Size = System::Drawing::Size(878, 389);
			this->dataGridViewCategories->TabIndex = 82;
			this->dataGridViewCategories->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Categoría::dataGridViewCategories_CellContentClick);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label7->Location = System::Drawing::Point(481, 30);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(148, 43);
			this->label7->TabIndex = 80;
			this->label7->Text = L"Categorias";
			this->label7->UseCompatibleTextRendering = true;
			// 
			// Categoría
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1098, 667);
			this->Controls->Add(this->tabControl1);
			this->Name = L"Categoría";
			this->Text = L"Categoría";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewCategories))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->tabControl1->SelectedTab == this->tabPage2) {
			try {
				String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
				DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

				DataTable^ categories = dbManager->SelectAllCategories();
				if (categories->Rows->Count > 0) {
					// Bind DataTable to DataGridView
					this->dataGridViewCategories->DataSource = categories;
					MessageBox::Show("Categories loaded successfully.", "Load Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				else {
					MessageBox::Show("No categories found.", "No Data", MessageBoxButtons::OK, MessageBoxIcon::Warning);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}

	};

	private: int categoryId;


	private: System::Void dataGridViewCategories_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

		if (e->RowIndex >= 0 && e->ColumnIndex >= 0)
		{
			DataGridViewRow^ selectedRow = this->dataGridViewCategories->Rows[e->RowIndex];

			// Retrieve CategoryID from the selected row
			 categoryId = Convert::ToInt32(selectedRow->Cells["CategoryID"]->Value);

			// Fetch category information from database using DatabaseManager
			try {
				String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
				DatabaseManager^ dbManager = gcnew DatabaseManager(connString);
				Category^ category = dbManager->GetCategoryById(categoryId);
				// Display category information in text boxes
				tabPage1->Show(); // Ensure tabPage1 is visible
				tabControl1->SelectTab(tabPage1); // Switch to tabPage1

				// Print category information to console
				textBoxProductDescription->Text = category->ProductDescription;
				textBoxProductType->Text = category->ProductType;
				textBoxProductSize->Text = category->ProductSize;
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}


	}

	private: System::Void Categoría_Load(System::Object^ sender, System::EventArgs^ e) {
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
			dt = dbManager->SelectAllCategories();
		}
		else
		{
			// Perform search based on the entered search query
			dt = dbManager->SearchCategories(searchQuery);
		}

		if (dt->Rows->Count > 0)
		{
			this->dataGridViewCategories->DataSource = dt;
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
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxProductDescription->Text = "";
		textBoxProductType->Text = "";
		textBoxProductSize->Text = "";
	}
	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get current category details from text boxes or DataGridView

		// Retrieve CategoryID from the selected row
		int categoryID = this->categoryId;

		MessageBox::Show(categoryID.ToString());

		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			if (dbManager->DeleteCategory(categoryID)) {
				MessageBox::Show("Category deleted successfully.", "Delete Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				textBoxProductDescription->Text = "";
				textBoxProductType->Text = "";
				textBoxProductSize->Text = "";
				// Refresh DataGridView after deletion
				buttonSearch_Click(sender, e); // Call the search button click event to refresh data
			}
			else {
				MessageBox::Show("Failed to delete category.", "Delete Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
	private: System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		// Get current category details from text boxes or DataGridView
		
		// Retrieve CategoryID from the selected row
		int categoryID = categoryId;
		MessageBox::Show(categoryID.ToString());

		String^ productDescription = textBoxProductDescription->Text;
		String^ productType = textBoxProductType->Text;
		String^ productSize = textBoxProductSize->Text;

		// Validate input if necessary

		// Update category in database using DatabaseManager
		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			if (dbManager->EditCategory(categoryID, productDescription, productType, productSize)) {
				MessageBox::Show("Category updated successfully.", "Edit Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

				// Refresh DataGridView after update
				buttonSearch_Click(sender, e); // Call the search button click event to refresh data
			}
			else {
				MessageBox::Show("Failed to update category.", "Edit Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ productDescription = textBoxProductDescription->Text;
	String^ productType = textBoxProductType->Text;
	String^ productSize = textBoxProductSize->Text;

	// Validate input (if needed)

	// Save category to database using DatabaseManager
	try {
		String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
		DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

		if (dbManager->CreateNewCategory(productDescription, productType, productSize)) {
			MessageBox::Show("Category created successfully.", "Create Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

			// Clear text boxes after successful creation
			textBoxProductDescription->Text = "";
			textBoxProductType->Text = "";
			textBoxProductSize->Text = "";

			// Refresh DataGridView after creation
			buttonSearch_Click(sender, e); // Call the search button click event to refresh data
		}
		else {
			MessageBox::Show("Failed to create category.", "Create Error", MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	catch (Exception^ ex) {
		MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
	}
}
};
	
}
