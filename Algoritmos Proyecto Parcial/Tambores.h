#pragma once
#include "Proyectiles.h"
#include "ASCIIArtsNiveles.h"
class Tambores: public Proyectiles {
private:
	short tipo;
	bool vivo;
public:
	Tambores();
	~Tambores();
	void Mover();

	void SetX(int x1) { x = x1; }
	void SetY(int y1) { y = y1; }
	//void SetDX(int dx1) { dx = dx1; }
	//void SetDY(int dy1) { dx = dy1; }
	void SetVivo(bool viv) { vivo = viv; }
	void SetTipo(short tip) { tipo = tip; }

	void Dibujar();
	void Borrar();

	bool PresionarTambores(int);

	int GetX() { return x; }
	int GetY() { return y; }
	//int GetDX() { return dx; }
	//int GetDY() { return dy; }
	bool GetVivo() { return vivo; }
	short GetTipo() { return tipo; }
};
Tambores::Tambores(): Proyectiles() { x = 10; y = 10; vivo = false; tipo = 0; }
Tambores::~Tambores() {}
 // Hay que generar una funcion que reciba los frames en variable e implementar el ritmo por el tiempo de variable,
	// tambien falta agregar una función que limite los fps para que todo funcione acorde a lo planeado, lo ideal sería que dependa del tiempo, bastante, lo más probable, en milisegundos
bool Tambores::PresionarTambores(int x2) {
	if ((tecla == 'Z' || tecla == 'z') && x == x2 && tipo == 0) { return true; }
	else if ((tecla == 'X' || tecla == 'x') && x == x2 && tipo == 1) { return true; }
	else { return false; }
}
void Tambores::Dibujar() {
	if (tipo == 0) { BColorAzul(); } else { BColorRojo(); }
	Posicion(x, y); cout << "    ";
	Posicion(x, y + 1); cout << "    ";
	BColorNegro();
}
void Tambores::Borrar() {
	Posicion(x, y); cout << "    ";
	Posicion(x, y + 1); cout << "    ";
}