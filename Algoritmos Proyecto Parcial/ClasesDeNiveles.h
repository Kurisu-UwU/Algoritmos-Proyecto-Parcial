#pragma once
#include "AsciiArtsMenu.h"
#include "ASCIIArtsNiveles.h"


// PROTAGONISGTAS--------------------

class Personaje {
private:
	int px, py;
	float energia, velocidad, ataque, vida, carga;
	string nombre;
public:
	Personaje();
	Personaje(int, int, float, float, float, float, string);
	~Personaje();

	void Dibujar();
	void Borrar();
	void Mover();

	void SetPX(int);
	void SetPY(int);
	void SetEnergia(float);
	void SetVelocidad(float);
	void SetAtaque(float);
	void SetVida(float);
	void SetCarga(float);
	void SetNombre(string);

	int GetPX();
	int GetPY();
	float GetEnergia();
	float GetVelocidad();
	float GetAtaque();
	float GetVida();
	float GetCarga();
	string GetNombre();
};
Personaje::Personaje() { 
	px = 10; py = 10; energia = 100; velocidad = 1; ataque = 10; vida = 100; carga = 0; nombre = "Sin nombre"; 
}
Personaje::Personaje(int x1, int y1, float e1, float v1, float a1, float vi1, string n1) { 
	px = x1; py = y1; energia = e1; velocidad = v1; ataque = a1; vida = vi1; carga = 0; nombre = n1; 
}
Personaje::~Personaje() {}
void Personaje::Dibujar() {
	ColorVerde();
	Posicion(px, py); cout << "  O  ";
	Posicion(px, py + 1); cout << " /|\\ ";
	Posicion(px, py + 2); cout << " / \\ ";
}
void Personaje::Borrar() {
	Posicion(px, py); cout << "     ";
	Posicion(px, py + 1); cout << "     ";
	Posicion(px, py + 2); cout << "     ";
}
void Personaje::Mover() {
}

void Personaje::SetPX(int x1) { px = x1; }
void Personaje::SetPY(int y1) { py = y1; }
void Personaje::SetEnergia(float e1) { energia = e1; }
void Personaje::SetVelocidad(float v1) { velocidad = v1; }
void Personaje::SetAtaque(float a1) { ataque = a1; }
void Personaje::SetVida(float vi1) { vida = vi1; }
void Personaje::SetCarga(float c1) { carga = c1; }
void Personaje::SetNombre(string n1) { nombre = n1; }

int Personaje::GetPX() { return px; }
int Personaje::GetPY() { return py; }
float Personaje::GetEnergia() { return energia; }
float Personaje::GetVelocidad() { return velocidad; }
float Personaje::GetAtaque() { return ataque; }
float Personaje::GetVida() { return vida; }
float Personaje::GetCarga() { return carga; }
string Personaje::GetNombre() { return nombre; }


// ----------------ENEMIGOS---------------------

class Enemigo {
private:
	int ex, ey;
	float ataque, vida, velocidad;
	string tipo;
public:
	Enemigo();
	Enemigo(int, int, float, float, float, string);
	~Enemigo();

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
void Enemigo::Dibujar() {
	ColorRojo();
	Posicion(ex, ey); cout << "  X  ";
	Posicion(ex, ey + 1); cout << " /|\\ ";
	Posicion(ex, ey + 2); cout << " / \\ ";
}
void Enemigo::Borrar() {
	Posicion(ex, ey); cout << "     ";
	Posicion(ex, ey + 1); cout << "     ";
	Posicion(ex, ey + 2); cout << "     ";
}
void Enemigo::Mover() {
}
void Enemigo::SetEX(int x1) { ex = x1; }
void Enemigo::SetEY(int y1) { ey = y1; }
void Enemigo::SetAtaque(float a1) { ataque = a1; }
void Enemigo::SetVida(float v1) { vida = v1; }
void Enemigo::SetVelocidad(float v1) { velocidad = v1; }
void Enemigo::SetTipo(string t1) { tipo = t1; }

int Enemigo::GetEX() { return ex; }
int Enemigo::GetEY() { return ey; }
float Enemigo::GetAtaque() { return ataque; }
float Enemigo::GetVida() { return vida; }
float Enemigo::GetVelocidad() { return velocidad; }
string Enemigo::GetTipo() { return tipo; }