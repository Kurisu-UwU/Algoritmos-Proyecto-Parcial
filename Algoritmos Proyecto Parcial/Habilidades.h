#pragma once
#include "ASCIIArtsNiveles.h"
#include "Protagonistas.h"
class Habilidades {
private:
	int n;
	time_t inicio;
	time_t tiempoahora;

public:
	Habilidades();
	Habilidades(int, time_t, time_t);
	~Habilidades();

	void TiempoHabilidad();

	void SetInicio(time_t ini) { inicio = ini; }
	void SetTiempoAhora(time_t tmpahora) { tiempoahora = tmpahora; }

	time_t GetInicio() { return inicio; }
	time_t GetTiempoAhora() { return tiempoahora; }
	void Dibujar(bool);



	bool GetCooldown() {
		tiempoahora = time(nullptr);
		if (tiempoahora - 3 >= inicio) {
			return true;
		}
		else {
			return false;
		}
	}
};
Habilidades::Habilidades() {}
Habilidades::Habilidades(int ne, time_t ini, time_t aho) {
	n = ne;
	inicio = ini;
	tiempoahora = aho;
}
Habilidades::~Habilidades() {}

void Habilidades::TiempoHabilidad() { //inicialización de condicion para determinar cuanto tiempo ha pasado para el cooldown de la habilidad
	inicio = time(nullptr);
}
void Habilidades::Dibujar(bool n) {  // Para dibujar las habilidades en rojo o verde dependiendo si están listas o no
	if (tiempoahora -3 >= inicio) {
		switch (n) {
		case 1: DibujarHabilidadQ(n); break;
		}
	}
	else {
		switch (n) {
		case 1: DibujarHabilidadQ(n); break;
		}
	}
}