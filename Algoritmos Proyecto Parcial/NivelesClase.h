#pragma once
#include "clases.h"
class Niveles {
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
	Niveles();
	~Niveles();

	void GenerarProyectil(char n);
	void MostrarProyectil();
	void AtacarEnemigos(Enemigos*, Protagonista*);
	void EnemigoAcercaProta(Enemigos*, Protagonista*);
	void EnemigoMuere(Enemigos*);
};
Niveles::Niveles() {
	canEne = 0;
	listaEne = nullptr;
	canPro = 0;
	listaPro = nullptr;
	canMejora = 0;
	listaProta = nullptr;
}
Niveles::~Niveles() {
	if (listaEne != nullptr) delete[]listaEne;
	if (listaPro != nullptr) delete[]listaPro;
	if (listaMejora != nullptr) delete[]listaMejora;
	if (listaProta != nullptr) delete[]listaProta;
}
void Niveles::GenerarProyectil(char n) {
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
void Niveles::MostrarProyectil() {
	for (int i = 0; i < canPro; i++) {
		listaPro[i]->Borrar();
		listaPro[i]->Mover();
		listaPro[i]->Dibujar();
	}
}
void Niveles::AtacarEnemigos(Enemigos* enemigo, Protagonista* protagonista) {
	if (enemigo->GetVivo()) {
	enemigo->SetVida(enemigo->GetVida()-(protagonista->AtacarEnemigos(enemigo->GetEX(), enemigo->GetEY(), enemigo->GetVida())));
	}
}
void Niveles::EnemigoAcercaProta(Enemigos* enemigo, Protagonista* protagonista) {
	if (enemigo->GetVivo()) {
		enemigo->Borrar();
		enemigo->PerseguirProta(protagonista->GetPX(), protagonista->GetPY());
		enemigo->Dibujar();
	}
}
void Niveles::EnemigoMuere(Enemigos* enemigo) {
		if (enemigo->GetVida() <= 0) {
		enemigo->SetVivo(false);
		enemigo->Borrar();
		}
}