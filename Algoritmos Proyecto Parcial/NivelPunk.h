#pragma once

namespace AlgoritmosProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NivelPunk
	/// </summary>
	public ref class NivelPunk : public System::Windows::Forms::Form
	{
	public:
		NivelPunk(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

			gr = pnlJuego->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(gr, pnlJuego->ClientRectangle);

			bmpMapa1 = gcnew Bitmap("Imagenes/PunkMapa1.png");

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NivelPunk()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ pnlDeControl;
	protected:
	private: System::Windows::Forms::Panel^ pnlJuego;
	private: System::Windows::Forms::Timer^ timerJuego;

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>






		Graphics^ gr;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;
		Bitmap^ bmpMapa1;





#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pnlDeControl = (gcnew System::Windows::Forms::Panel());
			this->pnlJuego = (gcnew System::Windows::Forms::Panel());
			this->timerJuego = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// pnlDeControl
			// 
			this->pnlDeControl->Location = System::Drawing::Point(12, 12);
			this->pnlDeControl->Name = L"pnlDeControl";
			this->pnlDeControl->Size = System::Drawing::Size(1412, 80);
			this->pnlDeControl->TabIndex = 0;
			// 
			// pnlJuego
			// 
			this->pnlJuego->Location = System::Drawing::Point(12, 98);
			this->pnlJuego->Name = L"pnlJuego";
			this->pnlJuego->Size = System::Drawing::Size(1412, 338);
			this->pnlJuego->TabIndex = 1;
			// 
			// timerJuego
			// 
			this->timerJuego->Enabled = true;
			this->timerJuego->Tick += gcnew System::EventHandler(this, &NivelPunk::timerJuego_Tick);
			// 
			// NivelPunk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1436, 442);
			this->Controls->Add(this->pnlJuego);
			this->Controls->Add(this->pnlDeControl);
			this->Name = L"NivelPunk";
			this->Text = L"NivelPunk";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &NivelPunk::NivelPunk_FormClosing);
			this->Load += gcnew System::EventHandler(this, &NivelPunk::NivelPunk_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void NivelPunk_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timerJuego_Tick(System::Object^ sender, System::EventArgs^ e) {


		buffer->Graphics->DrawImage(bmpMapa1, 0, 0, bmpMapa1->Width * 1.0, bmpMapa1->Height * 1.0);







		if (gr != nullptr) {
			buffer->Render(gr);
		}
	}
private: System::Void NivelPunk_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	timerJuego->Enabled = false;
}
};
}
