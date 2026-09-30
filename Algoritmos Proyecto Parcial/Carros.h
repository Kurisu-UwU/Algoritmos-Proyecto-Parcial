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
	~Carros() override;
	void Mover();

	void SetVivo(bool viv) { vivo = viv; }
	void SetTipo(short tip) { tipo = tip; }
	void SetAncho(int anc) { ancho = anc; }
	void SetAlto(int alt) { alto = alt; }
	void SetDamage(int dam) { damage = dam; }

	void Dibujar(short);
	void Borrar();

	bool PresionarCarros(int);

	bool GetVivo() { return vivo; }
	short GetTipo() { return tipo; }
	int GetAncho() { return ancho; }
	int GetAlto() { return alto; }
	int GetDamage() { return damage; }

};
Carros::Carros() : Proyectiles() { x = 10; y = 10; vivo = false; tipo = 0; }
Carros::~Carros() {}
void Carros::Dibujar(short n) {
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