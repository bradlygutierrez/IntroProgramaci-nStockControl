#pragma once

namespace StockControl {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ LblUsuario;
	private: System::Windows::Forms::TextBox^ TxtUsuario;
	private: System::Windows::Forms::Label^ LblContrase�a;
	private: System::Windows::Forms::TextBox^ TxtContrase�a;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;


	protected:

	protected:

	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			this->LblUsuario = (gcnew System::Windows::Forms::Label());
			this->TxtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->LblContrase�a = (gcnew System::Windows::Forms::Label());
			this->TxtContrase�a = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// LblUsuario
			// 
			this->LblUsuario->AutoSize = true;
			this->LblUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblUsuario->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->LblUsuario->Location = System::Drawing::Point(35, 33);
			this->LblUsuario->Name = L"LblUsuario";
			this->LblUsuario->Size = System::Drawing::Size(103, 29);
			this->LblUsuario->TabIndex = 0;
			this->LblUsuario->Text = L"Usuario";
			this->LblUsuario->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// TxtUsuario
			// 
			this->TxtUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtUsuario->Location = System::Drawing::Point(40, 81);
			this->TxtUsuario->Name = L"TxtUsuario";
			this->TxtUsuario->Size = System::Drawing::Size(318, 26);
			this->TxtUsuario->TabIndex = 1;
			// 
			// LblContrase�a
			// 
			this->LblContrase�a->AutoSize = true;
			this->LblContrase�a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LblContrase�a->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->LblContrase�a->Location = System::Drawing::Point(40, 146);
			this->LblContrase�a->Name = L"LblContrase�a";
			this->LblContrase�a->Size = System::Drawing::Size(146, 29);
			this->LblContrase�a->TabIndex = 2;
			this->LblContrase�a->Text = L"Contrase�a";
			this->LblContrase�a->Click += gcnew System::EventHandler(this, &MyForm::label1_Click_1);
			// 
			// TxtContrase�a
			// 
			this->TxtContrase�a->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TxtContrase�a->Location = System::Drawing::Point(45, 202);
			this->TxtContrase�a->Name = L"TxtContrase�a";
			this->TxtContrase�a->Size = System::Drawing::Size(313, 26);
			this->TxtContrase�a->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(1)), static_cast<System::Int32>(static_cast<System::Byte>(97)),
				static_cast<System::Int32>(static_cast<System::Byte>(112)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->button1->Location = System::Drawing::Point(115, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 46);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Iniciar Sesi�n";
			this->button1->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(94, 336);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 16);
			this->label1->TabIndex = 5;
			this->label1->Text = L"�No tiene cuenta\? Registrese";
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Location = System::Drawing::Point(273, 336);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(33, 16);
			this->linkLabel1->TabIndex = 6;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"aqu�";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(407, 433);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->TxtContrase�a);
			this->Controls->Add(this->LblContrase�a);
			this->Controls->Add(this->TxtUsuario);
			this->Controls->Add(this->LblUsuario);
			this->Name = L"MyForm";
			this->Text = L"Inicio de Sesi�n";
			this->ResumeLayout(false);
			this->PerformLayout();

		}

}
