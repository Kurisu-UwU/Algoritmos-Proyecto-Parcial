#pragma once
#include "ASCIIArtsNiveles.h"
class Ayudantes {
private:
	int x, y, dx;
	bool uwu = true;

public:
	Ayudantes();
	Ayudantes(int, int, int, bool);
	~Ayudantes();
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
Ayudantes::Ayudantes() { x = 10; y = 10; dx = 1; }
Ayudantes::Ayudantes(int x1, int y1, int dx1, bool owo) { x = x1; y = y1; dx = dx1; uwu = owo; }
Ayudantes::~Ayudantes() {}
void Ayudantes::Borrar() { Posicion(x, y); cout << "     "; }
void Ayudantes::SetX(int x1) { x = x1; }
void Ayudantes::SetY(int y1) { y = y1; }
void Ayudantes::SetDX(int dx1) { dx = dx1; }
int Ayudantes::GetX() { return x; }
int Ayudantes::GetY() { return y; }
int Ayudantes::GetFX() { return dx; }
void Ayudantes::Dibujar() {
	ColorRojo();
	Posicion(x, y); cout << "=====";
}
void Ayudantes::Mover() {
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