#pragma once
#include "ASCIIArtsNiveles.h"
class Protagonista {
private:
	int px, py;
	float energia, velocidad, ataque, vida, carga;
	string nombre;
	short tipo;  // 1 es miles | 2 es Miguel | 3 es punk
public:
	Protagonista();
	Protagonista(int, int, float, float, float, float, string);
	~Protagonista();

	void Dibujar();
	void Borrar();
	void Mover(bool, bool, bool, bool, char);

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
Protagonista::Protagonista() {
	px = 10; py = 10; energia = 100; velocidad = 1; ataque = 10; vida = 100; carga = 0; nombre = "Sin nombre";
}
Protagonista::Protagonista(int x1, int y1, float e1, float v1, float a1, float vi1, string n1) {
	px = x1; py = y1; energia = e1; velocidad = v1; ataque = a1; vida = vi1; carga = 0; nombre = n1;
}
Protagonista::~Protagonista() {}
void Protagonista::Dibujar() {
	switch (tipo) {
	case 1: DibujarMiles(px, py); break;
	case 2: DibujarMiguel(px, py); break;
	case 3: DibujarPunk(px, py); break;
	}
}
void Protagonista::Borrar() {
	BorrarSprite(px, py);
}
void Protagonista::Mover(bool arriba, bool abajo, bool izquierda, bool derecha, char tecla2) {
	if ((tecla2 == 'w' || tecla2 == 'W') && (arriba == true) && (py > 4)) { py--; }
	if (tecla2 == 'w' || tecla2 == 'W') { ImprimirWASD(); AnimacionWASD(1); }
	if ((tecla2 == 's' || tecla2 == 'S') && (abajo == true) && (py < 27)) { py++; }
	if (tecla2 == 's' || tecla2 == 'S') { ImprimirWASD(); AnimacionWASD(3); }
	if ((tecla2 == 'a' || tecla2 == 'A') && (izquierda == true) && (px > 0)) { px -= 2; }
	if (tecla2 == 'a' || tecla2 == 'A') { ImprimirWASD(); AnimacionWASD(2); }
	if ((tecla2 == 'd' || tecla2 == 'D') && (derecha == true) && (px < 102)) { px += 2; }
	if (tecla2 == 'd' || tecla2 == 'D') { ImprimirWASD(); AnimacionWASD(4); }
	if (tecla2 == 'z' || tecla2 == 'Z') { ImprimirWASD(); AnimacionWASD(5); }
}

void Protagonista::SetPX(int x1) { px = x1; }
void Protagonista::SetPY(int y1) { py = y1; }
void Protagonista::SetEnergia(float e1) { energia = e1; }
void Protagonista::SetVelocidad(float v1) { velocidad = v1; }
void Protagonista::SetAtaque(float a1) { ataque = a1; }
void Protagonista::SetVida(float vi1) { vida = vi1; }
void Protagonista::SetCarga(float c1) { carga = c1; }
void Protagonista::SetNombre(string n1) { nombre = n1; }

int Protagonista::GetPX() { return px; }
int Protagonista::GetPY() { return py; }
float Protagonista::GetEnergia() { return energia; }
float Protagonista::GetVelocidad() { return velocidad; }
float Protagonista::GetAtaque() { return ataque; }
float Protagonista::GetVida() { return vida; }
float Protagonista::GetCarga() { return carga; }
string Protagonista::GetNombre() { return nombre; }
