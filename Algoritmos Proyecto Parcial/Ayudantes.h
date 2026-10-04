#pragma once
#include "PersonajesSecundarios.h"
class Ayudantes: public PersonajeSecundario {
private:
public:
	Ayudantes();
	Ayudantes(int, int, int, bool);
	~Ayudantes();
	void Borrar()override;
	void Dibujar() override;
};
Ayudantes::Ayudantes(): PersonajeSecundario() { ex = 10; ey = 10; velocidad = 1; }
Ayudantes::Ayudantes(int x1, int y1, int vel, bool vivo) { ex = x1; ey = y1; velocidad = vel; this->vivo = vivo; }
Ayudantes::~Ayudantes() {}
void Ayudantes::Borrar() {  }
void Ayudantes::Dibujar() {}