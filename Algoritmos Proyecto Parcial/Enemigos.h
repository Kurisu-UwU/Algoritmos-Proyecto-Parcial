#pragma once
#include "ASCIIArtsNiveles.h"
#include "Proyectiles.h"
class Enemigos {
private:
	int ex, ey;
	float cantidaddeataque, cantidaddevida, velocidad, velocidadtempo, velocidadataque;
	string tipo;
	bool vivo;
	Proyectiles** listaP;
	int cantdeproyectiles;
	Proyectiles* obproye;
	float tempo = 0;
public:
	Enemigos();
	Enemigos(int, int, float, float, float,float,float, string, bool, float);
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
	void SetVelocidadTempo(float v1);

	int GetEX();
	int GetEY();
	float GetAtaque();
	float GetVida();
	float GetVelocidad();
	float GetVelocidadTempo();
	string GetTipo();
	bool GetVivo() { return vivo; }
	int GetCantDeProyectiles() {return cantdeproyectiles;}

	void GenerarProyectil(char);
	void MostrarProyectil();
	void PerseguirProta(int, int);
	void AtacarProtagonista(int, int);
};
Enemigos::Enemigos() {
	ex = 0; ey = 0;
	cantdeproyectiles = 0;
	listaP = nullptr;
	velocidad = 1;
	velocidadtempo = 1;
}
Enemigos::Enemigos(int x1, int y1, float a1, float v1, float vel1,float vel1temp, float velatk, string t1, bool vi, float temp) {
	ex = x1; ey = y1;
	cantidaddeataque = a1;
	cantidaddevida = v1;
	velocidad = vel1;
	velocidadtempo = vel1temp;
	velocidadataque = velatk;
	tipo = t1;
	vivo = vi;
	cantdeproyectiles = 0;
	listaP = nullptr;
	tempo = temp;
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
void Enemigos::SetVelocidadTempo(float v1) { velocidadtempo = v1; }

int Enemigos::GetEX() { return ex; }
int Enemigos::GetEY() { return ey; }
float Enemigos::GetAtaque() { return cantidaddeataque; }
float Enemigos::GetVida() { return cantidaddevida; }
float Enemigos::GetVelocidad() { return velocidad; }
float Enemigos::GetVelocidadTempo() { return velocidadtempo; }
string Enemigos::GetTipo() { return tipo; }

void Enemigos::GenerarProyectil(char tecla) {
	if (cantidaddevida <= 0) {
		if (tecla == 'L' || tecla == 'l') {
			obproye = new Proyectiles();
			Proyectiles** proy = new Proyectiles * [cantdeproyectiles + 1]; //crea una nueva pelota
			for (int i = 0; i < cantdeproyectiles; i++) { proy[i] = listaP[i]; }
			proy[cantdeproyectiles] = obproye;
			cantdeproyectiles++;
			if (listaP != nullptr) { delete[]listaP; }
			listaP = proy;
		}
	}
}
void Enemigos::MostrarProyectil() {
	for (int i = 0; i < cantdeproyectiles; i++) {
		listaP[i]->Borrar();
		listaP[i]->Mover();
		listaP[i]->Dibujar();
	}
}
void Enemigos::PerseguirProta(int px, int py) {  // Implementación de la lógica para perseguir al protagonista
		if (tempo > 20 / velocidadtempo) {
			if (px > ex) {
				ex += velocidad * 2; // Mover hacia la derecha
			}
			else if (px < ex) {
				ex -= velocidad * 2; // Mover hacia la izquierda
			}
			if (py > ey) {
				ey += velocidad; // Mover hacia abajo
			}
			else if (py < ey) {
				ey -= velocidad; // Mover hacia arriba
			}
			tempo = 0; // Reiniciar el temporizador
		}
		tempo++;
}
//void Enemigos::AtacarProtagonista(Protagonista* prota) { // Implementación de la lógica para atacar al protagonista
//}