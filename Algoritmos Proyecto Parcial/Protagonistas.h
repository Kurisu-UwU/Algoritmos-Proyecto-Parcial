#pragma once
#include "ASCIIArtsNiveles.h"
class Protagonistas {
private:
	int x, y, dx;
	bool uwu = true;

public:
	Protagonistas();
	Protagonistas(int, int, int, bool);
	~Protagonistas();
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
Protagonistas::Protagonistas() { x = 10; y = 10; dx = 1; }
Protagonistas::Protagonistas(int x1, int y1, int dx1, bool owo) { x = x1; y = y1; dx = dx1; uwu = owo; }
Protagonistas::~Protagonistas() {}
void Protagonistas::Borrar() { Posicion(x, y); cout << "     "; }
void Protagonistas::SetX(int x1) { x = x1; }
void Protagonistas::SetY(int y1) { y = y1; }
void Protagonistas::SetDX(int dx1) { dx = dx1; }
int Protagonistas::GetX() { return x; }
int Protagonistas::GetY() { return y; }
int Protagonistas::GetFX() { return dx; }
void Protagonistas::Dibujar() {
	ColorRojo();
	Posicion(x, y); cout << "=====";
}
void Protagonistas::Mover() {
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