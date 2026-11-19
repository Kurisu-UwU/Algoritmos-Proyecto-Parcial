#pragma once
#include "Entidades.h"
class Obstaculos : public Entidad {
private:
	bool visible;
public:
	Obstaculos(int x1, int y1, int dx1, int alto, int ancho, bool owo) : Entidad() {
		x = x1;
		y = y1;
		dx = dx1;
		existencia = owo;
		anchura = ancho;
		altura = alto;
	}
	~Obstaculos() {}
	void Dibujar(Graphics^ g) {
		g->DrawRectangle(Pens::Red, x, y, anchura,altura);
	}
};