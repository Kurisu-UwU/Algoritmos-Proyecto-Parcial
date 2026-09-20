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

void Habilidades::TiempoHabilidad() {
	inicio = time(nullptr);
}