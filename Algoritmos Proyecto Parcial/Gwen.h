#pragma once
#include "PersonajesSecundarios.h"
class Gwen : public PersonajeSecundario {
private:
public:
	Gwen(int, int, int, int, float, float, float, float, float, string, bool, float);
	~Gwen();
	void Borrar()override;
	void Dibujar() override;
	void PerseguirProta(int, int, bool, bool, bool, bool);
};
Gwen::Gwen(int x1, int y1, int ancho, int alto, float a1, float v1, float vel1, float vel1temp, float velatk, string t1, bool vi, float temp) : PersonajeSecundario() {
	this->ex = x1; this->ey = y1;
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
Gwen::~Gwen() {}
void Gwen::Borrar() { BorrarGwen(ex, ey); }
void Gwen::Dibujar() {
	DibujarGwen(ex, ey);
}
void Gwen::PerseguirProta(int px, int py, bool W, bool A, bool S, bool D) {  // Implementación de la lógica para perseguir al protagonista
	if (tempo > 20 / velocidadtempo) {
		if (px > ex && D) { ex += velocidad * 2; } // Mover hacia la derecha
		else if (px < ex && A) { ex -= velocidad * 2; } // Mover hacia la izquierda
		if (py > ey && S) { ey += velocidad; } // Mover hacia abajo
		else if (py < ey && W) { ey -= velocidad; }// Mover hacia arriba
		tempo = 0; // Reiniciar el temporizador
	}
	tempo++;
}