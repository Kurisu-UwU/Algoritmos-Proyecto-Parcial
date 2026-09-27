#pragma once
#include "Enemigos.h"

class Spot : public Enemigos
{
protected:
public:
	Spot(int, int, int, int, float, float, float, float, float, string, bool, float);
	~Spot() override;
	bool ColisionSpot(Protagonista*);
	void ImprimirSpot(int, int);
	void MoverSpot(int, int, int, int);
};
Spot::Spot(int x1, int y1, int ancho, int alto, float ataque, float vida, float velocidad, float velotemp, float veloatac, string tipo, bool vivo, float temp)  {
	ex = x1; ey = y1;
	anchura = ancho; altura = alto;
	cantidaddeataque = ataque;
	cantidaddevida = vida;
	velocidad = velocidad;
	velocidadtempo = velotemp;
	velocidadataque = veloatac;
	this->tipo = tipo;
	this->vivo = vivo;
	cantdeproyectiles = 0;
	listaP = nullptr;
	tempo = temp;
}

bool Spot::ColisionSpot(Protagonista* personaje) {
	if (CalcularColisiones(personaje->GetPX(), personaje->GetPY(), ex, ey, personaje->GetAlto(), personaje->GetAncho(), altura, anchura)) {
		return true;
	}
	else { return false; }
}

void Spot::ImprimirSpot(int x1, int y1) {
	DibujarSpot(x1, y1);
}

void Spot::MoverSpot(int xi, int ys, int xd, int yi) {
	BorrarSpot(ex, ey);
	if (ex == xi) {
		ex = xd;
	}
	else {
		if (ex == xd) {
			ex = xi;
		}
	}

	if (ey == ys) {
		ey = yi;
	}
	else {
		if (ey == yi) {
			ey = ys;
		}
	}
	ImprimirSpot(ex, ey);
	_sleep(1);
}


Spot::~Spot() {}
