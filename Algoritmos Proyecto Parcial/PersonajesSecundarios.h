#pragma once
#include "ASCIIArtsNiveles.h"
#include "Proyectiles.h"
#include "NPCs.h"
#include "string"

using namespace std;
using namespace System::Drawing;
class PersonajeSecundario
{
protected:
	int ex, ey, anchura, altura;
	int idX, idY;
	float cantidaddeataque, cantidaddevida, velocidad, velocidadtempo, velocidadataque;
	string tipo;
	bool vivo;
	Proyectiles** listaP;// Permite almacenar varios proyectiles.
	int cantdeproyectiles;
	Proyectiles* obproye;// Puntero utilizado para crear un nuevo proyectil.
	float tempo = 0;
	bool esvisible;
public:
	PersonajeSecundario();
	PersonajeSecundario(int, int, int, int, float, float, float,float,float, string, bool, float, bool);
	virtual ~PersonajeSecundario();

	virtual void Dibujar(Graphics^ g, Bitmap^ bmp) {
		System::Drawing::Rectangle sectionshow = System::Drawing::Rectangle(idX * anchura, idY * altura, anchura, altura);
		System::Drawing::Rectangle zoom = System::Drawing::Rectangle(ex, ey, anchura * 1.0, altura * 1.0);
		g->DrawImage(bmp, zoom, sectionshow, GraphicsUnit::Pixel);
	}
	System::Drawing::Rectangle getRectangle() {
		return System::Drawing::Rectangle(ex, ey, anchura * 0.03, altura * 0.03);
	}
	virtual void Borrar();
	virtual void Mover(Graphics^ g);
	//coloca y cambia los datos de los enemigos los set
	void SetEX(int x1) { ex = x1; }
	void SetEY(int y1) { ey = y1; }
	void SetAtaque(float a1) { cantidaddeataque = a1; }
	void SetVida(float v1) { cantidaddevida = v1; }
	void SetVelocidad(float v1) { velocidad = v1; }
	void SetTipo(string t1) { tipo = t1; }
	void SetVivo(bool vi) { vivo = vi; }
	void SetVelocidadTempo(float v1) { velocidadtempo = v1; }
	void SetTempo(float temp) { tempo = temp; }
	void SetAlto(int alt) { altura = alt; }
	void SetAncho(int anch) { anchura = anch; }
	void SetVisibilidad(bool visibilidad) { esvisible = visibilidad; }
	//obtiene y devuelve los datos de los enemigos los get
	virtual int GetEX() { return ex; }
	virtual int GetEY() { return ey; }
	float GetAtaque() { return cantidaddeataque; }
	float GetVida() { return cantidaddevida; }
	float GetVelocidad() { return velocidad; }
	float GetVelocidadTempo() { return velocidadtempo; }
	string GetTipo() { return tipo; }
	bool GetVivo() { return vivo; }
	int GetCantDeProyectiles() {return cantdeproyectiles;}
	float GetTempo() { return tempo; }
	int GetAlto() { return altura; }
	int GetAncho() { return anchura; }

	void GenerarProyectil(char);
	void MostrarProyectil();

	virtual void PerseguirProta(int px, int py, bool W, bool A, bool S, bool D) {}

	void AtacarProtagonista(int, int);
};
PersonajeSecundario::PersonajeSecundario() {
	ex = 0; ey = 0;
	cantdeproyectiles = 0;
	listaP = nullptr;
	velocidad = 1;
	velocidadtempo = 1;
}
PersonajeSecundario::PersonajeSecundario(int x1, int y1, int ancho, int alto, float a1, float v1, float vel1,float vel1temp, float velatk, string t1, bool vi, float temp) {
	ex = x1; ey = y1;
	anchura = ancho;
	altura = alto;
	cantidaddeataque = a1;
	cantidaddevida = v1;
	velocidad = vel1;
	velocidadtempo = vel1temp;
	velocidadataque = velatk;
	tipo = t1;
	vivo = vi;
	cantdeproyectiles = 0;
	listaP = nullptr;
	tempo = temp;
}
PersonajeSecundario::~PersonajeSecundario() {if (listaP != nullptr) delete[]listaP;}
void PersonajeSecundario::Borrar() {BorrarEnemigo(ex, ey);}
void PersonajeSecundario::GenerarProyectil(char tecla) {
	if (cantidaddevida <= 0) {
		if (tecla == 'L' || tecla == 'l') {
			obproye = new Proyectiles();
			Proyectiles** proy = new Proyectiles * [cantdeproyectiles + 1]; //crea una nueva pelota
			for (int i = 0; i < cantdeproyectiles; i++) { proy[i] = listaP[i]; }
			proy[cantdeproyectiles] = obproye;
			cantdeproyectiles++;
			if (listaP != nullptr) { delete[]listaP; }
			listaP = proy;
		}
	}
}
void PersonajeSecundario::MostrarProyectil() {
	for (int i = 0; i < cantdeproyectiles; i++) {
		listaP[i]->Borrar();
		listaP[i]->Mover();
		listaP[i]->Dibujar();
	}
}