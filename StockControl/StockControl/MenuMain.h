#pragma once
#include "Producto.h"
#include "Entrada.h"
#include "Categoría.h"
#include "Salida.h"
#include "Usuario.h"


namespace StockControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MenuMain
	/// </summary>
	public ref class MenuMain : public System::Windows::Forms::Form
	{
	public:
		MenuMain(void)
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
		~MenuMain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ sidebarContainer;
	protected:
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ menuButton;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Button^ btnProductos;

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnEntradas;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ btnSalidas;

	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ btnUsuarios;

	private: System::Windows::Forms::Panel^ panel8;
	private: System::Windows::Forms::Button^ btnCategorías;

	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Button^ btnConfiguracion;

	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Panel^ mainPanel;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuMain::typeid));
			this->sidebarContainer = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuButton = (gcnew System::Windows::Forms::PictureBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnProductos = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnEntradas = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->btnSalidas = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->btnUsuarios = (gcnew System::Windows::Forms::Button());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->btnCategorías = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->btnConfiguracion = (gcnew System::Windows::Forms::Button());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->mainPanel = (gcnew System::Windows::Forms::Panel());
			this->sidebarContainer->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuButton))->BeginInit();
			this->panel5->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->SuspendLayout();
			// 
			// sidebarContainer
			// 
			this->sidebarContainer->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->sidebarContainer->Controls->Add(this->panel4);
			this->sidebarContainer->Controls->Add(this->panel5);
			this->sidebarContainer->Controls->Add(this->panel1);
			this->sidebarContainer->Controls->Add(this->panel2);
			this->sidebarContainer->Controls->Add(this->panel3);
			this->sidebarContainer->Controls->Add(this->panel8);
			this->sidebarContainer->Controls->Add(this->panel6);
			this->sidebarContainer->Controls->Add(this->panel7);
			this->sidebarContainer->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebarContainer->Location = System::Drawing::Point(0, 0);
			this->sidebarContainer->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->sidebarContainer->MaximumSize = System::Drawing::Size(231, 700);
			this->sidebarContainer->MinimumSize = System::Drawing::Size(55, 614);
			this->sidebarContainer->Name = L"sidebarContainer";
			this->sidebarContainer->Size = System::Drawing::Size(231, 653);
			this->sidebarContainer->TabIndex = 1;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->label1);
			this->panel4->Controls->Add(this->menuButton);
			this->panel4->Location = System::Drawing::Point(3, 4);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(225, 80);
			this->panel4->TabIndex = 3;
			this->panel4->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MenuMain::panel4_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(86, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 23);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Menú";
			// 
			// menuButton
			// 
			this->menuButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->menuButton->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuButton.Image")));
			this->menuButton->Location = System::Drawing::Point(6, 24);
			this->menuButton->Name = L"menuButton";
			this->menuButton->Size = System::Drawing::Size(40, 36);
			this->menuButton->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->menuButton->TabIndex = 0;
			this->menuButton->TabStop = false;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->btnProductos);
			this->panel5->Location = System::Drawing::Point(3, 92);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(228, 61);
			this->panel5->TabIndex = 3;
			// 
			// btnProductos
			// 
			this->btnProductos->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnProductos->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnProductos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnProductos->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnProductos->ForeColor = System::Drawing::Color::White;
			this->btnProductos->Location = System::Drawing::Point(0, 0);
			this->btnProductos->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnProductos->Name = L"btnProductos";
			this->btnProductos->Size = System::Drawing::Size(225, 61);
			this->btnProductos->TabIndex = 4;
			this->btnProductos->Text = L"Productos";
			this->btnProductos->UseVisualStyleBackColor = true;
			this->btnProductos->Click += gcnew System::EventHandler(this, &MenuMain::btnProductos_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnEntradas);
			this->panel1->Location = System::Drawing::Point(3, 161);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(228, 61);
			this->panel1->TabIndex = 5;
			// 
			// btnEntradas
			// 
			this->btnEntradas->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnEntradas->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnEntradas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEntradas->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEntradas->ForeColor = System::Drawing::Color::White;
			this->btnEntradas->Location = System::Drawing::Point(0, 0);
			this->btnEntradas->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnEntradas->Name = L"btnEntradas";
			this->btnEntradas->Size = System::Drawing::Size(225, 61);
			this->btnEntradas->TabIndex = 4;
			this->btnEntradas->Text = L"Entradas";
			this->btnEntradas->UseVisualStyleBackColor = true;
			this->btnEntradas->Click += gcnew System::EventHandler(this, &MenuMain::btnEntradas_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->btnSalidas);
			this->panel2->Location = System::Drawing::Point(3, 230);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(228, 61);
			this->panel2->TabIndex = 6;
			// 
			// btnSalidas
			// 
			this->btnSalidas->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnSalidas->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnSalidas->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalidas->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalidas->ForeColor = System::Drawing::Color::White;
			this->btnSalidas->Location = System::Drawing::Point(0, 0);
			this->btnSalidas->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnSalidas->Name = L"btnSalidas";
			this->btnSalidas->Size = System::Drawing::Size(225, 61);
			this->btnSalidas->TabIndex = 4;
			this->btnSalidas->Text = L"Salidas";
			this->btnSalidas->UseVisualStyleBackColor = true;
			this->btnSalidas->Click += gcnew System::EventHandler(this, &MenuMain::btnSalidas_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->btnUsuarios);
			this->panel3->Location = System::Drawing::Point(3, 299);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(228, 61);
			this->panel3->TabIndex = 6;
			// 
			// btnUsuarios
			// 
			this->btnUsuarios->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnUsuarios->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnUsuarios->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnUsuarios->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnUsuarios->ForeColor = System::Drawing::Color::White;
			this->btnUsuarios->Location = System::Drawing::Point(0, 0);
			this->btnUsuarios->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnUsuarios->Name = L"btnUsuarios";
			this->btnUsuarios->Size = System::Drawing::Size(225, 61);
			this->btnUsuarios->TabIndex = 4;
			this->btnUsuarios->Text = L"Usuarios";
			this->btnUsuarios->UseVisualStyleBackColor = true;
			this->btnUsuarios->Click += gcnew System::EventHandler(this, &MenuMain::btnUsuarios_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->btnCategorías);
			this->panel8->Location = System::Drawing::Point(3, 368);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(228, 61);
			this->panel8->TabIndex = 9;
			// 
			// btnCategorías
			// 
			this->btnCategorías->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnCategorías->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnCategorías->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCategorías->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCategorías->ForeColor = System::Drawing::Color::White;
			this->btnCategorías->Location = System::Drawing::Point(0, 0);
			this->btnCategorías->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnCategorías->Name = L"btnCategorías";
			this->btnCategorías->Size = System::Drawing::Size(225, 61);
			this->btnCategorías->TabIndex = 4;
			this->btnCategorías->Text = L"Categorías";
			this->btnCategorías->UseVisualStyleBackColor = true;
			this->btnCategorías->Click += gcnew System::EventHandler(this, &MenuMain::btnCategorías_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->btnConfiguracion);
			this->panel6->Location = System::Drawing::Point(3, 437);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(228, 61);
			this->panel6->TabIndex = 7;
			// 
			// btnConfiguracion
			// 
			this->btnConfiguracion->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnConfiguracion->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnConfiguracion->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConfiguracion->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfiguracion->ForeColor = System::Drawing::Color::White;
			this->btnConfiguracion->Location = System::Drawing::Point(0, 0);
			this->btnConfiguracion->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnConfiguracion->Name = L"btnConfiguracion";
			this->btnConfiguracion->Size = System::Drawing::Size(225, 61);
			this->btnConfiguracion->TabIndex = 4;
			this->btnConfiguracion->Text = L"Configuración";
			this->btnConfiguracion->UseVisualStyleBackColor = true;
			this->btnConfiguracion->Click += gcnew System::EventHandler(this, &MenuMain::btnConfiguracion_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->btnSalir);
			this->panel7->Location = System::Drawing::Point(3, 506);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(228, 61);
			this->panel7->TabIndex = 8;
			// 
			// btnSalir
			// 
			this->btnSalir->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnSalir->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnSalir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->ForeColor = System::Drawing::Color::White;
			this->btnSalir->Location = System::Drawing::Point(0, 0);
			this->btnSalir->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(225, 61);
			this->btnSalir->TabIndex = 4;
			this->btnSalir->Text = L"Salir";
			this->btnSalir->UseVisualStyleBackColor = true;
			this->btnSalir->Click += gcnew System::EventHandler(this, &MenuMain::btnSalir_Click);
			// 
			// mainPanel
			// 
			this->mainPanel->AccessibleName = L"mainPanel";
			this->mainPanel->Location = System::Drawing::Point(237, 4);
			this->mainPanel->Name = L"mainPanel";
			this->mainPanel->Size = System::Drawing::Size(1108, 653);
			this->mainPanel->TabIndex = 2;
			// 
			// MenuMain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1347, 653);
			this->Controls->Add(this->mainPanel);
			this->Controls->Add(this->sidebarContainer);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedToolWindow;
			this->Name = L"MenuMain";
			this->Text = L"MenuMain";
			this->Load += gcnew System::EventHandler(this, &MenuMain::MenuMain_Load);
			this->sidebarContainer->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->menuButton))->EndInit();
			this->panel5->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MenuMain_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	public: System::Void loadForm(Form^ form) {
		if (this->mainPanel->Controls->Count > 0) {
			this->mainPanel->Controls->RemoveAt(0);
		}

		form->TopLevel = false;
		form->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
		form->Dock = DockStyle::Fill;
		this->mainPanel->Controls->Add(form);
		this->mainPanel->Tag = form;
		form->Show();
	}

	private: System::Void btnProductos_Click(System::Object^ sender, System::EventArgs^ e) {
		Producto^ producto = gcnew Producto();
		loadForm(producto);
	}
	private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	
	}
	private: System::Void btnEntradas_Click(System::Object^ sender, System::EventArgs^ e) {
		Entrada^ entrada = gcnew Entrada();
		loadForm(entrada);
	}
	private: System::Void btnSalidas_Click(System::Object^ sender, System::EventArgs^ e) {
		Salida^ salida = gcnew Salida(); 
		loadForm(salida);
	}
	
	private: System::Void btnUsuarios_Click(System::Object^ sender, System::EventArgs^ e) {
		Usuario^ usuario = gcnew Usuario();
		loadForm(usuario);
	}

	private: System::Void btnCategorías_Click(System::Object^ sender, System::EventArgs^ e) {
		Categoría^ categoria = gcnew Categoría();
		loadForm(categoria);
	}
	private: System::Void btnConfiguracion_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void btnSalir_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
