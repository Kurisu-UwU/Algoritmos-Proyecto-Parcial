#pragma once
#include "Protagonistas.h"
class Entidad {
protected:
	int x, y, dx, anchura, altura;
	bool existencia;
public:
	Entidad();
	Entidad(int, int, int, int, int, bool);
	virtual ~Entidad();
	void Mover();
	void Borrar();

	void SetX(int x1) { x = x1; }
	void SetY(int y1) { y = y1; }
	void SetVelocidad(int dx1) { dx = dx1; }
	void SetAncho(int anc) { anchura = anc; }
	void SetAlto(int alt) { altura = alt; }
	void SetExsistencia(bool exis) { existencia = exis; }
	int GetX() { return x; } 
	int GetY() { return y; }
	int GetVelocidad() { return dx; }
	int GetAncho() { return anchura; }
	int GetAlto() { return altura; }
	bool GetExistencia() { return existencia; }
};
Entidad::Entidad() { x = 10; y = 10; dx = 1; anchura = 5; altura = 1; }
Entidad::Entidad(int x1, int y1, int dx1, int alto, int ancho, bool owo) { x = x1; y = y1; dx = dx1; existencia = owo; anchura = ancho; altura = alto; }
Entidad::~Entidad() {}
void Entidad::Borrar() { Posicion(x, y); cout << "     "; }