#pragma once
#include <vector>
#include "clases.h"

class Controladora {
private:
	vector<PersonajeSecundario*>entity;
	vector<Notas*>notas;
	vector<Tambores*> tambores;
	vector<Proyectiles*> proyectiles;
	vector<Cofre*> cofre;
	vector<LasersMenu*> lasersmenu;
	vector<Entidad*> entidad;
	bool MostrarPreguntaCofre;
	vector<Obstaculos*> obstaculos;
public:
	Controladora() {}
	~Controladora() {}

	virtual void GenerarProyectil(char n);
	void MostrarProyectil();
	void AtacarEnemigos(PersonajeSecundario*, Protagonista*);
	void EnemigoAcercaProta(PersonajeSecundario*, Protagonista*, bool, Graphics^, Bitmap^);
	void EnemigoMuere(PersonajeSecundario*);
	void EnemigoAtacaProta(PersonajeSecundario*, Protagonista*);
	void GenerarObstaculo(int, int, int, int, int);
	void AtributosNPC(int, int, int, int, int, int, int);
	void BorrarObjetos();
	void GenerarMovimientoJugador(Protagonista*);
	int PresionarTambores(int, short);
	void TamboresMovimiento(int);
	void GenerarTambores(int);
	void RevivirTambor(short, short);
	void AtributosTambores(int);
	void AgregarCofre(int, int, int, int, int, int);
	void DibujarCofre();
	int PisandoItem(Protagonista*);
	void AtacarJefes(Spot*, Protagonista*);
	void GenerarLasers(int);
	void LasersMover(Protagonista*);
	void EnemigoHaceGuardia(PersonajeSecundario*);
	void GenerarNotadeMusica(int);
	void RevivirNotaDeMusica(short, SpiderPunk*);
	void NotasMovimiento();
	void AtributosNotas();
	void AtacarEnemigoNotas(PersonajeSecundario*);
	void AtacarProtaNotas(Protagonista*);
	void DibujarObstaculos(Graphics^ g) {
		for (int i = 0; i < obstaculos.size(); i++) {
			obstaculos[i]->Dibujar(g);
		}
	}
};
void Controladora::GenerarProyectil(char n) {  // sin usar de momento, ignorar
	Proyectiles* obproye;
	if (n == 'L' || n == 'l')
	{
		Proyectiles** proy = new Proyectiles * [proyectiles.size() + 1];
		for (int i = 0; i < proyectiles.size(); i++)
			proy[i] = proyectiles[i];

		proy[n] = obproye;

		//if (proyectiles != nullptr)
			//delete[]proyectiles;

		//proyectiles = proy;
	}
	if (proyectiles.size() > 0) {
		for (int i = 0; i < proyectiles.size(); i++) {
			proyectiles[i]->Borrar();
			proyectiles[i]->Mover();
			proyectiles[i]->Dibujar();
		}
	}
}

void Controladora::BorrarObjetos() {
}
void Controladora::GenerarObstaculo(int x, int y, int velocidad, int ancho, int alto) {  // asignación de atributos a los obstáculos
	Obstaculos* ent = new Obstaculos(x, y, velocidad, ancho, alto, true);
	obstaculos.push_back(ent);
}
void Controladora::MostrarProyectil() { // muestra proyectil :V
	for (int i = 0; i < proyectiles.size(); i++) {
		proyectiles[i]->Borrar();
		proyectiles[i]->Mover();
		proyectiles[i]->Dibujar();
	}
}
void Controladora::AtacarEnemigos(PersonajeSecundario* enemigo, Protagonista* protagonista) { // ataque del protagonista a los enemigos, Q E R
	if (enemigo->GetVivo()) {
		//float n = protagonista->AtacarEnemigos(enemigo->GetEX(), enemigo->GetEY());
		//float f = enemigo->GetVida() + n;
		//enemigo->SetVida(f);
	}
}
void Controladora::GenerarNotadeMusica(int cantidad) {
	for (int i = 0; i < cantidad; i++) {
		Notas * not = new Notas();
		notas.push_back(not);
	}
}
void Controladora::AtributosNotas() {
	for (int i = 0; i < notas.size(); i++) 	notas[i]->SetVivo(false);
}
void Controladora::AtacarEnemigoNotas(PersonajeSecundario* enemigo) { // ataque del protagonista a los enemigos, Q E R
	for (int i = 0; i < notas.size(); i++) {
		if (CalcularColisiones(enemigo->GetEX(), enemigo->GetEY(), notas[i]->GetX(), notas[i]->GetY(), enemigo->GetAncho(), enemigo->GetAlto(), 3, 3) && notas[i]->GetVivo() && notas[i]->GetTipo() == 0) {
			notas[i]->SetVivo(false);
			notas[i]->Borrar();
			enemigo->SetVida(enemigo->GetVida() - 1);
		}
	}
}
void Controladora::AtacarProtaNotas(Protagonista* protagonista) { // ataque del protagonista a los enemigos, Q E R
	for (int i = 0; i < notas.size(); i++) {
		if (CalcularColisiones(protagonista->GetPX(), protagonista->GetPY(), notas[i]->GetX(), notas[i]->GetY(), protagonista->GetAncho(), protagonista->GetAlto(), 3, 3) && notas[i]->GetVivo() && notas[i]->GetTipo() == 1) {
			notas[i]->SetVivo(false);
			notas[i]->Borrar();
			protagonista->SetVida(protagonista->GetVida() - 1);
		}
	}
}
void Controladora::RevivirNotaDeMusica(short tipo, SpiderPunk* prota) {
	/*bool n = true;
	int i = 0;
	do {
		if (notas[i]->GetVivo() == false) {
			notas[i]->SetX(prota->GetPX());
			notas[i]->SetY(prota->GetPY() + 1);
			notas[i]->SetTipo(tipo);
			notas[i]->SetVivo(true);
			if (prota->GetMirada() == 1 || prota->GetMirada() == 2) { notas[i]->SetVelocidad(-1); }
			if (prota->GetMirada() == 3 || prota->GetMirada() == 4) { notas[i]->SetVelocidad(1); }
			n = false;
			notas[i]->Dibujar();
		}
		if (i < notas.size()) { i++; }
	} while (n);
	*/
}
void Controladora::NotasMovimiento() {
	int random = rand() % 102;
	for (int i = 0; i < notas.size(); i++) {
		if (notas[i]->GetTipo() == 0) {
			if (notas[i]->GetVivo() == true) {
				if (notas[i]->GetVivo() == true) { notas[i]->Borrar(); }
				if (notas[i]->GetVelocidad() == -1) {
					if (notas[i]->GetX() > 5) {
						notas[i]->SetX(notas[i]->GetX() + notas[i]->GetVelocidad());
						if (notas[i]->GetX() < 6 && notas[i]->GetVivo()) {
							notas[i]->Borrar();
							notas[i]->SetTipo(1);
							notas[i]->SetY(10);
							notas[i]->SetX(random + 50);
						}
					}
				}
				else {
					if (notas[i]->GetX() < 200) {
						notas[i]->SetX(notas[i]->GetX() + notas[i]->GetVelocidad());
						if (notas[i]->GetX() > 199 && notas[i]->GetVivo()) {
							notas[i]->Borrar();
							notas[i]->SetTipo(1);
							notas[i]->SetY(10);
							notas[i]->SetX(random + 50);
						}
					}
				}
				if (notas[i]->GetVivo() == true) { notas[i]->Dibujar(); }
			}
		}
		if (notas[i]->GetTipo() == 1) {
			if (notas[i]->GetVivo() == true) {
				if (notas[i]->GetVivo() == true) { notas[i]->Borrar(); }
				if (notas[i]->GetY() < 45) {
					notas[i]->SetY(notas[i]->GetY() + 1);
					if (notas[i]->GetY() > 44 && notas[i]->GetVivo()) {
						notas[i]->SetVivo(false);
						notas[i]->Borrar();
					}
				}
				if (notas[i]->GetVivo() == true) { notas[i]->Dibujar(); }
			}
		}
	}
}
void Controladora::EnemigoAcercaProta(PersonajeSecundario* enemigo, Protagonista* protagonista, bool invisible, Graphics^ g, Bitmap^ bmp) { // movimiento para que los enemigos se acerquen al prota
	bool w, a, s, d = true;
	if (enemigo->GetVivo()) {
		enemigo->Borrar();
		if (!invisible) {
			for (int i = 0; i < entidad.size(); i++) {
				if (CalcularColisionesDireccionales(enemigo->GetEX(), enemigo->GetEY(), entidad[i]->GetX(), entidad[i]->GetY(), enemigo->GetAncho(), enemigo->GetAlto(), entidad[i]->GetAncho(), entidad[i]->GetAlto(), enemigo->GetVelocidad() * 2, enemigo->GetVelocidad() * 2, 0) == true) { w = false; }// arriba
				if (CalcularColisionesDireccionales(enemigo->GetEX(), enemigo->GetEY(), entidad[i]->GetX(), entidad[i]->GetY(), enemigo->GetAncho(), enemigo->GetAlto(), entidad[i]->GetAncho(), entidad[i]->GetAlto(), enemigo->GetVelocidad() * 2, enemigo->GetVelocidad() * 2, 2) == true) { s = false; }//abajo
				if (CalcularColisionesDireccionales(enemigo->GetEX(), enemigo->GetEY(), entidad[i]->GetX(), entidad[i]->GetY(), enemigo->GetAncho(), enemigo->GetAlto(), entidad[i]->GetAncho(), entidad[i]->GetAlto(), enemigo->GetVelocidad() * 2, enemigo->GetVelocidad() * 2, 1) == true) { a = false; }// izquierda
				if (CalcularColisionesDireccionales(enemigo->GetEX(), enemigo->GetEY(), entidad[i]->GetX(), entidad[i]->GetY(), enemigo->GetAncho(), enemigo->GetAlto(), entidad[i]->GetAncho(), entidad[i]->GetAlto(), enemigo->GetVelocidad() * 2, enemigo->GetVelocidad() * 2, 3) == true) { d = false; }//derecha
			}
			enemigo->PerseguirProta(protagonista->GetPX(), protagonista->GetPY(), w, a, s, d);
		}
		enemigo->Dibujar(g, bmp);
	}
}
void Controladora::EnemigoHaceGuardia(PersonajeSecundario* enemigo) { // movimiento para que los enemigos se acerquen al prota
	bool w, a, s, d = true;
	int x = enemigo->GetEX();
	int y = enemigo->GetEY();
	int velx = enemigo->GetVelocidad();
	if (enemigo->GetVivo()) {
		enemigo->Borrar();
		if (enemigo->GetTempo() >= enemigo->GetVelocidadTempo()) {
			if (enemigo->GetEX() < 44) enemigo->SetVelocidad(enemigo->GetVelocidad() * -1);
			if (enemigo->GetEX() > 189) enemigo->SetVelocidad(enemigo->GetVelocidad() * -1);
			enemigo->SetEX(enemigo->GetEX() + enemigo->GetVelocidad());
			enemigo->SetTempo(0);
		}
		enemigo->SetTempo(enemigo->GetTempo() + 1);
		//enemigo->Dibujar();
	}
}
void Controladora::EnemigoMuere(PersonajeSecundario* enemigo) {  // cuando el enemigo muere
	if (enemigo->GetVida() <= 0) {
		enemigo->SetVivo(false);
		enemigo->Borrar();
	}
}
void Controladora::GenerarMovimientoJugador(Protagonista* prota) {  // Condición general de todo el nivel para decirle al jugador si se puede mover o no -- aqui vas todas las colisiones del nivel, todo, todito todo
	bool w, a, s, d; w = a = s = d = true;
	int px = prota->GetPX();
	int py = prota->GetPY();
	int pvlx = prota->GetVelocidadx();
	int pvly = prota->GetVelocidady();
	int ancho = prota->GetAncho();
	int alto = prota->GetAlto();
	if (tecla == 'w' || tecla == 'W') prota->SetMirada(1);
	if (tecla == 'a' || tecla == 'A') prota->SetMirada(2);
	if (tecla == 's' || tecla == 'S') prota->SetMirada(3);
	if (tecla == 'd' || tecla == 'D') prota->SetMirada(4);
	//prota->Borrar();
	for (int i = 0; i < obstaculos.size(); i++) {// colisiones con obstáculos
		if (CalcularColisionesDireccionales(px, py, obstaculos[i]->GetX(), obstaculos[i]->GetY(), ancho, alto, obstaculos[i]->GetAncho(), obstaculos[i]->GetAlto(), pvlx, pvly, 0) == true) { w = false; }// arriba
		if (CalcularColisionesDireccionales(px, py, obstaculos[i]->GetX(), obstaculos[i]->GetY(), ancho, alto, obstaculos[i]->GetAncho(), obstaculos[i]->GetAlto(), pvlx, pvly, 2) == true) { s = false; }//abajo
		if (CalcularColisionesDireccionales(px, py, obstaculos[i]->GetX(), obstaculos[i]->GetY(), ancho, alto, obstaculos[i]->GetAncho(), obstaculos[i]->GetAlto(), pvlx, pvly, 1) == true) { a = false; }// izquierda
		if (CalcularColisionesDireccionales(px, py, obstaculos[i]->GetX(), obstaculos[i]->GetY(), ancho, alto, obstaculos[i]->GetAncho(), obstaculos[i]->GetAlto(), pvlx, pvly, 3) == true) { d = false; }//derecha
	}
	//prota->move(w, s, a, d);
	//prota->Dibujar();
}
void Controladora::GenerarTambores(int cantidad) {
	for (int i = 0; i < tambores.size(); i++)
		tambores[i] = new Tambores();
}
int Controladora::PresionarTambores(int psocicionparatocar, short pos) {
	short n = 0;
	int nu;
	switch (pos) {
	case 0: nu = 16; break;
	case 1: nu = 23; break;
	case 2: nu = 30; break;
	default: break;
	}
	for (int i = 0; i < tambores.size(); i++) {
		if (CalcularColisiones(26, nu, tambores[i]->GetX(), tambores[i]->GetY(), 4, 9, 3, 5) && tambores[i]->GetVivo() == true) {
			if (tambores[i]->PresionarTambores(psocicionparatocar) && tambores[i]->GetVivo() == true) {
				n = 1;
			}
			else { n = 2; }
			tambores[i]->SetVivo(false);
			tambores[i]->Borrar();
			tambores[i]->SetY(40);
		}
	}
	return n;
}
void Controladora::TamboresMovimiento(int psocicionparatocar) {
	for (int i = 0; i < tambores.size(); i++) {
		if (tambores[i]->GetVivo() == true) {
			if (tambores[i]->GetVivo() == true) { tambores[i]->Borrar(); }
			if (tambores[i]->GetX() > psocicionparatocar - 11) { tambores[i]->SetX(tambores[i]->GetX() - 1); }
			if (tambores[i]->GetVivo() == true) { tambores[i]->Dibujar(); }
			if (tambores[i]->GetX() < psocicionparatocar - 10 && tambores[i]->GetVivo()) {
				tambores[i]->SetVivo(false);
				tambores[i]->Borrar();
			}
		}
	}
}
void Controladora::RevivirTambor(short tipo, short nivel) {
	bool n = true;
	int i = 0;
	int y;
	switch (nivel) {
	case 0: y = 18; break;
	case 1: y = 25; break;
	case 2: y = 32; break;
	default: break;
	}
	do {
		if (tambores[i]->GetVivo() == false) {
			tambores[i]->SetX(180);
			tambores[i]->SetY(y);
			tambores[i]->SetTipo(tipo);
			tambores[i]->SetVivo(true);
			n = false;  // github copilot
			tambores[i]->Dibujar();
		}
		if (i < tambores.size()) { i++; }
	} while (n);
}
void Controladora::AtributosTambores(int x) {  // asignación de atributos a los obstáculos
	for (int i = 0; i < x; i++) {
		tambores[i]->SetX(1);
		tambores[i]->SetY(25);
		tambores[i]->SetTipo(0);
		tambores[i]->SetVivo(false);
	}
}
void Controladora::AgregarCofre(int numero, int x, int y, int ANCHURA, int ALTURA, int num) {
	Cofre* cof = new Cofre(x, y, 1, ANCHURA, ALTURA, true, true, num);
	cofre.push_back(cof);
}
void Controladora::DibujarCofre() {
	for (int i = 0; i < cofre.size(); i++) {
		if (cofre[i]->GetExistencia()) {
			cofre[i]->ImprimirItem(cofre[i]->GetX(), cofre[i]->GetY());
		}
	}
}
int Controladora::PisandoItem(Protagonista* prota) {
	for (int i = 0; i < cofre.size(); i++) {
		if (cofre[i]->GetExistencia()) {
			if (cofre[i]->PisandoItem(prota)) {
				MostrarPreguntaCofre = true;
				if (tecla == 'Z' || tecla == 'z') {
					cofre[i]->SetExsistencia(false);
					return i + cofre[i]->GetNumero();
				}
				else { return 0; }
			}
			else if (MostrarPreguntaCofre) {
				return 0;
			}
		}
	}
}
void Controladora::GenerarLasers(int n) {
	//canLasers = n;
	//listaLasers = new LasersMenu * [n];
	//for (int i = 0; i < n; i++) { listaLasers[i] = new LasersMenu(); }
}
void Controladora::LasersMover(Protagonista* prota) {
	//for (int i = 0; i < canLasers; i++) {
	//	listaLasers[i]->MoverSpot();
	//	if (CalcularColisiones(prota->GetPX(), prota->GetPY(), listaLasers[i]->GetX(), listaLasers[i]->GetY(), prota->GetAlto(), prota->GetAncho(), 2, 7)) {
	//		prota->SetVida(prota->GetVida() - 1);
	//		listaLasers[i]->SetUwU(true);
	//	}
	//}
}