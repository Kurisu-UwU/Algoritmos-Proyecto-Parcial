#pragma once
#include "Proyectiles.h"
#include "ASCIIArtsNiveles.h"
class Carros : public Proyectiles {
private:
	short tipo;
	bool vivo;
	int ancho, alto, damage;
	bool yapego;
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
	void SetYapego(bool peg) { yapego = peg; }

	void Dibujar();
	void Borrar();

	int GetX() { return x; }
	int GetY() { return y; }
	bool GetVivo() { return vivo; }
	short GetTipo() { return tipo; }
	int GetAncho() { return ancho; }
	int GetAlto() { return alto; }
	int GetDamage() { return damage; }
	bool GetYapego() { return yapego; }
};
Carros::Carros() : Proyectiles() { x = 10; y = 10; vivo = false; tipo = 0; }
Carros::~Carros() {}
void Carros::Dibujar() {
	
}
void Carros::Borrar() {
	
}