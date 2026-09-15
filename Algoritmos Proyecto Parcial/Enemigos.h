#pragma once
#include "ASCIIArtsNiveles.h"
class Enemigos {
private:
	int ex, ey;
	float ataque, vida, velocidad;
	string tipo;
public:
	Enemigos();
	Enemigos(int, int, float, float, float, string);
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

	int GetEX();
	int GetEY();
	float GetAtaque();
	float GetVida();
	float GetVelocidad();
	string GetTipo();
};
void Enemigos::Dibujar() {
	ColorRojo();
	Posicion(ex, ey); cout << "  X  ";
	Posicion(ex, ey + 1); cout << " /|\\ ";
	Posicion(ex, ey + 2); cout << " / \\ ";
}
void Enemigos::Borrar() {
	Posicion(ex, ey); cout << "     ";
	Posicion(ex, ey + 1); cout << "     ";
	Posicion(ex, ey + 2); cout << "     ";
}
void Enemigos::Mover() {}
void Enemigos::SetEX(int x1) { ex = x1; }
void Enemigos::SetEY(int y1) { ey = y1; }
void Enemigos::SetAtaque(float a1) { ataque = a1; }
void Enemigos::SetVida(float v1) { vida = v1; }
void Enemigos::SetVelocidad(float v1) { velocidad = v1; }
void Enemigos::SetTipo(string t1) { tipo = t1; }

int Enemigos::GetEX() { return ex; }
int Enemigos::GetEY() { return ey; }
float Enemigos::GetAtaque() { return ataque; }
float Enemigos::GetVida() { return vida; }
float Enemigos::GetVelocidad() { return velocidad; }
string Enemigos::GetTipo() { return tipo; }