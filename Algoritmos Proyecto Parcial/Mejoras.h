#pragma once
#include "ASCIIArtsNiveles.h"
class Mejoras {  // sin usar
private:
	int x, y, dx;
	bool uwu = true;

public:
	Mejoras();
	Mejoras(int, int, int, bool);
	~Mejoras();
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
Mejoras::Mejoras() { x = 10; y = 10; dx = 1; }
Mejoras::Mejoras(int x1, int y1, int dx1, bool owo) { x = x1; y = y1; dx = dx1; uwu = owo; }
Mejoras::~Mejoras() {}
void Mejoras::Borrar() { Posicion(x, y); cout << "     "; }
void Mejoras::SetX(int x1) { x = x1; }
void Mejoras::SetY(int y1) { y = y1; }
void Mejoras::SetDX(int dx1) { dx = dx1; }
int Mejoras::GetX() { return x; }
int Mejoras::GetY() { return y; }
int Mejoras::GetFX() { return dx; }
void Mejoras::Dibujar() {
	ColorRojo();
	Posicion(x, y); cout << "=====";
}
void Mejoras::Mover() {
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