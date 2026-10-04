#pragma once
#include "Proyectiles.h"
#include "ASCIIArtsNiveles.h"
class Notas : public Proyectiles {
private:
	short tipo;
	bool vivo;
	int velocidad;
public:
	Notas();
	~Notas();

	void SetX(int x1) { x = x1; }
	void SetY(int y1) { y = y1; }

	void SetVivo(bool viv) { vivo = viv; }
	void SetTipo(short tip) { tipo = tip; }
	void SetVelocidad(int vel) { velocidad = vel; }
	void Dibujar();
	void Borrar();

	bool PresionarNotas(int);

	int GetX() { return x; }
	int GetY() { return y; }
	int GetVelocidad() { return velocidad; }

	bool GetVivo() { return vivo; }
	short GetTipo() { return tipo; }
};
Notas::Notas() : Proyectiles() { x = 10; y = 10; vivo = false; tipo = 0; }
Notas::~Notas() {}
void Notas::Dibujar() {
	if (tipo == 0) { BColorAzul(); }
	else { BColorRojo(); }
	Posicion(x, y); cout << "    ";
	Posicion(x, y + 1); cout << "    ";
	BColorNegro();
}
void Notas::Borrar() {
	Posicion(x, y); cout << "    ";
	Posicion(x, y + 1); cout << "    ";
}