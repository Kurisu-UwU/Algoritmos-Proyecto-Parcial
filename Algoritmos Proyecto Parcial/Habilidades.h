#pragma once
#include "ASCIIArtsNiveles.h"
#include "Protagonistas.h"
class Habilidades {
private:
	int n;
	time_t inicio;
	time_t tiempoahora;
	time_t cooldown;
	bool listo;
	int tiemporestante;

public:
	Habilidades();
	Habilidades(int, int, time_t, bool);
	~Habilidades();

	void TiempoHabilidad();

	void SetInicio(time_t ini) { inicio = ini; }
	void SetTiempoAhora(time_t tmpahora) { tiempoahora = tmpahora; }
	void SetListo(bool lis) { listo = lis; }	

	time_t GetInicio() { return inicio; }
	time_t GetTiempoAhora() { return tiempoahora; }
	time_t GetCooldownTime() { return cooldown; }
	bool GetListo() { return listo; }
	void Dibujar();



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
Habilidades::Habilidades(int ne, int cool, time_t t, bool lis) {
	n = ne;
	cooldown = cool;
	inicio = t;
	listo = lis;
}
Habilidades::~Habilidades() {}

void Habilidades::TiempoHabilidad() { //inicialización de condicion para determinar cuanto tiempo ha pasado para el cooldown de la habilidad
	inicio = time(nullptr);
}
void Habilidades::Dibujar() {  // Para dibujar las habilidades en rojo o verde dependiendo si están listas o no
	int n = cooldown - (tiempoahora - inicio);
		DibujarHabilidadQ(listo,n);
}