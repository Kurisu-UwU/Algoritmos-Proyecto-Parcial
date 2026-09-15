#pragma once
#include "ASCIIArtsNiveles.h"
class Enemigos {
private:
	int x, y, dx, dy;
	float cantidaddedanio = 1, cantidaddevida = 20;
	bool vivo = true;

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
	void SetDY(int);
	void SetVivo(bool);
	void SetCantidadDeDanio(float);
	void SetCantidadDeVida(float);

	int GetX();
	int GetY();
	int GetDX();
	int GetDY();
	bool GetVivo();
	float GetCantidadDeDanio();
	float GetCantidadDeVida();
};
Enemigos::Enemigos() { x = 10; y = 10; dx = 1; }
Enemigos::Enemigos(int x1, int y1, int dx1, bool vivo1) { x = x1; y = y1; dx = dx1; vivo = vivo1; }
Enemigos::~Enemigos() {}
void Enemigos::Borrar() { Posicion(x, y); cout << "     "; }
void Enemigos::SetX(int x1) { x = x1; }
void Enemigos::SetY(int y1) { y = y1; }
void Enemigos::SetDX(int dx1) { dx = dx1; }
void Enemigos::SetDY(int dy1) { dy = dy1; }
void Enemigos::SetVivo(bool vivo1) { vivo = vivo1; }
void Enemigos::SetCantidadDeDanio(float cantidaddedanio1) { cantidaddedanio = cantidaddedanio1; }
void Enemigos::SetCantidadDeVida(float cantidaddevida1) { cantidaddevida = cantidaddevida1; }
int Enemigos::GetX() { return x; }
int Enemigos::GetY() { return y; }
int Enemigos::GetDX() { return dx; }
int Enemigos::GetDY() { return dy; }
bool Enemigos::GetVivo() { return vivo; }
float Enemigos::GetCantidadDeDanio() { return cantidaddedanio; }
float Enemigos::GetCantidadDeVida() { return cantidaddevida; }
void Enemigos::Dibujar() {
	ColorRojo();
	Posicion(x, y); cout << "=====";
}
void Enemigos::Mover() {
	if (vivo == true) {
		int random = rand() % 3;
		y = (rand() % 46) + 1;
		dx = (rand() % 3) + 1;
		if (random == 2) { dx *= -1; x = 210; }
		else { x = 1; }
		vivo = false;
	}
	if ((dx > 0 && (x + dx > 208 + (dx * -2))) || (dx < 0 && (x + dx < dx * -2))) { vivo = true; }
	x += dx;
}