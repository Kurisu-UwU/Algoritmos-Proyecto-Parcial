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
	int CarrosMovimiento(Protagonista*);
	void AtributosCarros();
};
Persecucion::Persecucion():Niveles() {
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
int Persecucion::CarrosMovimiento(Protagonista* prota) {
	for (int i = 0; i < canCarro; i++) {
		if (listaCarro[i]->GetVivo() == true) {
			if (listaCarro[i]->GetVivo() == true) { listaCarro[i]->Borrar(); }
			if (listaCarro[i]->GetX() > 2) { listaCarro[i]->SetX(listaCarro[i]->GetX() - 1); }
			if (listaCarro[i]->GetVivo() == true) { listaCarro[i]->Dibujar(); }
			if (listaCarro[i]->GetX() < 3 && listaCarro[i]->GetVivo()) {
				listaCarro[i]->SetVivo(false);
				listaCarro[i]->Borrar();
			}
			if (CalcularColisiones(prota->GetPX(), prota->GetPY(), listaCarro[i]->GetX(), listaCarro[i]->GetY(), prota->GetAlto(), prota->GetAncho(), listaCarro[i]->GetAlto(), listaCarro[i]->GetAncho())) {
				return 1;
			}
			else { return 0; }
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
			listaCarro[i]->Dibujar();
		}
		if (i < canTamb) { i++; }
	} while (n);
}
void Persecucion::AtributosCarros() {  // asignación de atributos a los obstáculos
	for (int i = 0; i < canCarro; i++) {
		listaCarro[i]->SetX(2);
		listaCarro[i]->SetY(25);
		listaCarro[i]->SetTipo(1);
		listaCarro[i]->SetVivo(false);
		listaCarro[i]->SetAncho(1);
		listaCarro[i]->SetAlto(1);
		listaCarro[i]->SetDamage(1);
	}
}