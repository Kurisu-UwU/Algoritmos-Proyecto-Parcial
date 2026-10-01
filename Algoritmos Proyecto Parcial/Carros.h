#pragma once
#include "Proyectiles.h"
#include "ASCIIArtsNiveles.h"
class Carros : public Proyectiles {
private:
	short tipo;
	bool vivo;
	int ancho, alto, damage;
public:
	Carros();
	~Carros();

	void SetX(int x1) { x = x1; }
	void SetY(int y1) { y = y1; }
	void SetVivo(bool viv) { vivo = viv; }
	void SetTipo(short tip) { tipo = tip; }
	void SetAncho(int anc) { ancho = anc; }
	void SetAlto(int alt) { alto = alt; }
	void SetDamage(int dam) { damage = dam; }

	void Dibujar();
	void Borrar();

	int GetX() { return x; }
	int GetY() { return y; }
	bool GetVivo() { return vivo; }
	short GetTipo() { return tipo; }
	int GetAncho() { return ancho; }
	int GetAlto() { return alto; }
	int GetDamage() { return damage; }

};
Carros::Carros() : Proyectiles() { x = 10; y = 10; vivo = false; tipo = 0; }
Carros::~Carros() {}
void Carros::Dibujar() {
	switch (tipo) {
	case 0: DibujarBici(x, y); break;
	case 1: DibujarCarro(x, y); break;
	case 2: DibujarCamion(x, y); break;
	default: break;
	}
}
void Carros::Borrar() {
	switch (tipo) {
	case 0: BorrarBici(x, y); break;
	case 1: BorrarCarro(x, y); break;
	case 2: BorrarCamion(x, y); break;
	default: break;
	}
}