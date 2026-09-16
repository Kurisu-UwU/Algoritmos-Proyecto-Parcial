#pragma once
#include "ASCIIArtsNiveles.h"
#include "Proyectiles.h"
class Enemigos {
private:
	int ex, ey;
	float cantidaddeataque, cantidaddevida, velocidad;
	string tipo;
	bool vivo;
	Proyectiles** listaP;
	int cantdeproyectiles;
	Proyectiles* obproye;
public:
	Enemigos();
	Enemigos(int, int, float, float, float, string, bool);
	~Enemigos();

	void Dibujar();
	void Borrar();
	void Mover();

	void SetEX(int);
	void SetEY(int);
	void SetAtaque(float);
	void SetVida(float);
	void SetVelocidad(float);
	void SetTipo(string);
	void SetVivo(bool);
	void GenerarProyectil(char tecla);
	void MostrarProyectil();

	int GetEX();
	int GetEY();
	float GetAtaque();
	float GetVida();
	float GetVelocidad();
	string GetTipo();
	bool GetVivo();
	int GetCantDeProyectiles();
};
Enemigos::Enemigos() {
	cantdeproyectiles = 0;
	listaP = nullptr;
}
Enemigos::~Enemigos() {if (listaP != nullptr) delete[]listaP;}
void Enemigos::Dibujar() {DibujarEnemigo(ex, ey);}
void Enemigos::Borrar() {BorrarSprite(ex, ey);}
void Enemigos::Mover() {
}
void Enemigos::SetEX(int x1) { ex = x1; }
void Enemigos::SetEY(int y1) { ey = y1; }
void Enemigos::SetAtaque(float a1) { cantidaddeataque = a1; }
void Enemigos::SetVida(float v1) { cantidaddevida = v1; }
void Enemigos::SetVelocidad(float v1) { velocidad = v1; }
void Enemigos::SetTipo(string t1) { tipo = t1; }
void Enemigos::SetVivo(bool vi) { vivo = vi; }

int Enemigos::GetEX() { return ex; }
int Enemigos::GetEY() { return ey; }
float Enemigos::GetAtaque() { return cantidaddeataque; }
float Enemigos::GetVida() { return cantidaddevida; }
float Enemigos::GetVelocidad() { return velocidad; }
bool Enemigos::GetVivo() { return vivo; }
string Enemigos::GetTipo() { return tipo; }

void Enemigos::GenerarProyectil(char tecla) {
	if (tecla == 'L' || tecla == 'l') {
		obproye = new Proyectiles();

		Proyectiles** proy = new Proyectiles * [cantdeproyectiles + 1]; //crea una nueva pelota
		for (int i = 0; i < cantdeproyectiles; i++)
			proy[i] = listaP[i];

		proy[cantdeproyectiles] = obproye;
		cantdeproyectiles++;

		if (listaP != nullptr)
			delete[]listaP;

		listaP = proy;
	}
}
void Enemigos::MostrarProyectil() {
	for (int i = 0; i < cantdeproyectiles; i++) {
		listaP[i]->Borrar();
		listaP[i]->Mover();
		listaP[i]->Dibujar();
	}
}
int Enemigos::GetCantDeProyectiles() {
	return cantdeproyectiles;
}