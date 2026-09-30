#pragma once
#include "Proyectiles.h"
#include "ASCIIArtsNiveles.h"
class Carros : public Proyectiles {
private:
	short tipo;
	bool vivo;
public:
	Carros();
	~Carros();
	void Mover();

	void SetVivo(bool viv) { vivo = viv; }
	void SetTipo(short tip) { tipo = tip; }

	void Dibujar();
	void Borrar();

	bool PresionarCarros(int);

	bool GetVivo() { return vivo; }
	short GetTipo() { return tipo; }
};
Carros::Carros() : Proyectiles() { x = 10; y = 10; vivo = false; tipo = 0; }
Carros::~Carros() {}
void Carros::Dibujar() {
	if (tipo == 0) { BColorAzul(); }
	else { BColorRojo(); }
	Posicion(x, y); cout << "    ";
	Posicion(x, y + 1); cout << "    ";
	BColorNegro();
}
void Carros::Borrar() {
	Posicion(x, y); cout << "    ";
	Posicion(x, y + 1); cout << "    ";
}