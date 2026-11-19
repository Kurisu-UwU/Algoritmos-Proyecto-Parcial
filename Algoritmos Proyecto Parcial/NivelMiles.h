#pragma once
#include "MilesMorales.h"
namespace AlgoritmosProyectoFinal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de NivelMiles
	/// </summary>
	public ref class NivelMiles : public System::Windows::Forms::Form
	{
	public:
		NivelMiles(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			g = this->CreateGraphics();
			space = BufferedGraphicsManager::Current;
			buffer = space->Allocate(g, this->ClientRectangle);
			fondo = gcnew Bitmap(gcnew System::String("Imagenes/MilesMapa1.png"));
			bmphero = gcnew Bitmap("Imagenes/MilesMorales.png");
			miles = new MilesMorales(100, 100, bmphero->Width / 16, bmphero->Height / 8, 100, 2, 2, 100, 100, 0, "Punk", 'S', 0, 0);
		}
	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~NivelMiles()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^ timer1;
	protected:
	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		/// 
		Graphics^ g;
		Bitmap^ fondo;
		MilesMorales* miles;
		BufferedGraphicsContext^ space;
		BufferedGraphics^ buffer;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
		   Bitmap^ bmphero;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->SuspendLayout();
			// 
			// timer1
			// 
			this->timer1->Enabled = true;
			this->timer1->Tick += gcnew System::EventHandler(this, &NivelMiles::timer1_Tick);
			// 
			// NivelMiles
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(811, 501);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"NivelMiles";
			this->Text = L"NivelMiles";
			this->Load += gcnew System::EventHandler(this, &NivelMiles::NivelMiles_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &NivelMiles::NivelMiles_KeyDown);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void NivelMiles_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		System::Drawing::Rectangle sectionshow = System::Drawing::Rectangle(miles->GetPX(), miles->GetPY(), 100, 100);
		System::Drawing::Rectangle zoom = System::Drawing::Rectangle(0, 0, 1000, 500);
		buffer->Graphics->DrawImage(fondo, 0, 0, System::Drawing::Rectangle(0, 0, 1000, 500), GraphicsUnit::Pixel);
		miles->Dibujar(buffer->Graphics, bmphero);
		buffer->Render(g);
	}

	private: System::Void NivelMiles_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::Up) miles->move(buffer->Graphics, 'W');
		if (e->KeyCode == Keys::Down) miles->move(buffer->Graphics, 'S');
		if (e->KeyCode == Keys::Right) miles->move(buffer->Graphics, 'D');
		if (e->KeyCode == Keys::Left) miles->move(buffer->Graphics, 'A');
	}
	};
}