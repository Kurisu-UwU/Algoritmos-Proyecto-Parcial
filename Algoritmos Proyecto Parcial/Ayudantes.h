#pragma once
#include "Enemigos.h"
class Ayudantes: public Enemigos {
private:
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
Ayudantes::Ayudantes(): Enemigos() { ex = 10; ey = 10; velocidad = 1; }
Ayudantes::Ayudantes(int x1, int y1, int vel, bool vivo) { ex = x1; ey = y1; velocidad = vel; this->vivo = vivo; }
Ayudantes::~Ayudantes() {}
void Ayudantes::Borrar() { Posicion(ex, ey); cout << "     "; }
void Ayudantes::SetX(int x1) { ex = x1; }
void Ayudantes::SetY(int y1) { ey = y1; }
void Ayudantes::SetDX(int vel) { velocidad = vel; }
int Ayudantes::GetX() { return ex; }
int Ayudantes::GetY() { return ey; }
int Ayudantes::GetFX() { return velocidad; }
void Ayudantes::Dibujar() {}
void Ayudantes::Mover() {}