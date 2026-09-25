#pragma once
#include "Obstaculos.h"

class Item: public Obstaculos
{
protected:
	char tipo;

public:
	Item(int, int, int, int, int, bool, char tipo);
	~Item();


};

Item::Item (int x, int y, int dx, int anchura, int altura, bool existencia, char tipo)
{
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->anchura = anchura;
	this->altura = altura;
	this->existencia = existencia;
	this->tipo = tipo;
}

Item::~Item()
{
}
