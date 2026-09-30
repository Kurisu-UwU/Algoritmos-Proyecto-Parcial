#pragma once
#include "NivelesClase.h"
class Persecucion : public Niveles {
protected:
	Carros** listaCarro;
	int canCarro;
public:
	Persecucion();
	~Persecucion() override;

	void GenerarCarros(int);
	void RevivirCarro(short, short);
	void CarrosMovimiento(int);
	void AtributosCarros(int);
};
Persecucion::Persecucion() {
	//canEne = 0;
	//listaEne = nullptr;
	canPro = 0;
	listaPro = nullptr;
	canMejora = 0;
	MostrarPreguntaCofre = true;
}
Persecucion::~Persecucion() {  // eliminador
	//if (listaEne != nullptr) delete[]listaEne;
	//if (listaPro != nullptr) delete[]listaPro;
	//if (listaMejora != nullptr) delete[]listaMejora;
	if (listaObs != nullptr) delete[]listaObs;
}

void Persecucion::GenerarCarros(int cantidad) {
	canCarro = cantidad;
	listaCarro = new Carros * [cantidad];
	for (int i = 0; i < cantidad; i++)
		listaCarro[i] = new Carros();
}
void Persecucion::CarrosMovimiento(int psocicionparatocar) {
	for (int i = 0; i < canTamb; i++) {
		if (listaTamb[i]->GetVivo() == true) {
			if (listaTamb[i]->GetVivo() == true) { listaTamb[i]->Borrar(); }
			if (listaTamb[i]->GetX() > psocicionparatocar - 11) { listaTamb[i]->SetX(listaTamb[i]->GetX() - 1); }
			if (listaTamb[i]->GetVivo() == true) { listaTamb[i]->Dibujar(); }
			if (listaTamb[i]->GetX() < psocicionparatocar - 10 && listaTamb[i]->GetVivo()) {
				listaTamb[i]->SetVivo(false);
				listaTamb[i]->Borrar();
			}
		}
	}
}	
void Persecucion::RevivirCarro(short tipo, short nivel) {
	bool n = true;
	int i = 0;
	int y;
	switch (nivel) {
	case 0: y = 18; break;
	case 1: y = 25; break;
	case 2: y = 32; break;
	default: break;
	}
	do {
		if (listaCarro[i]->GetVivo() == false) {
			listaCarro[i]->SetX(180);
			listaCarro[i]->SetY(y);
			listaCarro[i]->SetTipo(tipo);
			listaCarro[i]->SetVivo(true);
			n = false;  // github copilot
			listaCarro[i]->Dibujar(tipo);
		}
		if (i < canTamb) { i++; }
	} while (n);
}