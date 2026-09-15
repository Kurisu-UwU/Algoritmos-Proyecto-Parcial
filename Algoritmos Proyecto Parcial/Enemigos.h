#pragma once
#include "ASCIIArtsNiveles.h"
class Enemigos {
private:
	int x, y, dx;
	bool uwu = true;

public:
	Enemigos();
	Enemigos(int, int, int, bool);
	~Enemigos();
	void Mover();
	void Borrar();
	void Dibujar();

	void SetX(int);
	void SetY(int);
	void SetDX(int);
	int GetX();
	int GetY();
	int GetFX();
};
Enemigos::Enemigos() { x = 10; y = 10; dx = 1; }
Enemigos::Enemigos(int x1, int y1, int dx1, bool owo) { x = x1; y = y1; dx = dx1; uwu = owo; }
Enemigos::~Enemigos() {}
void Enemigos::Borrar() { Posicion(x, y); cout << "     "; }
void Enemigos::SetX(int x1) { x = x1; }
void Enemigos::SetY(int y1) { y = y1; }
void Enemigos::SetDX(int dx1) { dx = dx1; }
int Enemigos::GetX() { return x; }
int Enemigos::GetY() { return y; }
int Enemigos::GetFX() { return dx; }
void Enemigos::Dibujar() {
	ColorRojo();
	Posicion(x, y); cout << "=====";
}
void Enemigos::Mover() {
	if (uwu == true) {
		int random = rand() % 3;
		y = (rand() % 46) + 1;
		dx = (rand() % 3) + 1;
		if (random == 2) { dx *= -1; x = 210; }
		else { x = 1; }
		uwu = false;
	}
	if ((dx > 0 && (x + dx > 208 + (dx * -2))) || (dx < 0 && (x + dx < dx * -2))) { uwu = true; }
	x += dx;
}