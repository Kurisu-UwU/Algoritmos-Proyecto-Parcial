#pragma once
#include "ASCIIArtsNiveles.h"
class Obstaculos {
private:
	int x, y, dx, anchura, altura;
	bool uwu = true;
public:
	Obstaculos();
	Obstaculos(int, int, int, int, int, bool);
	~Obstaculos();
	void Mover();
	void Borrar();

	void SetX(int x1) { x = x1; }
	void SetY(int y1) { y = y1; }
	void SetVelocidad(int dx1) { dx = dx1; }
	void SetAncho(int anc) { anchura = anc; }
	void SetAlto(int alt) { altura = alt; }
	int GetX() { return x; }
	int GetY() { return y; }
	int GetVelocidad() { return dx; }
	int GetAncho() { return anchura; }
	int GetAlto() { return altura; }
};
Obstaculos::Obstaculos() { x = 10; y = 10; dx = 1; anchura = 5; altura = 1; }
Obstaculos::Obstaculos(int x1, int y1, int dx1, int alto, int ancho, bool owo) { x = x1; y = y1; dx = dx1; uwu = owo; anchura = ancho; altura = alto; }
Obstaculos::~Obstaculos() {}
void Obstaculos::Borrar() { Posicion(x, y); cout << "     "; }