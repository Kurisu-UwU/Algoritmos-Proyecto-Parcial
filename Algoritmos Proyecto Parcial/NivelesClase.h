#pragma once
#include "clases.h"
class Niveles {
private:
//Enemigos** listaEne;
	//int canEne;
	Proyectiles** listaPro;
	int canPro;
	Mejoras** listaMejora;
	int canMejora;
	Obstaculos** listaObs;
	int canObs;
public:
	Niveles();
	~Niveles();

	void GenerarProyectil(char n);
	void MostrarProyectil();
	void AtacarEnemigos(Enemigos*, Protagonista*);
	void EnemigoAcercaProta(Enemigos*, Protagonista*);
	void EnemigoMuere(Enemigos*);
	void GenerarObstaculo(int);
	void AtributosObstaculo(int, int, int, int, int, int);
	void BorrarObjetos();
	void GenerarMovimientoJugador(Protagonista*);

	int GetObjX(int obj) { return listaObs[obj]->GetX(); }
	int GetObjY(int obj) { return listaObs[obj]->GetY(); }
};
Niveles::Niveles() {
	//canEne = 0;
	//listaEne = nullptr;
	canPro = 0;
	listaPro = nullptr;
	canMejora = 0;
}
Niveles::~Niveles() {
	//if (listaEne != nullptr) delete[]listaEne;
	//if (listaPro != nullptr) delete[]listaPro;
	//if (listaMejora != nullptr) delete[]listaMejora;
	if (listaObs != nullptr) delete[]listaObs;
}
void Niveles::GenerarProyectil(char n) {
	Proyectiles* obproye;
	canObs = n;
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
void Niveles::GenerarObstaculo(int n) {
	canObs = n;
	listaObs = new Obstaculos* [n];
	for (int i = 0; i < n; i++)
		listaObs[i] = new Obstaculos(1,1,0,1,1,true);
}
void Niveles::BorrarObjetos() {
	//for (int i = 0; i < canObs; i++) {delete listaObs[i];}delete[]listaObs;
	//for (int i = 0; i < canProta; i++) { delete listaProta[i]; }delete[]listaProta;
	//for (int i = 0; i < canMejora; i++) { delete listaMejora[i]; }delete[]listaMejora;
	//for (int i = 0; i < canPro; i++) { delete listaPro[i]; }delete[]listaPro;
	//for (int i = 0; i < canEne; i++) { delete listaEne[i]; }delete[]listaEne;		
}
void Niveles::AtributosObstaculo(int numero, int x, int y, int velocidad, int ancho, int alto) {
	listaObs[numero]->SetX(x);
	listaObs[numero]->SetY(y);
	listaObs[numero]->SetAncho(ancho);
	listaObs[numero]->SetAlto(alto);
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
			float n = protagonista->AtacarEnemigos(enemigo->GetEX(), enemigo->GetEY());
			float f = enemigo->GetVida() + n;
			enemigo->SetVida(f);
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
void Niveles::GenerarMovimientoJugador(Protagonista* prota) {
	bool w, a, s, d; w = a = s = d = true;
	int px=prota->GetPX();
	int py = prota->GetPY();
	int pvl = prota->GetVelocidad();
	prota->Borrar();
	for (int i = 0; i < canObs; i++) {
		if (CalcularColisionesDireccionales(px, py, listaObs[i]->GetX(), listaObs[i]->GetY(), 4, 4, listaObs[i]->GetAncho(), listaObs[i]->GetAlto(),pvl, 0)==true) { w = false; }
		if (CalcularColisionesDireccionales(px, py, listaObs[i]->GetX(), listaObs[i]->GetY(), 4, 4, listaObs[i]->GetAncho(), listaObs[i]->GetAlto(),pvl, 1)==true) { a = false; }
		if (CalcularColisionesDireccionales(px, py, listaObs[i]->GetX(), listaObs[i]->GetY(), 4, 4, listaObs[i]->GetAncho(), listaObs[i]->GetAlto(),pvl, 2)==true) { s = false; }
		if (CalcularColisionesDireccionales(px, py, listaObs[i]->GetX(), listaObs[i]->GetY(), 4, 4, listaObs[i]->GetAncho(), listaObs[i]->GetAlto(),pvl, 3)==true) { d = false; }
	}
	prota->Mover(w, s, a, d);
	prota->Dibujar();
}