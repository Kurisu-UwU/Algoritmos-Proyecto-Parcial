#pragma once
#include "NivelesClase.h"
class Persecucion : public Niveles {
protected:
	Carros** listaCarro;
	int canCarro;
public:
	Persecucion();
	~Persecucion();

	void GenerarCarros(int);
	void RevivirCarro(short, short);
	void CarrosMovimiento(Protagonista*);
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
void Persecucion::CarrosMovimiento(Protagonista* prota) {
	for (int i = 0; i < canCarro; i++) {
		if (listaCarro[i]->GetVivo() == true) {
			if (listaCarro[i]->GetVivo() == true) { listaCarro[i]->Borrar(); }
			if (listaCarro[i]->GetX() > 2) { listaCarro[i]->SetX(listaCarro[i]->GetX() - 1); }
			if (listaCarro[i]->GetVivo() == true) { listaCarro[i]->Dibujar(); }
			if (listaCarro[i]->GetX() < 3 && listaCarro[i]->GetVivo()) {
				listaCarro[i]->SetVivo(false);
				listaCarro[i]->Borrar();
			}
			if (!listaCarro[i]->GetYapego()) {    //Claude en un mal return 0 return 1
				if (CalcularColisiones(prota->GetPX(), prota->GetPY(), listaCarro[i]->GetX(), listaCarro[i]->GetY(), prota->GetAlto(), prota->GetAncho(), listaCarro[i]->GetAlto(), listaCarro[i]->GetAncho())) {
					prota->SetVida(prota->GetVida() - 1);
					listaCarro[i]->SetYapego(true);
				}
			}
		}
	}
}	
void Persecucion::RevivirCarro(short tipo, short nivel) {
	bool n = true;
	int i = 0;
	int y;
	switch (nivel) {
	case 0: y = 19; break;
	case 1: y = 24; break;
	case 2: y = 28; break;
	default: break;
	}
	do {
		if (listaCarro[i]->GetVivo() == false) {
			if (tipo == 0) { listaCarro[i]->SetY(y + 1); listaCarro[i]->SetX(200);
			} else {listaCarro[i]->SetX(192);listaCarro[i]->SetY(y);}
			listaCarro[i]->SetTipo(tipo);
			listaCarro[i]->SetVivo(true);
			n = false;  // github copilot
			listaCarro[i]->Dibujar();
			listaCarro[i]->SetYapego(false);
		}
		if (i < canCarro) { i++; }   // Claude en CanTamb en vez de canCarro
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
		listaCarro[i]->SetYapego(false);
	}
}