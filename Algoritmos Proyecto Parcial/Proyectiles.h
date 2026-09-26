#pragma once
#include "ASCIIArtsNiveles.h"
class Proyectiles { // sin usar
private:
	int x, y, dx, dy;
	bool uwu = true;
	int tipo;
public:
	Proyectiles();
	~Proyectiles();
	void Mover();
	void Borrar();
	void Dibujar();
	void Tambores();
	int PresionarTambores(int);
	void MoverTambores();
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
void Proyectiles::Tambores() {  // Hay que generar una funcion que reciba los frames en variable e implementar el ritmo por el tiempo de variable,
	// tambien falta agregar una función que limite los fps para que todo funcione acorde a lo planeado, lo ideal sería que dependa del tiempo, bastante, lo más probable, en milisegundos

}
void Proyectiles::MoverTambores() {

}
int Proyectiles::PresionarTambores(int x2) {
	if (_kbhit()) {
		tecla = getch();
		if ((tecla == 'Z' || tecla == 'z') && x == x2 && tipo == 0) { return 1; } else { return 0; }
		if ((tecla == 'X' || tecla == 'x') && x == x2 && tipo == 1) { return 1; } else { return 0; }
	}
}