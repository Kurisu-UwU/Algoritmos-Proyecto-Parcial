#pragma once
#include "ASCIIArtsNiveles.h"
#include "Proyectiles.h"
#include "Mejoras.h"
class NivelBatalla {
private:
	Enemigos** listaEne;
	int canEne;
	Proyectiles** listaPro;
	int canPro;
	Mejoras** listaMejora;
	int canMejora;
	Protagonista** listaProta;
	int canProta;

public:
	NivelBatalla();
	~NivelBatalla();

	void GenerarProyectil(char n);
	void MostrarProyectil();
};
NivelBatalla::NivelBatalla() {
	canEne = 0;
	listaEne = nullptr;
	canPro = 0;
	listaPro = nullptr;
	canMejora = 0;
	listaProta = nullptr;
}
NivelBatalla::~NivelBatalla() {
	if (listaEne != nullptr) delete[]listaEne;
	if (listaPro != nullptr) delete[]listaPro;
	if (listaMejora != nullptr) delete[]listaMejora;
	if (listaProta != nullptr) delete[]listaProta;
}
void NivelBatalla::GenerarProyectil(char n) {
	Proyectiles* obproye;
	if (n == 'L' || n == 'l')
	{
		Proyectiles** proy = new Proyectiles * [canPro + 1];
		for (int i = 0; i < canPro; i++)
			proy[i] = listaPro[i];

		proy[n] = obproye;
		canPro++;

		if (listaPro != nullptr)
			delete[]listaPro;

		listaPro = proy;
	}
	if (canPro > 0) {
		for (int i = 0; i < canPro; i++) {
			listaPro[i]->Borrar();
			listaPro[i]->Mover();
			listaPro[i]->Dibujar();
		}
	}
}
void NivelBatalla::MostrarProyectil() {
	for (int i = 0; i < canPro; i++) {
		listaPro[i]->Borrar();
		listaPro[i]->Mover();
		listaPro[i]->Dibujar();
	}
}