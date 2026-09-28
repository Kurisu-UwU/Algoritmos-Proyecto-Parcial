#pragma once
#include "Items.h"

class Tornillos : public Item
{
protected:
public:
	Tornillos(int, int, int, int, int, bool);
	~Tornillos() override;
	void ImprimirItem(int, int) override;

};
Tornillos::Tornillos(int x, int y,int anchura, int altura, int dx, bool existencia):Item(x, y, dx, anchura, altura, existencia)
{
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->anchura = 1;
	this->altura = 2;
	this->existencia = existencia;
}
Tornillos::~Tornillos()
{
}
void Tornillos::ImprimirItem(int x, int y) {
	DibujarTornillos(x, y);
}
//
//
//
//
class Tuercas : public Item
{
protected:
public:
	Tuercas(int, int, int, int, int, bool);
	~Tuercas() override;
	void ImprimirItem(int, int) override;

};
Tuercas::Tuercas(int x, int y, int dx, int anchura, int altura, bool existencia) :Item(x, y, dx, anchura, altura, existencia)
{
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->anchura = 3;
	this->altura = 1;
	this->existencia = existencia;
}
Tuercas::~Tuercas()
{
}
void Tuercas::ImprimirItem(int x, int y) {
	DibujarTuercas(x, y);
}
//
//
//
//
class Arandelas : public Item
{
protected:
public:
	Arandelas(int, int, int, int, int, bool);
	~Arandelas() override;
	void ImprimirItem(int, int) override;

};
Arandelas::Arandelas(int x, int y, int dx, int anchura, int altura, bool existencia) :Item(x, y, dx, anchura, altura, existencia)
{
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->anchura = 3;
	this->altura = 1;
	this->existencia = existencia;
}
Arandelas::~Arandelas()
{
}
void Arandelas::ImprimirItem(int x, int y) {
	DibujarArandelas(x, y);
}
//
//
//
//
class Abrazadera : public Item
{
protected:
public:
	Abrazadera(int, int, int, int, int, bool);
	~Abrazadera() override;
	void ImprimirItem(int, int) override;

};
Abrazadera::Abrazadera(int x, int y, int dx, int anchura, int altura, bool existencia) :Item(x, y, dx, anchura, altura, existencia)
{
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->anchura = 3;
	this->altura = 1;
	this->existencia = existencia;
}
Abrazadera::~Abrazadera()
{
}
void Abrazadera::ImprimirItem(int x, int y) {
	DibujarAbrazadera(x, y);
}
//
//
//
//
class Cables : public Item
{
protected:
public:
	Cables(int, int, int, int, int, bool);
	~Cables() override;
	void ImprimirItem(int, int) override;

};
Cables::Cables(int x, int y, int dx, int anchura, int altura, bool existencia) :Item(x, y, dx, anchura, altura, existencia)
{
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->anchura = 3;
	this->altura = 1;
	this->existencia = existencia;
}
Cables::~Cables()
{
}
void Cables::ImprimirItem(int x, int y) {
	DibujarCables(x, y);
}
//
//
//
//
class Carcasa : public Item
{
protected:
public:
	Carcasa(int, int, int, int, int, bool);
	~Carcasa() override;
	void ImprimirItem(int, int) override;

};
Carcasa::Carcasa(int x, int y, int dx, int anchura, int altura, bool existencia) :Item(x, y, dx, anchura, altura, existencia)
{
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->anchura = 3;
	this->altura = 1;
	this->existencia = existencia;
}
Carcasa::~Carcasa()
{
}
void Carcasa::ImprimirItem(int x, int y) {
	DibujarCarcasa(x, y);
}
//
//
//
//
class Cofre : public Item
{
protected:
	bool estarCercaDeCofre;
	int numero;
public:
	Cofre(int, int, int, int, int, bool, bool, int);
	~Cofre() override;
	void ImprimirItem(int, int) override;
	void SetEstarCerca(bool est) { estarCercaDeCofre = est; }
	bool GetEstarCerca() { return estarCercaDeCofre; }
	void SetNumero(int num) { numero = num; }
	int GetNumero() { return numero; }

};
Cofre::Cofre(int x, int y, int dx, int anchura, int altura, bool existencia, bool estarCercaDeCofre, int num) : Item(x, y, dx, anchura, altura, existencia)
{
	this->x = x;
	this->y = y;
	this->dx = dx;
	this->anchura = 3;
	this->altura = 1;
	this->existencia = existencia;
	this->estarCercaDeCofre = estarCercaDeCofre;
	numero = num;
}
Cofre::~Cofre()
{
}
void Cofre::ImprimirItem(int x, int y) {
	DibujarCofre(x, y);
}