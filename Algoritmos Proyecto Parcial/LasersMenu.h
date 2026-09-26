#pragma once
#include "ASCIIArtsNiveles.h"
class LasersMenu {
private:
	int x, y, dx;
	bool uwu = true;
	short tipo;
public:
	LasersMenu();
	LasersMenu(int, int, int, bool, short);
	~LasersMenu();
	void Mover();

	void SetX(int x1) { x = x1; }
	void SetY(int y1) { y = y1; }
	void SetDX(int dx1) { dx = dx1; }
	int GetX() { return x; }
	int GetY() { return y; }
	int GetFX() { return dx; }
};
LasersMenu::LasersMenu() { x = 10; y = 10; dx = 1; }
LasersMenu::LasersMenu(int x1, int y1, int dx1, bool owo, short tipo1) { x = x1; y = y1; dx = dx1; uwu = owo; tipo = 1; }
LasersMenu::~LasersMenu() {}
void LasersMenu::Mover() {
	switch (tipo){
	case 1: Posicion(x, y); cout << "        ";	break;
	case 2: Posicion(x, y); cout << "           "; break;
	case 3: Posicion(x, y); cout << "              "; break;
	default: break;
	}
	if (uwu == true) {
		tipo = rand() % 3+1;
		int random = rand() % 3;
		y = (rand() % 46) + 1;
		dx = (rand() % 3) + 1;
		if (random == 2) { dx *= -1; x = 210; }
		else { x = 1; }
		uwu = false;
	}
	x += dx;
	ColorRojo();
	switch (tipo) {
	case 1: // Dibujar el primer tipo de láser	
		if ((dx > 0 && (x + dx > 206 + (dx * -2))) || (dx < 0 && (x + dx < dx * -2))) { uwu = true; }
		Posicion(x, y); cout << "========"; break;
	case 2:	
		if ((dx > 0 && (x + dx > 203 + (dx * -2))) || (dx < 0 && (x + dx < dx * -2))) { uwu = true; }
		Posicion(x, y); cout << "==========="; break;
	case 3: 	
		if ((dx > 0 && (x + dx > 200 + (dx * -2))) || (dx < 0 && (x + dx < dx * -2))) { uwu = true; }
		Posicion(x, y); cout << "============="; break;
	default: break;
	}
}