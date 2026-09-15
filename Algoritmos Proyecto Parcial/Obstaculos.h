#pragma once
#include "ASCIIArtsNiveles.h"
class Obstaculos {
private:
	int x, y, dx;
	bool uwu = true;

public:
	Obstaculos();
	Obstaculos(int, int, int, bool);
	~Obstaculos();
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
Obstaculos::Obstaculos() { x = 10; y = 10; dx = 1; }
Obstaculos::Obstaculos(int x1, int y1, int dx1, bool owo) { x = x1; y = y1; dx = dx1; uwu = owo; }
Obstaculos::~Obstaculos() {}
void Obstaculos::Borrar() { Posicion(x, y); cout << "     "; }
void Obstaculos::SetX(int x1) { x = x1; }
void Obstaculos::SetY(int y1) { y = y1; }
void Obstaculos::SetDX(int dx1) { dx = dx1; }
int Obstaculos::GetX() { return x; }
int Obstaculos::GetY() { return y; }
int Obstaculos::GetFX() { return dx; }
void Obstaculos::Dibujar() {
	ColorRojo();
	Posicion(x, y); cout << "=====";
}
void Obstaculos::Mover() {
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