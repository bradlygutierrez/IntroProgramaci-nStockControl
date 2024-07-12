#pragma once
#include "Connection.h"
#include "FileManager.h"
#include "Product.h"

namespace StockControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Producto
	/// </summary>
	public ref class Producto : public System::Windows::Forms::Form
	{
	public:
		Producto(void)
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
		~Producto()
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

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ buttonSave;

	private: System::Windows::Forms::Button^ buttonDelete;

	private: System::Windows::Forms::Button^ buttonNewProd;

	private: System::Windows::Forms::TextBox^ textBoxQuantity;

	private: System::Windows::Forms::TextBox^ textBoxCategory;

	private: System::Windows::Forms::TextBox^ textBoxPrice;

	private: System::Windows::Forms::TextBox^ textBoxColor;


	private: System::Windows::Forms::TextBox^ textBoxName;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ dataGridViewProduct;
	private: System::Windows::Forms::Button^ buttonSearch;
	private: System::Windows::Forms::TextBox^ textBoxSearch;
	private: System::Windows::Forms::Label^ label1;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
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
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->buttonSave = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->buttonNewProd = (gcnew System::Windows::Forms::Button());
			this->textBoxQuantity = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCategory = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPrice = (gcnew System::Windows::Forms::TextBox());
			this->textBoxColor = (gcnew System::Windows::Forms::TextBox());
			this->textBoxName = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->buttonSearch = (gcnew System::Windows::Forms::Button());
			this->textBoxSearch = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewProduct = (gcnew System::Windows::Forms::DataGridView());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewProduct))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(-1, -2);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(1100, 669);
			this->tabControl1->TabIndex = 0;
			this->tabControl1->SelectedIndexChanged += gcnew System::EventHandler(this, &Producto::tabControl1_SelectedIndexChanged);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->buttonEdit);
			this->tabPage1->Controls->Add(this->label7);
			this->tabPage1->Controls->Add(this->buttonSave);
			this->tabPage1->Controls->Add(this->buttonDelete);
			this->tabPage1->Controls->Add(this->buttonNewProd);
			this->tabPage1->Controls->Add(this->textBoxQuantity);
			this->tabPage1->Controls->Add(this->textBoxCategory);
			this->tabPage1->Controls->Add(this->textBoxPrice);
			this->tabPage1->Controls->Add(this->textBoxColor);
			this->tabPage1->Controls->Add(this->textBoxName);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1092, 640);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Datos";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// buttonEdit
			// 
			this->buttonEdit->BackColor = System::Drawing::Color::Turquoise;
			this->buttonEdit->Location = System::Drawing::Point(826, 505);
			this->buttonEdit->Margin = System::Windows::Forms::Padding(4);
			this->buttonEdit->Name = L"buttonEdit";
			this->buttonEdit->Size = System::Drawing::Size(199, 52);
			this->buttonEdit->TabIndex = 74;
			this->buttonEdit->Text = L"Editar";
			this->buttonEdit->UseVisualStyleBackColor = false;
			this->buttonEdit->Click += gcnew System::EventHandler(this, &Producto::buttonEdit_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label7->Location = System::Drawing::Point(325, 65);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(499, 43);
			this->label7->TabIndex = 73;
			this->label7->Text = L"INGRESE LOS DATOS DEL PRODUCTO";
			this->label7->UseCompatibleTextRendering = true;
			// 
			// buttonSave
			// 
			this->buttonSave->BackColor = System::Drawing::Color::Turquoise;
			this->buttonSave->ForeColor = System::Drawing::Color::Black;
			this->buttonSave->Location = System::Drawing::Point(597, 505);
			this->buttonSave->Margin = System::Windows::Forms::Padding(4);
			this->buttonSave->Name = L"buttonSave";
			this->buttonSave->Size = System::Drawing::Size(199, 52);
			this->buttonSave->TabIndex = 72;
			this->buttonSave->Text = L"Guardar";
			this->buttonSave->UseVisualStyleBackColor = false;
			this->buttonSave->Click += gcnew System::EventHandler(this, &Producto::buttonSave_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->BackColor = System::Drawing::Color::Turquoise;
			this->buttonDelete->Location = System::Drawing::Point(366, 505);
			this->buttonDelete->Margin = System::Windows::Forms::Padding(4);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(199, 52);
			this->buttonDelete->TabIndex = 71;
			this->buttonDelete->Text = L"Eliminar";
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &Producto::buttonDelete_Click);
			// 
			// buttonNewProd
			// 
			this->buttonNewProd->BackColor = System::Drawing::Color::Turquoise;
			this->buttonNewProd->Location = System::Drawing::Point(133, 505);
			this->buttonNewProd->Margin = System::Windows::Forms::Padding(4);
			this->buttonNewProd->Name = L"buttonNewProd";
			this->buttonNewProd->Size = System::Drawing::Size(199, 52);
			this->buttonNewProd->TabIndex = 70;
			this->buttonNewProd->Text = L"Nuevo Producto";
			this->buttonNewProd->UseVisualStyleBackColor = false;
			this->buttonNewProd->Click += gcnew System::EventHandler(this, &Producto::buttonNewProd_Click);
			// 
			// textBoxQuantity
			// 
			this->textBoxQuantity->Location = System::Drawing::Point(298, 428);
			this->textBoxQuantity->Multiline = true;
			this->textBoxQuantity->Name = L"textBoxQuantity";
			this->textBoxQuantity->Size = System::Drawing::Size(612, 37);
			this->textBoxQuantity->TabIndex = 69;
			// 
			// textBoxCategory
			// 
			this->textBoxCategory->Location = System::Drawing::Point(298, 361);
			this->textBoxCategory->Multiline = true;
			this->textBoxCategory->Name = L"textBoxCategory";
			this->textBoxCategory->Size = System::Drawing::Size(612, 37);
			this->textBoxCategory->TabIndex = 68;
			// 
			// textBoxPrice
			// 
			this->textBoxPrice->Location = System::Drawing::Point(298, 293);
			this->textBoxPrice->Multiline = true;
			this->textBoxPrice->Name = L"textBoxPrice";
			this->textBoxPrice->Size = System::Drawing::Size(612, 37);
			this->textBoxPrice->TabIndex = 67;
			// 
			// textBoxColor
			// 
			this->textBoxColor->Location = System::Drawing::Point(298, 222);
			this->textBoxColor->Multiline = true;
			this->textBoxColor->Name = L"textBoxColor";
			this->textBoxColor->Size = System::Drawing::Size(612, 37);
			this->textBoxColor->TabIndex = 66;
			// 
			// textBoxName
			// 
			this->textBoxName->Location = System::Drawing::Point(298, 154);
			this->textBoxName->Multiline = true;
			this->textBoxName->Name = L"textBoxName";
			this->textBoxName->Size = System::Drawing::Size(612, 37);
			this->textBoxName->TabIndex = 65;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label6->Location = System::Drawing::Point(139, 429);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(107, 31);
			this->label6->TabIndex = 64;
			this->label6->Text = L"Cantidad";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label5->Location = System::Drawing::Point(139, 348);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(115, 31);
			this->label5->TabIndex = 63;
			this->label5->Text = L"Categoría";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label4->Location = System::Drawing::Point(139, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(79, 31);
			this->label4->TabIndex = 62;
			this->label4->Text = L"Precio";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label3->Location = System::Drawing::Point(139, 220);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 31);
			this->label3->TabIndex = 61;
			this->label3->Text = L"Color";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label2->Location = System::Drawing::Point(139, 154);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(101, 31);
			this->label2->TabIndex = 60;
			this->label2->Text = L"Nombre";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->buttonSearch);
			this->tabPage2->Controls->Add(this->textBoxSearch);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->dataGridViewProduct);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1092, 640);
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
			this->buttonSearch->Location = System::Drawing::Point(151, 107);
			this->buttonSearch->Name = L"buttonSearch";
			this->buttonSearch->Size = System::Drawing::Size(127, 43);
			this->buttonSearch->TabIndex = 87;
			this->buttonSearch->Text = L"Buscar";
			this->buttonSearch->UseVisualStyleBackColor = true;
			this->buttonSearch->Click += gcnew System::EventHandler(this, &Producto::buttonSearch_Click);
			// 
			// textBoxSearch
			// 
			this->textBoxSearch->Location = System::Drawing::Point(296, 119);
			this->textBoxSearch->Name = L"textBoxSearch";
			this->textBoxSearch->Size = System::Drawing::Size(589, 22);
			this->textBoxSearch->TabIndex = 86;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->label1->Location = System::Drawing::Point(471, 49);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(142, 43);
			this->label1->TabIndex = 85;
			this->label1->Text = L"Productos";
			this->label1->UseCompatibleTextRendering = true;
			// 
			// dataGridViewProduct
			// 
			this->dataGridViewProduct->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewProduct->Location = System::Drawing::Point(43, 195);
			this->dataGridViewProduct->Name = L"dataGridViewProduct";
			this->dataGridViewProduct->RowHeadersWidth = 51;
			this->dataGridViewProduct->RowTemplate->Height = 24;
			this->dataGridViewProduct->Size = System::Drawing::Size(1010, 409);
			this->dataGridViewProduct->TabIndex = 0;
			this->dataGridViewProduct->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Producto::dataGridViewProduct_CellContentClick);
			// 
			// Producto
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1098, 667);
			this->Controls->Add(this->tabControl1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Producto";
			this->Text = L"Producto";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewProduct))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void tabPage2_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void tabControl1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->tabControl1->SelectedTab == this->tabPage2) {
			try {
				String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
				DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

				DataTable^ productos = dbManager->SelectAllProductsModule();
				if (productos->Rows->Count > 0) {
					this->dataGridViewProduct->DataSource = productos;
				}
				else {
					MessageBox::Show("No categories found", "Load Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	};

	private: int productId;

	private: System::Void dataGridViewProduct_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (e->RowIndex >= 0 && e->ColumnIndex >= 0) {
			DataGridViewRow^ selectedRow = this->dataGridViewProduct->Rows[e->RowIndex];

			productId = Convert::ToInt32(selectedRow->Cells["ProductID"]->Value);
			MessageBox::Show(productId.ToString());


			try {
				String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
				DatabaseManager^ dbManager = gcnew DatabaseManager(connString);
				Product^ product = dbManager->GetProductById(productId);

				tabPage1->Show();
				tabControl1->SelectTab(tabPage1);

				textBoxName->Text = product->ProductName;
				textBoxColor->Text = product->ProductColor;
				textBoxPrice->Text = product->ProductPrice.ToString();
				textBoxCategory->Text = product->CategoryID.ToString();
				textBoxQuantity->Text = product->ProductQuantity.ToString();

			}
			catch (Exception^ ex) {
				MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
	}

	private: System::Void Producto_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void buttonSearch_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ searchQuery = this->textBoxSearch->Text;
		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			DataTable^ dt;

			if (searchQuery->Trim()->Length == 0) {
				dt = dbManager->SelectAllProductsModule();
			}
			else {
				dt = dbManager->SearchProductsModule(searchQuery);
			}

			if (dt->Rows->Count > 0) {
				this->dataGridViewProduct->DataSource = dt;
			}
			else {
				MessageBox::Show("No matching records found.", "No Data", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		};
	}




	private: System::Void buttonNewProd_Click(System::Object^ sender, System::EventArgs^ e) {
		textBoxName->Text = "";
		textBoxColor->Text = "";
		textBoxPrice->Text = "";
		textBoxCategory->Text = "";
		textBoxQuantity->Text = "";
	}


	private: System::Void buttonDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int ProductId = this->productId;
		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			if (dbManager->DeleteProduct(ProductId)) {
				MessageBox::Show("Product deleted successfully", "Delete Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->textBoxName->Text = "";
				this->textBoxColor->Text = "";
				this->textBoxPrice->Text = "";
				this->textBoxCategory->Text = "";
				this->textBoxQuantity->Text = "";
				buttonSearch_Click(sender, e);
			}
			else {
				MessageBox::Show("An error occurred while deleting the product", "Delete Error", MessageBoxButtons::OK, MessageBoxIcon::Error);

			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	private: System::Void buttonSave_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ productName = this->textBoxName->Text;
		String^ productColor = this->textBoxColor->Text;
		double productPrice = Convert::ToDouble(this->textBoxPrice->Text);
		int CategoryID = Convert::ToInt32(this->textBoxCategory->Text);
		int productQuantity = Convert::ToInt32(this->textBoxQuantity->Text);

		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			if (productId == 0) {
				if (dbManager->CreateNewProduct(productName, productColor, productPrice, CategoryID, productQuantity)) {
					MessageBox::Show("Product created successfully", "Create Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
					this->textBoxName->Text = "";
					this->textBoxColor->Text = "";
					this->textBoxPrice->Text = "";
					this->textBoxCategory->Text = "";
					this->textBoxQuantity->Text = "";
					buttonSearch_Click(sender, e);
				}
				else {
					MessageBox::Show("An error occurred while creating the product", "Create Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}

		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}


	private: System::Void buttonEdit_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ productName = this->textBoxName->Text;
		String^ productColor = this->textBoxColor->Text;
		double productPrice = Convert::ToDouble(this->textBoxPrice->Text);
		int CategoryID = Convert::ToInt32(this->textBoxCategory->Text);
		int productQuantity = Convert::ToInt32(this->textBoxQuantity->Text);

		try {
			String^ connString = "Server=BDStock.mssql.somee.com;Database=BDStock;User Id=Shiroushi_SQLLogin_1;Password=kkf6dvu3nd;";
			DatabaseManager^ dbManager = gcnew DatabaseManager(connString);

			if (dbManager->EditProduct(productName, productColor, productPrice, CategoryID, productQuantity)) {
				MessageBox::Show("Product edited successfully", "Edit Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				this->textBoxName->Text = "";
				this->textBoxColor->Text = "";
				this->textBoxPrice->Text = "";
				this->textBoxCategory->Text = "";
				this->textBoxQuantity->Text = "";
				buttonSearch_Click(sender, e);
			}
			else {
				MessageBox::Show("An error occurred while editing the product", "Edit Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("An error occurred: " + ex->Message, "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}
	};
}