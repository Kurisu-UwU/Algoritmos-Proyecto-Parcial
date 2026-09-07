#pragma once
#include "ASCIIArtsMenu.h" 
class LasersMenu {
private:
	int x, y, dx;
	bool uwu = true;
	
public:
	LasersMenu();
	LasersMenu(int, int, int, bool);
	~LasersMenu();
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
LasersMenu::LasersMenu() {x = 10; y = 10; dx = 1;}
LasersMenu::LasersMenu(int x1, int y1, int dx1, bool owo) { x = x1; y = y1; dx = dx1; uwu = owo; }
LasersMenu::~LasersMenu() {}
void LasersMenu::Borrar() {Posicion(x, y); cout << "     ";}
void LasersMenu::SetX(int x1) {x = x1;}
void LasersMenu::SetY(int y1) {y = y1;}
void LasersMenu::SetDX(int dx1) {dx = dx1;}
int LasersMenu::GetX() { return x; }
int LasersMenu::GetY() { return y; }
int LasersMenu::GetFX() { return dx; }
void LasersMenu::Dibujar() {
	ColorRojo();
	Posicion(x,y); cout << "=====";
}
void LasersMenu::Mover() {
	if (uwu == true) {
		int random = rand() % 3;
		y = (rand() % 46)+1;
		dx = (rand() % 3) + 1;
		if (random == 2) { dx *= -1; x = 210; }
		else { x = 1; }
		uwu = false;
	}
	if ((dx > 0 && (x + dx > 208+(dx * -2)))||(dx < 0 && (x + dx < dx * -2))) {uwu = true;}
	 x += dx; 
}