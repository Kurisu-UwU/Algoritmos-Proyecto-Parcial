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
	time_t tiemporestante;
	time_t tiempoefecto;
public:
	Habilidades();
	Habilidades(int, int, time_t, bool, time_t);
	~Habilidades();

	void TiempoHabilidad();

	void SetInicio(time_t ini) { inicio = ini; }
	void SetTiempoAhora(time_t tmpahora) { tiempoahora = tmpahora; }
	void SetListo(bool lis) { listo = lis; }	
	void SetTiempoEfecto(time_t duracion) { tiempoefecto = duracion; }
	void SetTiempoRestante(time_t tiempo) { tiemporestante = tiempo; }

	// Funciones para obtener los valores de las variables privadas
	time_t GetInicio() { return inicio; }
	time_t GetTiempoAhora() { return tiempoahora; }// Función para obtener el tiempo restante de la habilidad
	time_t GetCooldownTime() { return cooldown; }
	time_t GetTiempoEfecto() { return tiempoefecto; }
	time_t GetTiempoRestante() { return tiemporestante; }
	bool GetListo() { return listo; }
	void Dibujar();
	void DibujarMiles(int);

	// Función para determinar si la habilidad está lista o no
	bool GetCooldown() {
		tiempoahora = time(nullptr);
		if (tiempoahora - 3 >= inicio) { return true; }
		else { return false; }
	}
};
Habilidades::Habilidades() {}
Habilidades::Habilidades(int ne, int cool, time_t t, bool lis, time_t duracionDeHabilidad) {
	n = ne;
	cooldown = cool;
	inicio = t;
	listo = lis;
	tiempoefecto = duracionDeHabilidad;
}
Habilidades::~Habilidades() {}

void Habilidades::TiempoHabilidad() { //inicialización de condicion para determinar cuanto tiempo ha pasado para el cooldown de la habilidad
	inicio = time(nullptr);
}
void Habilidades::Dibujar() {  // Para dibujar las habilidades en rojo o verde dependiendo si están listas o no
	int e = cooldown - (tiempoahora - inicio);
	DibujarHabilidadQ(listo, e);
}
void Habilidades::DibujarMiles(int f) {
	DibujarEfectoMiles(f);
}