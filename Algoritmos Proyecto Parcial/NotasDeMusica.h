#pragma once
#include "Proyectiles.h"
#include "ASCIIArtsNiveles.h"
class Notas : public Proyectiles {
private:
	short tipo;
	bool vivo;
public:
	Notas();
	~Notas();

	void SetX(int x1) { x = x1; }
	void SetY(int y1) { y = y1; }
	//void SetDX(int dx1) { dx = dx1; }
	//void SetDY(int dy1) { dx = dy1; }
	void SetVivo(bool viv) { vivo = viv; }
	void SetTipo(short tip) { tipo = tip; }

	void Dibujar();
	void Borrar();

	bool PresionarNotas(int);

	int GetX() { return x; }
	int GetY() { return y; }
	//int GetDX() { return dx; }
	//int GetDY() { return dy; }
	bool GetVivo() { return vivo; }
	short GetTipo() { return tipo; }
};
Notas::Notas() : Proyectiles() { x = 10; y = 10; vivo = false; tipo = 0; }
Notas::~Notas() {}
// Hay que generar una funcion que reciba los frames en variable e implementar el ritmo por el tiempo de variable,
   // tambien falta agregar una función que limite los fps para que todo funcione acorde a lo planeado, lo ideal sería que dependa del tiempo, bastante, lo más probable, en milisegundos
void Notas::Dibujar() {
	if (tipo == 0) { BColorAzul(); }
	else { BColorRojo(); }
	Posicion(x, y); cout << "    ";
	Posicion(x, y + 1); cout << "    ";
	BColorNegro();
}
void Notas::Borrar() {
	Posicion(x, y); cout << "    ";
	Posicion(x, y + 1); cout << "    ";
}