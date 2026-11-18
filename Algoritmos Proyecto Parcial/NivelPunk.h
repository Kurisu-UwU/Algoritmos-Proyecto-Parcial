#pragma once
#include "Protagonistas.h"

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
		Bitmap^ bmpPunk;
		Protagonista* punk;




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
			this->pnlDeControl->Size = System::Drawing::Size(1300, 80);
			this->pnlDeControl->TabIndex = 0;
			// 
			// pnlJuego
			// 
			this->pnlJuego->Location = System::Drawing::Point(12, 98);
			this->pnlJuego->Name = L"pnlJuego";
			this->pnlJuego->Size = System::Drawing::Size(1300, 720);
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
			this->ClientSize = System::Drawing::Size(1326, 837);
			this->Controls->Add(this->pnlJuego);
			this->Controls->Add(this->pnlDeControl);
			this->Name = L"NivelPunk";
			this->Text = L"NivelPunk";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &NivelPunk::NivelPunk_FormClosing);
			this->Load += gcnew System::EventHandler(this, &NivelPunk::NivelPunk_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &NivelPunk::NivelPunk_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Void NivelPunk_Load(System::Object^ sender, System::EventArgs^ e) {
			// 1. Inicializamos los gráficos cuando el panel ya tiene un tamaño real (1300x720)
			gr = pnlJuego->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(gr, pnlJuego->ClientRectangle);

			// 2. Cargamos las imágenes con seguridad
			bmpMapa1 = gcnew Bitmap("Imagenes/PunkMapa1.png");
			bmpPunk = gcnew Bitmap("Imagenes/SpiderPunk.png");

			// 3. Creamos el objeto protagonista aquí para asegurarnos de que todo está listo
			punk = new Protagonista(100, 100, 64, 64, 100, 2, 2, 100, 100, 0, "Punk", 'S', 0, 0);
		}

	private: System::Void timerJuego_Tick(System::Object^ sender, System::EventArgs^ e) {

		buffer->Graphics->DrawImage(bmpMapa1, 0, 0, pnlJuego->Width * 1.0, pnlJuego->Height * 1.0);

		punk->Dibujar(buffer->Graphics, bmpPunk);

		buffer->Render(gr);
	}

private: System::Void NivelPunk_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	timerJuego->Enabled = false;
}
private: System::Void NivelPunk_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	switch (e->KeyCode) {
	case Keys::A:
		punk->move(buffer->Graphics, 'A'); break;
	case Keys::D:
		punk->move(buffer->Graphics, 'D'); break;
	case Keys::S:
		punk->move(buffer->Graphics, 'S'); break;
	case Keys::W:
		punk->move(buffer->Graphics, 'W'); break;
	}

}
};
}
