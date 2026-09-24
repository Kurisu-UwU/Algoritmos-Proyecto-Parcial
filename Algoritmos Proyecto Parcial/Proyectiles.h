#pragma once
#include "ASCIIArtsNiveles.h"
class Proyectiles { // sin usar
private:
	int x, y, dx, dy;
	bool uwu = true;
public:
	Proyectiles();
	~Proyectiles();
	void Mover();
	void Borrar();
	void Dibujar();

	void SetX(int x1) { x = x1; }
	void SetY(int y1) { y = y1; }
	void SetDX(int dx1) { dx = dx1; }
	int GetX() { return x; }
	int GetY() { return y; }
	int GetFX() { return dx; }
};
Proyectiles::Proyectiles() { x = 10; y = 10; dx = dy=  1; }
Proyectiles::~Proyectiles() {}
void Proyectiles::Borrar() { Posicion(x, y); cout << "     "; }
void Proyectiles::Dibujar() { ColorRojo(); Posicion(x, y); cout << "====="; }
void Proyectiles::Mover() {
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