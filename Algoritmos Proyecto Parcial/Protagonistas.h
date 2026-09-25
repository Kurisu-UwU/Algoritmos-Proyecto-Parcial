#pragma once
#include "ASCIIArtsNiveles.h"
#include "Habilidades.h"

class Protagonista {
private:
	int px, py;
	float energia, velocidadx, velocidady, ataque, vida, carga;
	string nombre;
	short tipo;  // 1 es miles | 2 es Miguel | 3 es punk
	short direccionMirada;
	Habilidades** habilidades;
	short cantidadhabilidades;

public:
	Protagonista();
	Protagonista(int, int, float, float, float, float, float, float, string, short, short, short);
	~Protagonista();

	void Dibujar();
	void Borrar();
	void Mover(bool, bool, bool, bool);
	void SetPX(int x1) { px = x1; }  //setters
	void SetPY(int y1) { py = y1; }
	void SetEnergia(float e1) { energia = e1; }
	void SetVelocidadx(float vx1) { velocidadx = vx1; }
	void SetVelocidady(float vy1) { velocidady = vy1; }
	void SetAtaque(float a1) { ataque = a1; }
	void SetVida(float vi1) { vida = vi1; }
	void SetCarga(float c1) { carga = c1; }
	void SetNombre(string n1) { nombre = n1; }
	void SetMirada(short);

	void Generarhabilidades();
	float AtacarEnemigos(int, int);
	void DibujarHabilidades();
	void ControladorTiempoHabilidades(short);
	bool SobreObjeto(int, int, int, int);

	int GetPX() { return px; }  // getters
	int GetPY() { return py; }
	float GetEnergia() { return energia; }
	float GetVelocidadx() { return velocidadx; }
	float GetVelocidady() { return velocidady; }
	float GetAtaque() { return ataque; }
	float GetVida() { return vida; }
	float GetCarga() { return carga; }
	string GetNombre() { return nombre; }
	short GetMirada();
};
Protagonista::Protagonista() {
	px = 10; py = 10; energia = 100; velocidadx = 1; velocidady = 2; ataque = 10; vida = 100; carga = 1; nombre = "Sin nombre"; tipo = 1;
}
Protagonista::Protagonista(int x1, int y1, float e1, float vx1, float vy1, float a1, float vi1, float car, string n1, short tip, short mira, short cantHabilidades) {
	px = x1; py = y1; energia = e1; velocidadx = vx1; velocidady = vy1; ataque = a1; vida = vi1; carga = car; nombre = n1; tipo = tip; direccionMirada = mira; cantidadhabilidades = cantHabilidades;
}
Protagonista::~Protagonista() {}
void Protagonista::Dibujar() {
	switch (tipo) {
	case 1: DibujarMiles(px, py); break;
	case 2: DibujarMiguel(px, py); break;
	case 3: DibujarPunk(px, py); break;
	}
}
void Protagonista::Borrar() {BorrarSprite(px, py);}
void Protagonista::Mover(bool arriba, bool abajo, bool izquierda, bool derecha) {  
	// condicion del prota para que no salga de la pantalla
	if ((tecla == 'w' || tecla == 'W') && (arriba == true) && (py > 7)) { py--; }
	if (tecla == 'w' || tecla == 'W') { direccionMirada = 1; DibujarWASD(190, 1); AnimacionWASD(190, 1, direccionMirada); }
	if ((tecla == 's' || tecla == 'S') && (abajo == true) && (py < 44)) { py++; }
	if (tecla == 's' || tecla == 'S') { direccionMirada = 3; DibujarWASD(190, 1); AnimacionWASD(190, 1, direccionMirada); }
	if ((tecla == 'a' || tecla == 'A') && (izquierda == true) && (px > 0)) { px -= 2; }
	if (tecla == 'a' || tecla == 'A') { direccionMirada = 2; DibujarWASD(190, 1); AnimacionWASD(190, 1, direccionMirada); }
	if ((tecla == 'd' || tecla == 'D') && (derecha == true) && (px < 206)) { px += 2; }
	if (tecla == 'd' || tecla == 'D') { direccionMirada = 4; DibujarWASD(190, 1); AnimacionWASD(190, 1, direccionMirada); }
	if (tecla == 'z' || tecla == 'Z') {DibujarWASD(190, 1); AnimacionWASD(190, 1, 5);}
}
float Protagonista::AtacarEnemigos(int ex, int ey) {		// Colosiones  //if ((ex - 1 <= px + 4 && ey - 1 <= py + 4) && (ex + 4 >= px - 1 && ey + 4 >= py - 1)) {return -1;}
		if ((tecla == 'Q' || tecla == 'q')&& habilidades[0]->GetListo()){if (CalcularColisiones(px - 1, py - 1, ex - 1, ey - 1, ALTO + 1, ANCHO + 1, ALTO + 1, ANCHO + 1)) { return -1; }else { return 0; }}
}
void Protagonista::ControladorTiempoHabilidades(short tipodetecla) { // 0 para q, 1 para e, 2 para r
	if (habilidades[tipodetecla]->GetListo() == true) {
		time_t ahora = time(nullptr);
		habilidades[tipodetecla]->SetInicio(ahora);
		habilidades[tipodetecla]->SetListo(false);
	}
}
void Protagonista::Generarhabilidades() {  // el protagonista guarda la información de las habilidades, este es el inicializador
	time_t n = time(nullptr);
	switch (tipo) {
	case 1: break;
	case 2: {
		habilidades = new Habilidades * [2];
		Habilidades* Qhabilidad = new Habilidades(1,2,n, true);
		Habilidades* Ehabilidad = new Habilidades(2, 4,n,true);
		Habilidades* Rhabilidad = new Habilidades(3,5 ,n,true);
		habilidades[0] = Qhabilidad;
		habilidades[1] = Ehabilidad;
		habilidades[2] = Rhabilidad;
		habilidades[0]->Dibujar();
		break;
	}
	case 3: {
		habilidades = new Habilidades * [2];
		Habilidades* Qhabilidad = new Habilidades(1, 2, n, true);
		Habilidades* Ehabilidad = new Habilidades(2, 4, n, true);
		Habilidades* Rhabilidad = new Habilidades(3, 5, n, true);
		habilidades[0] = Qhabilidad;
		habilidades[1] = Ehabilidad;
		habilidades[2] = Rhabilidad;
		habilidades[0]->Dibujar();
		break;
	}
	}
}
void Protagonista::DibujarHabilidades() { // dibuja las habilidades dependiendo de la tecla
	time_t ahora = time(nullptr);
	bool n = habilidades[0]->GetListo();
	if (n==false) {
		habilidades[0]->SetTiempoAhora(ahora);
		time_t diferencia = ahora - (habilidades[0]->GetInicio());
		habilidades[0]->Dibujar();
		if ((time_t)diferencia > (time_t)habilidades[0]->GetCooldownTime()) {
			habilidades[0]->SetListo(true);
			habilidades[0]->Dibujar();
		}
	}
}

bool Protagonista::SobreObjeto(int x, int y, int altura, int anchura) {
	bool colision;
	if (((px < x + anchura) && (px >= x)) && ((py < y + altura) && (py >= y))) {
		colision = true;
	}
	else {
		colision = false;
	}
	return colision;
}
/*for (int i = 0; i < cantidadhabilidades; i++) {
	if (habilidades[i]->GetListo() == false) {
		habilidades[i]->SetTiempoAhora(ahora);
		if (habilidades[i]->GetTiempoAhora() - habilidades[i]->GetInicio() >= habilidades[i]->GetCooldown()) {
			habilidades[i]->SetListo(true);
			habilidades[i]->Dibujar();*/