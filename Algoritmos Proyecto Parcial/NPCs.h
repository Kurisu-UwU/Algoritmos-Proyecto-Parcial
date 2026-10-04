#pragma once
#include "ItemsConstruccion.h"

class NPC : public Entidad {
protected:
	int RadioAccion;
public:
	NPC(int, int, int, int, int, bool, int);
	~NPC() override;
	bool PisandoRadio(Protagonista*);
	virtual void ImprimirNPC(int, int);
};
NPC::NPC(int x, int y, int dx, int anchura, int altura, bool existencia, int RadioAccion){
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->anchura = anchura;
	this->altura = altura;
	this->existencia = existencia;
	this->RadioAccion = RadioAccion;
}
bool NPC::PisandoRadio(Protagonista* personaje) {
	bool colision;
	if (((personaje->GetPX() < x + anchura + 2 * RadioAccion) && (personaje->GetPX() >= x - 2 * RadioAccion)) && ((personaje->GetPY() < y + altura + RadioAccion) && (personaje->GetPY() >= y - RadioAccion))) {colision = true;}
	else {colision = false;}
	return colision;
}
NPC::~NPC(){}
void NPC::ImprimirNPC(int x, int y) {Posicion(x, y); cout << "";}