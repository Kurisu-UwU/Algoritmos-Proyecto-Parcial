#pragma once
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
			fondo = gcnew Bitmap(gcnew System::String("Imagenes/MilesMapa1.png"));
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
		Bitmap^ fondo;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
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
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void NivelMiles_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		//Rectangle sectionshow = Rectangle(idX * width, idY * height, width, height);
		//Rectangle zoom = Rectangle(x, y, width * 1.0, height * 1.0);
		Graphics^ canvas = this->CreateGraphics();
		BufferedGraphicsContext^ espaciobuffer = BufferedGraphicsManager::Current;
		BufferedGraphics^ buffer = espaciobuffer->Allocate(canvas, this->ClientRectangle);
		buffer->Graphics->DrawImage(fondo, 0, 0, System::Drawing::Rectangle(0, 0, 1000, 500), GraphicsUnit::Pixel);
		buffer->Render(canvas);
		delete buffer;
		delete espaciobuffer;
		delete canvas;
	}
	};
}
