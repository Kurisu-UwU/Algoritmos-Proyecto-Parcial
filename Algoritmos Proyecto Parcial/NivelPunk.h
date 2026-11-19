#pragma once
#include "SpiderPunk.h"
#include "Controladora.h"
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
	private: System::Windows::Forms::Panel^ pnlJuego1;
	protected:

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
		Controladora* controladora;
	private: System::Windows::Forms::Panel^ pnlJuego2;
	private: System::Windows::Forms::Panel^ pnlJuego3;
	private: System::Windows::Forms::Panel^ pnlJuegoMusical;







	private: System::Windows::Forms::Button^ btnPunk1;

	private: System::Windows::Forms::Button^ btnPunk3;
	private: System::Windows::Forms::Button^ btnPunk2;

	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button4;

	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button1;
		   SpiderPunk* punk;




#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->pnlDeControl = (gcnew System::Windows::Forms::Panel());
			this->pnlJuego1 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->timerJuego = (gcnew System::Windows::Forms::Timer(this->components));
			this->pnlJuego2 = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->pnlJuego3 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pnlJuegoMusical = (gcnew System::Windows::Forms::Panel());
			this->btnPunk3 = (gcnew System::Windows::Forms::Button());
			this->btnPunk2 = (gcnew System::Windows::Forms::Button());
			this->btnPunk1 = (gcnew System::Windows::Forms::Button());
			this->pnlJuego1->SuspendLayout();
			this->pnlJuego2->SuspendLayout();
			this->pnlJuego3->SuspendLayout();
			this->pnlJuegoMusical->SuspendLayout();
			this->SuspendLayout();
			// 
			// pnlDeControl
			// 
			this->pnlDeControl->Location = System::Drawing::Point(9, 10);
			this->pnlDeControl->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->pnlDeControl->Name = L"pnlDeControl";
			this->pnlDeControl->Size = System::Drawing::Size(975, 65);
			this->pnlDeControl->TabIndex = 0;
			// 
			// pnlJuego1
			// 
			this->pnlJuego1->Controls->Add(this->button10);
			this->pnlJuego1->Controls->Add(this->button11);
			this->pnlJuego1->Controls->Add(this->button12);
			this->pnlJuego1->Location = System::Drawing::Point(12, 98);
			this->pnlJuego1->Name = L"pnlJuego1";
			this->pnlJuego1->Size = System::Drawing::Size(1300, 720);
			this->pnlJuego1->TabIndex = 1;
			this->pnlJuego1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &NivelPunk::pnlJuego1_Paint);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(1035, 16);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(75, 23);
			this->button10->TabIndex = 10;
			this->button10->Text = L"Punk 3";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &NivelPunk::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(1116, 16);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(75, 23);
			this->button11->TabIndex = 9;
			this->button11->Text = L"Punk 2";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &NivelPunk::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(954, 16);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(75, 23);
			this->button12->TabIndex = 11;
			this->button12->Text = L"Punk m";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &NivelPunk::button12_Click);
			// 
			// timerJuego
			// 
			this->timerJuego->Enabled = true;
			this->timerJuego->Tick += gcnew System::EventHandler(this, &NivelPunk::timerJuego_Tick);
			// 
			// pnlJuego2
			// 
			this->pnlJuego2->Controls->Add(this->button5);
			this->pnlJuego2->Controls->Add(this->button6);
			this->pnlJuego2->Controls->Add(this->button8);
			this->pnlJuego2->Location = System::Drawing::Point(12, 98);
			this->pnlJuego2->Name = L"pnlJuego2";
			this->pnlJuego2->Size = System::Drawing::Size(1300, 720);
			this->pnlJuego2->TabIndex = 2;
			this->pnlJuego2->Visible = false;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(1197, 16);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Punk 1";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &NivelPunk::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(1035, 16);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Punk 3";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &NivelPunk::button6_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(954, 16);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 11;
			this->button8->Text = L"Punk m";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &NivelPunk::button8_Click);
			// 
			// pnlJuego3
			// 
			this->pnlJuego3->Controls->Add(this->button4);
			this->pnlJuego3->Controls->Add(this->button3);
			this->pnlJuego3->Controls->Add(this->button1);
			this->pnlJuego3->Location = System::Drawing::Point(12, 98);
			this->pnlJuego3->Name = L"pnlJuego3";
			this->pnlJuego3->Size = System::Drawing::Size(1300, 720);
			this->pnlJuego3->TabIndex = 3;
			this->pnlJuego3->Visible = false;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(1197, 16);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Punk 1";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &NivelPunk::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(1116, 16);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"Punk 2";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &NivelPunk::button3_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(954, 16);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Punk m";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &NivelPunk::button1_Click);
			// 
			// pnlJuegoMusical
			// 
			this->pnlJuegoMusical->Controls->Add(this->btnPunk3);
			this->pnlJuegoMusical->Controls->Add(this->btnPunk2);
			this->pnlJuegoMusical->Controls->Add(this->btnPunk1);
			this->pnlJuegoMusical->Location = System::Drawing::Point(12, 98);
			this->pnlJuegoMusical->Name = L"pnlJuegoMusical";
			this->pnlJuegoMusical->Size = System::Drawing::Size(1300, 720);
			this->pnlJuegoMusical->TabIndex = 4;
			this->pnlJuegoMusical->Visible = false;
			// 
			// btnPunk3
			// 
			this->btnPunk3->Location = System::Drawing::Point(1035, 16);
			this->btnPunk3->Name = L"btnPunk3";
			this->btnPunk3->Size = System::Drawing::Size(75, 23);
			this->btnPunk3->TabIndex = 2;
			this->btnPunk3->Text = L"Punk 3";
			this->btnPunk3->UseVisualStyleBackColor = true;
			this->btnPunk3->Click += gcnew System::EventHandler(this, &NivelPunk::btnPunk3_Click);
			// 
			// btnPunk2
			// 
			this->btnPunk2->Location = System::Drawing::Point(1116, 16);
			this->btnPunk2->Name = L"btnPunk2";
			this->btnPunk2->Size = System::Drawing::Size(75, 23);
			this->btnPunk2->TabIndex = 1;
			this->btnPunk2->Text = L"Punk 2";
			this->btnPunk2->UseVisualStyleBackColor = true;
			this->btnPunk2->Click += gcnew System::EventHandler(this, &NivelPunk::btnPunk2_Click);
			// 
			// btnPunk1
			// 
			this->btnPunk1->Location = System::Drawing::Point(1197, 16);
			this->btnPunk1->Name = L"btnPunk1";
			this->btnPunk1->Size = System::Drawing::Size(75, 23);
			this->btnPunk1->TabIndex = 0;
			this->btnPunk1->Text = L"Punk 1";
			this->btnPunk1->UseVisualStyleBackColor = true;
			this->btnPunk1->Click += gcnew System::EventHandler(this, &NivelPunk::btnPunk1_Click);
			// 
			// NivelPunk
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1326, 837);
			this->Controls->Add(this->pnlJuegoMusical);
			this->Controls->Add(this->pnlJuego1);
			this->Controls->Add(this->pnlJuego2);
			this->Controls->Add(this->pnlJuego3);
			this->Controls->Add(this->pnlDeControl);
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"NivelPunk";
			this->Text = L"NivelPunk";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &NivelPunk::NivelPunk_FormClosing);
			this->Load += gcnew System::EventHandler(this, &NivelPunk::NivelPunk_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &NivelPunk::NivelPunk_KeyDown);
			this->pnlJuego1->ResumeLayout(false);
			this->pnlJuego2->ResumeLayout(false);
			this->pnlJuego3->ResumeLayout(false);
			this->pnlJuegoMusical->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Void NivelPunk_Load(System::Object^ sender, System::EventArgs^ e) {
			// 1. Inicializamos los gráficos cuando el panel ya tiene un tamaño real (1300x720)
			gr = pnlJuego1->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(gr, pnlJuego1->ClientRectangle);

			// 2. Cargamos las imágenes con seguridad
			bmpMapa1 = gcnew Bitmap("Imagenes/PunkMapa1.png");
			bmpPunk = gcnew Bitmap("Imagenes/SpiderPunk.png");

			// 3. Creamos el objeto protagonista aquí para asegurarnos de que todo está listo
			punk = new SpiderPunk(100, 300, 64, 64, 100, 2, 2, 100, 100, 0, "Punk", 'S', 1, 1);
			controladora->GenerarObstaculo(0, 0,0, 200, 200);
		}

	private: System::Void timerJuego_Tick(System::Object^ sender, System::EventArgs^ e) {

		buffer->Graphics->DrawImage(bmpMapa1, 0, 0, pnlJuego1->Width * 1.0, pnlJuego1->Height * 1.0);

		punk->Dibujar(buffer->Graphics, bmpPunk);
		controladora->DibujarObstaculos(buffer->Graphics);
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
private: System::Void pnlJuego1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuego3->Visible = false;
	pnlJuegoMusical->Visible = true;

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuego3->Visible = false;
	pnlJuego2->Visible = true;
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuego3->Visible = false;
	pnlJuego1->Visible = true;
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuego2->Visible = false;
	pnlJuegoMusical->Visible = true;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuego2->Visible = false;
	pnlJuego3->Visible = true;
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuego2->Visible = false;
	pnlJuego1->Visible = true;
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuego1->Visible = false;
	pnlJuegoMusical->Visible = true;
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuego1->Visible = false;
	pnlJuego3->Visible = true;
}
private: System::Void button11_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuego1->Visible = false;
	pnlJuego2->Visible = true;
}
private: System::Void btnPunk3_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuegoMusical->Visible = false;
	pnlJuego3->Visible = true;
}
private: System::Void btnPunk2_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuegoMusical->Visible = false;
	pnlJuego2->Visible = true;
}
private: System::Void btnPunk1_Click(System::Object^ sender, System::EventArgs^ e) {
	pnlJuegoMusical->Visible = false;
	pnlJuego1->Visible = true;
}
};
}
