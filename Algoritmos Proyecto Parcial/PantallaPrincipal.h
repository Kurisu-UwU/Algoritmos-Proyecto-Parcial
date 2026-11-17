#pragma once
#include "NivelPunk.h"
#include "NivelMiguel.h"
#include "NivelMiles.h"

namespace AlgoritmosProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de PantallaPrincipal
	/// </summary>
	public ref class PantallaPrincipal : public System::Windows::Forms::Form
	{
	public:
		PantallaPrincipal(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~PantallaPrincipal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timerPantalla;
	private: System::Windows::Forms::Panel^ pnlPrincipal;

	private: System::Windows::Forms::Button^ btnJugar;
	private: System::Windows::Forms::Button^ btnSalir;
	private: System::Windows::Forms::Button^ btnCreditos;
	private: System::Windows::Forms::Button^ btnOpciones;
	private: System::Windows::Forms::Panel^ pnlPersonaje;
	private: System::Windows::Forms::Button^ btnMiles;
	private: System::Windows::Forms::Button^ btnAtras;




	private: System::Windows::Forms::Button^ btnMiguel;
	private: System::Windows::Forms::Button^ btnPunk;


	protected:




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timerPantalla = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlPrincipal = (gcnew System::Windows::Forms::Panel());
			this->btnJugar = (gcnew System::Windows::Forms::Button());
			this->btnSalir = (gcnew System::Windows::Forms::Button());
			this->btnCreditos = (gcnew System::Windows::Forms::Button());
			this->btnOpciones = (gcnew System::Windows::Forms::Button());
			this->pnlPersonaje = (gcnew System::Windows::Forms::Panel());
			this->btnMiles = (gcnew System::Windows::Forms::Button());
			this->btnAtras = (gcnew System::Windows::Forms::Button());
			this->btnMiguel = (gcnew System::Windows::Forms::Button());
			this->btnPunk = (gcnew System::Windows::Forms::Button());
			this->pnlPrincipal->SuspendLayout();
			this->pnlPersonaje->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlPrincipal
			// 
			this->pnlPrincipal->Controls->Add(this->btnJugar);
			this->pnlPrincipal->Controls->Add(this->btnSalir);
			this->pnlPrincipal->Controls->Add(this->btnCreditos);
			this->pnlPrincipal->Controls->Add(this->btnOpciones);
			this->pnlPrincipal->Cursor = System::Windows::Forms::Cursors::Default;
			this->pnlPrincipal->Location = System::Drawing::Point(10, 11);
			this->pnlPrincipal->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnlPrincipal->Name = L"pnlPrincipal";
			this->pnlPrincipal->Size = System::Drawing::Size(1054, 329);
			this->pnlPrincipal->TabIndex = 4;
			// 
			// btnJugar
			// 
			this->btnJugar->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnJugar->Location = System::Drawing::Point(790, 28);
			this->btnJugar->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnJugar->Name = L"btnJugar";
			this->btnJugar->Size = System::Drawing::Size(201, 50);
			this->btnJugar->TabIndex = 0;
			this->btnJugar->Text = L"JUGAR";
			this->btnJugar->UseVisualStyleBackColor = true;
			this->btnJugar->Click += gcnew System::EventHandler(this, &PantallaPrincipal::btnJugar_Click);
			// 
			// btnSalir
			// 
			this->btnSalir->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSalir->Location = System::Drawing::Point(790, 248);
			this->btnSalir->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnSalir->Name = L"btnSalir";
			this->btnSalir->Size = System::Drawing::Size(201, 50);
			this->btnSalir->TabIndex = 3;
			this->btnSalir->Text = L"SALIR";
			this->btnSalir->UseVisualStyleBackColor = true;
			// 
			// btnCreditos
			// 
			this->btnCreditos->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCreditos->Location = System::Drawing::Point(790, 102);
			this->btnCreditos->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnCreditos->Name = L"btnCreditos";
			this->btnCreditos->Size = System::Drawing::Size(201, 50);
			this->btnCreditos->TabIndex = 1;
			this->btnCreditos->Text = L"CRÉDITOS";
			this->btnCreditos->UseVisualStyleBackColor = true;
			// 
			// btnOpciones
			// 
			this->btnOpciones->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnOpciones->Location = System::Drawing::Point(790, 175);
			this->btnOpciones->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnOpciones->Name = L"btnOpciones";
			this->btnOpciones->Size = System::Drawing::Size(201, 50);
			this->btnOpciones->TabIndex = 2;
			this->btnOpciones->Text = L"OPCIONES";
			this->btnOpciones->UseVisualStyleBackColor = true;
			// 
			// pnlPersonaje
			// 
			this->pnlPersonaje->Controls->Add(this->btnMiles);
			this->pnlPersonaje->Controls->Add(this->btnAtras);
			this->pnlPersonaje->Controls->Add(this->btnMiguel);
			this->pnlPersonaje->Controls->Add(this->btnPunk);
			this->pnlPersonaje->Location = System::Drawing::Point(10, 10);
			this->pnlPersonaje->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnlPersonaje->Name = L"pnlPersonaje";
			this->pnlPersonaje->Size = System::Drawing::Size(1054, 339);
			this->pnlPersonaje->TabIndex = 5;
			this->pnlPersonaje->Visible = false;
			// 
			// btnMiles
			// 
			this->btnMiles->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMiles->Location = System::Drawing::Point(75, 244);
			this->btnMiles->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnMiles->Name = L"btnMiles";
			this->btnMiles->Size = System::Drawing::Size(201, 50);
			this->btnMiles->TabIndex = 0;
			this->btnMiles->Text = L"MILES MORALES";
			this->btnMiles->UseVisualStyleBackColor = true;
			this->btnMiles->Click += gcnew System::EventHandler(this, &PantallaPrincipal::btnMiles_Click);
			// 
			// btnAtras
			// 
			this->btnAtras->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAtras->Location = System::Drawing::Point(900, 244);
			this->btnAtras->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnAtras->Name = L"btnAtras";
			this->btnAtras->Size = System::Drawing::Size(125, 50);
			this->btnAtras->TabIndex = 3;
			this->btnAtras->Text = L"ATRÁS";
			this->btnAtras->UseVisualStyleBackColor = true;
			this->btnAtras->Click += gcnew System::EventHandler(this, &PantallaPrincipal::btnAtras_Click);
			// 
			// btnMiguel
			// 
			this->btnMiguel->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMiguel->Location = System::Drawing::Point(338, 244);
			this->btnMiguel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnMiguel->Name = L"btnMiguel";
			this->btnMiguel->Size = System::Drawing::Size(201, 50);
			this->btnMiguel->TabIndex = 1;
			this->btnMiguel->Text = L"MIGUEL O\'HARA";
			this->btnMiguel->UseVisualStyleBackColor = true;
			// 
			// btnPunk
			// 
			this->btnPunk->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 15, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPunk->Location = System::Drawing::Point(600, 244);
			this->btnPunk->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->btnPunk->Name = L"btnPunk";
			this->btnPunk->Size = System::Drawing::Size(201, 50);
			this->btnPunk->TabIndex = 2;
			this->btnPunk->Text = L"SPIDER PUNK";
			this->btnPunk->UseVisualStyleBackColor = true;
			this->btnPunk->Click += gcnew System::EventHandler(this, &PantallaPrincipal::btnPunk_Click);
			// 
			// PantallaPrincipal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1081, 358);
			this->Controls->Add(this->pnlPersonaje);
			this->Controls->Add(this->pnlPrincipal);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"PantallaPrincipal";
			this->Text = L"PantallaPrincipal";
			this->Load += gcnew System::EventHandler(this, &PantallaPrincipal::PantallaPrincipal_Load);
			this->pnlPrincipal->ResumeLayout(false);
			this->pnlPersonaje->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void PantallaPrincipal_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnJugar_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlPrincipal->Visible = false;
	pnlPersonaje->Visible = true;
}
private: System::Void btnAtras_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlPrincipal->Visible = true;
	pnlPersonaje->Visible = false;
}
private: System::Void btnPunk_Click(System::Object^ sender, System::EventArgs^ e) {
	NivelPunk^ frm = gcnew NivelPunk();
	frm->ShowDialog();
}
private: System::Void btnMiles_Click(System::Object^ sender, System::EventArgs^ e) {
	NivelMiles^ frm = gcnew NivelMiles();
	frm->ShowDialog();
}
};
}
