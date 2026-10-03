#pragma once
#include "Protagonistas.h"

class SpiderPunk : public Protagonista {
protected:
public:
	SpiderPunk(int, int, int, int, float, float, float, float, float, float, string, short, short, short);
	~SpiderPunk();

	virtual void Dibujar();
	void Borrar()override;

	void Generarhabilidades()override;
	void DibujarHabilidades();
	void ControladorTiempoHabilidades(short) override;
	bool SobreObjeto(int, int, int, int);
};

SpiderPunk::SpiderPunk(int x1, int y1, int anch, int alt, float e1, float vx1, float vy1, float a1, float vi1, float car, string n1, short tip, short mira, short cantHabilidades) : Protagonista() {
	px = x1; py = y1; energia = e1; velocidadx = vx1; velocidady = vy1; ataque = a1; vida = vi1; carga = car; nombre = n1; tipo = tip; direccionMirada = mira; cantidadhabilidades = cantHabilidades; ancho = anch; alto = alt;
}
SpiderPunk::~SpiderPunk() {}
void SpiderPunk::Dibujar() {
	DibujarPunk(px, py);
}
void SpiderPunk::Borrar() {
	BorrarPunk(px, py); 
}

void SpiderPunk::ControladorTiempoHabilidades(short tipodetecla) { // 0 para q, 1 para e, 2 para r
	time_t ahora = time(nullptr);
	if (habilidades[tipodetecla]->GetListo() == true) {
		habilidades[tipodetecla]->SetInicio(ahora);
		habilidades[tipodetecla]->SetListo(false);
	}
}
void SpiderPunk::Generarhabilidades() {  // el SpiderPunk guarda la información de las habilidades, este es el inicializador
	time_t n = time(nullptr);
	habilidades = new Habilidades * [2];
	Habilidades* Qhabilidad = new Habilidades(1, 2, n, true, 1);
	Habilidades* Ehabilidad = new Habilidades(2, 4, n, true, 1);
	Habilidades* Rhabilidad = new Habilidades(3, 5, n, true, 1);
	habilidades[0] = Qhabilidad;
	habilidades[1] = Ehabilidad;
	habilidades[2] = Rhabilidad;
	habilidades[0]->Dibujar();
}
void SpiderPunk::DibujarHabilidades() { // dibuja las habilidades dependiendo de la tecla
	time_t ahora = time(nullptr);
	bool n = habilidades[0]->GetListo();
	if (!n) {
		habilidades[0]->SetTiempoAhora(ahora);
		time_t diferencia = ahora - (habilidades[0]->GetInicio());
		habilidades[0]->Dibujar();
		if ((time_t)diferencia > (time_t)habilidades[0]->GetCooldownTime()) {
			habilidades[0]->SetListo(true);
			habilidades[0]->Dibujar();
		}
	}
}

bool SpiderPunk::SobreObjeto(int x, int y, int altura, int anchura) {
	bool colision;
	if (((px < x + anchura) && (px >= x)) && ((py < y + altura) && (py >= y))) {
		colision = true;
	}
	else {
		colision = false;
	}
	return colision;
}
