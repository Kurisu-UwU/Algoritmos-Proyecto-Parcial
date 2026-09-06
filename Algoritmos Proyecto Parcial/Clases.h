#pragma once
#include "ASCIIArts.h" 
class LasersMenu {
private:
	int x, y, dx=1;
	bool uwu = true;
public:
	LasersMenu();
	LasersMenu(int, int, int);
	~LasersMenu();
	void Mover();
	void Borrar();
	void Dibujar();

	void SetX(int);
	void SetY(int);
	void SetDX(int);
};
LasersMenu::LasersMenu() {x = 10; y = 10; dx = 1;}
LasersMenu::LasersMenu(int x1, int y1, int dx1) {x = x1; y = y1; dx = dx1;}
LasersMenu::~LasersMenu() {}
void LasersMenu::Borrar() {Posicion(x, y); cout << "    ";}
void LasersMenu::SetX(int x1) {x = x1;}
void LasersMenu::SetY(int y1) {y = y1;}
void LasersMenu::SetDX(int dx1) {dx = dx1;}
void LasersMenu::Dibujar() {
	ColorRojo();
	Posicion(x,y); cout << "====";
}
void LasersMenu::Mover() {	
	if (uwu == true) {
		Random ran;
		int random;
		random = ran.Next(0, 2);
		y = ran.Next(2, 47);
		if (random == 1) { dx = -1; }
		else { dx = 1; }
		uwu = false;
	}
	else {if ((dx > 0 && (x + dx > 78))||(dx < 0 && (x + dx < 1))) {uwu = true;}}
	x += dx;
}