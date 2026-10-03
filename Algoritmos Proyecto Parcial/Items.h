#pragma once
#include "Entidades.h"

class Item: public Entidad
{
protected:
public:
	Item(int, int, int, int, int, bool);
	~Item() override;
	bool PisandoItem(Protagonista*);
	virtual void ImprimirItem(int, int);
};
Item::Item (int x, int y, int dx, int anchura, int altura, bool existencia) {
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->anchura = anchura;
	this->altura = altura;
	this->existencia = existencia;
}
bool Item::PisandoItem(Protagonista* personaje) { 

	//if (((personaje->GetPX() < x + anchura) && (personaje->GetPX() >= x)) && ((personaje->GetPY() < y + altura) && (personaje->GetPY() >= y))) { 
	if (CalcularColisiones(personaje->GetPX(), personaje->GetPY(), x, y, personaje->GetAlto(), personaje->GetAncho(),altura, anchura)) {
	return true; } else { return false; } 
}
Item::~Item(){}
void Item::ImprimirItem(int x, int y) { Posicion(x, y); cout << ""; }