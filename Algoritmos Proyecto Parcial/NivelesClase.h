#pragma once
#include "clases.h"
class Niveles {
protected:
	Tambores** listaTamb;
	int canTamb;
	Proyectiles** listaPro;
	int canPro;
	Mejoras** listaMejora;
	int canMejora;
	Entidad** listaObs;
	int canObs;
	Cofre** listaCofre;
	int canCofre;
	bool MostrarPreguntaCofre;
	LasersMenu** listaLasers;
	int canLasers;
	Notas** listaNotas;
	int canNotas;
public:
	Niveles();
	virtual ~Niveles();

	virtual void GenerarProyectil(char n);
	void MostrarProyectil();
	void AtacarEnemigos(PersonajeSecundario*, Protagonista*);
	void EnemigoAcercaProta(PersonajeSecundario*, Protagonista*, bool);
	void EnemigoMuere(PersonajeSecundario*);
	void EnemigoAtacaProta(PersonajeSecundario*, Protagonista*);
	void GenerarObstaculo(int);
	void AtributosObstaculo(int, int, int, int, int, int);
	void AtributosNPC(int, int, int, int, int, int, int);
	void BorrarObjetos();
	void GenerarMovimientoJugador(Protagonista*);
	int PresionarTambores(int, short);
	void TamboresMovimiento(int);
	void GenerarTambores(int);
	void RevivirTambor(short, short);
	void AtributosTambores(int);
	void GenerarCofres(int);
	void AtributosCofres(int, int, int, int, int, int);
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
	void AtacarEnemigoNotas(PersonajeSecundario*  );
	void AtacarProtaNotas(Protagonista*);

		int GetObjX(int obj) { return listaObs[obj]->GetX(); }
		int GetObjY(int obj) { return listaObs[obj]->GetY(); }
	};
	Niveles::Niveles() {
		//canEne = 0;
		//listaEne = nullptr;
		canPro = 0;
		listaPro = nullptr;
		canMejora = 0;
		MostrarPreguntaCofre = true;
	}
	Niveles::~Niveles() {  // eliminador
		if (listaObs != nullptr) delete[]listaObs;
	}
	void Niveles::GenerarProyectil(char n) {  // sin usar de momento, ignorar
		Proyectiles* obproye;
		canObs = n;
		if (n == 'L' || n == 'l')
		{
			Proyectiles** proy = new Proyectiles * [canPro + 1];
			for (int i = 0; i < canPro; i++)
				proy[i] = listaPro[i];

			proy[n] = obproye;
			canPro++;

			if (listaPro != nullptr)
				delete[]listaPro;

			listaPro = proy;
		}
		if (canPro > 0) {
			for (int i = 0; i < canPro; i++) {
				listaPro[i]->Borrar();
				listaPro[i]->Mover();
				listaPro[i]->Dibujar();
			}
		}
	}
	void Niveles::GenerarObstaculo(int n) { // inicializador de registro de obstáculos
		canObs = n;
		listaObs = new Entidad * [n];
		for (int i = 0; i < n; i++) {
			listaObs[i] = new Entidad(1, 1, 0, 1, 1, true);
		}
	}
	void Niveles::BorrarObjetos() {
	}
	void Niveles::AtributosObstaculo(int numero, int x, int y, int velocidad, int ancho, int alto) {  // asignación de atributos a los obstáculos
		listaObs[numero]->SetX(x);
		listaObs[numero]->SetY(y);
		listaObs[numero]->SetAncho(ancho);
		listaObs[numero]->SetAlto(alto);
	}
	void Niveles::MostrarProyectil() { // muestra proyectil :V
		for (int i = 0; i < canPro; i++) {
			listaPro[i]->Borrar();
			listaPro[i]->Mover();
			listaPro[i]->Dibujar();
		}
	}
	void Niveles::AtacarEnemigos(PersonajeSecundario* enemigo, Protagonista* protagonista) { // ataque del protagonista a los enemigos, Q E R
		if (enemigo->GetVivo()) {
			float n = protagonista->AtacarEnemigos(enemigo->GetEX(), enemigo->GetEY());
			float f = enemigo->GetVida() + n;
			enemigo->SetVida(f);
		}
	}
	void Niveles::GenerarNotadeMusica(int cantidad) { 
		canNotas = cantidad;
		listaNotas = new Notas * [cantidad];
		for (int i = 0; i < cantidad; i++)
			listaNotas[i] = new Notas();
	}
	void Niveles::AtributosNotas() {
		for (int i = 0; i < canNotas; i++) 	listaNotas[i]->SetVivo(false);
	}
	void Niveles::AtacarEnemigoNotas(PersonajeSecundario* enemigo) { // ataque del protagonista a los enemigos, Q E R
		for (int i = 0; i < canNotas; i++) {
			if (CalcularColisiones(enemigo->GetEX(), enemigo->GetEY(), listaNotas[i]->GetX(), listaNotas[i]->GetY(), enemigo->GetAncho(), enemigo->GetAlto(), 3, 3) && listaNotas[i]->GetVivo() && listaNotas[i]->GetTipo() == 0) {
				listaNotas[i]->SetVivo(false);
				listaNotas[i]->Borrar();
				enemigo->SetVida(enemigo->GetVida() - 1);
			}
		}
	}
	void Niveles::AtacarProtaNotas(Protagonista* protagonista) { // ataque del protagonista a los enemigos, Q E R
		for (int i = 0; i < canNotas; i++) {
			if (CalcularColisiones(protagonista->GetPX(), protagonista->GetPY(), listaNotas[i]->GetX(), listaNotas[i]->GetY(), protagonista->GetAncho(), protagonista->GetAlto(), 3, 3) && listaNotas[i]->GetVivo() && listaNotas[i]->GetTipo() == 1) {
				listaNotas[i]->SetVivo(false);
				listaNotas[i]->Borrar();
				protagonista->SetVida(protagonista->GetVida() - 1);
			}
		}
	}
	void Niveles::RevivirNotaDeMusica(short tipo, SpiderPunk* prota) {
		bool n = true;
		int i = 0;
		do {
			if (listaNotas[i]->GetVivo() == false) {
				listaNotas[i]->SetX(prota->GetPX());
				listaNotas[i]->SetY(prota->GetPY()+1);
				listaNotas[i]->SetTipo(tipo);
				listaNotas[i]->SetVivo(true);
				if (prota->GetMirada() == 1 || prota->GetMirada() == 2) {listaNotas[i]->SetVelocidad(-1);}
				if (prota->GetMirada() == 3 || prota->GetMirada() == 4) { listaNotas[i]->SetVelocidad(1); }
				n = false;
				listaNotas[i]->Dibujar();
			}
			if (i < canNotas) { i++; }
		} while (n);
	}
	void Niveles::NotasMovimiento() {
		int random = rand() % 102;
		for (int i = 0; i < canNotas; i++) {
			if (listaNotas[i]->GetTipo() == 0) {
				if (listaNotas[i]->GetVivo() == true) {
					if (listaNotas[i]->GetVivo() == true) { listaNotas[i]->Borrar(); }
					if (listaNotas[i]->GetVelocidad() == -1) {
						if (listaNotas[i]->GetX() > 5) {
							listaNotas[i]->SetX(listaNotas[i]->GetX() + listaNotas[i]->GetVelocidad());
							if (listaNotas[i]->GetX() < 6 && listaNotas[i]->GetVivo()) {
								listaNotas[i]->Borrar();
								listaNotas[i]->SetTipo(1);
								listaNotas[i]->SetY(10);
								listaNotas[i]->SetX(random+50);
							}
						}
					}
					else {
						if (listaNotas[i]->GetX() < 200) {
							listaNotas[i]->SetX(listaNotas[i]->GetX() + listaNotas[i]->GetVelocidad());
							if (listaNotas[i]->GetX() > 199 && listaNotas[i]->GetVivo()) {
								listaNotas[i]->Borrar();
								listaNotas[i]->SetTipo(1);
								listaNotas[i]->SetY(10);
								listaNotas[i]->SetX(random + 50);
							}
						}
					}
					if (listaNotas[i]->GetVivo() == true) { listaNotas[i]->Dibujar(); }
				}
			}
			if (listaNotas[i]->GetTipo() ==1) {
				if (listaNotas[i]->GetVivo() == true) {
					if (listaNotas[i]->GetVivo() == true) { listaNotas[i]->Borrar(); }
					if (listaNotas[i]->GetY() < 45) {
						listaNotas[i]->SetY(listaNotas[i]->GetY() + 1);
						if (listaNotas[i]->GetY() > 44 && listaNotas[i]->GetVivo()) {
							listaNotas[i]->SetVivo(false);
							listaNotas[i]->Borrar();
						}
					}
					if (listaNotas[i]->GetVivo() == true) { listaNotas[i]->Dibujar(); }
				}
			}
		}
	}
	void Niveles::EnemigoAcercaProta(PersonajeSecundario* enemigo, Protagonista* protagonista, bool invisible) { // movimiento para que los enemigos se acerquen al prota
		bool w, a, s, d = true;
		if (enemigo->GetVivo()) {
			enemigo->Borrar();
			if (!invisible) {
				for (int i = 0; i < canObs; i++) {
					if (CalcularColisionesDireccionales(enemigo->GetEX(), enemigo->GetEY(), listaObs[i]->GetX(), listaObs[i]->GetY(), enemigo->GetAncho(), enemigo->GetAlto(), listaObs[i]->GetAncho(), listaObs[i]->GetAlto(), enemigo->GetVelocidad() *2, enemigo->GetVelocidad() * 2, 0) == true) { w = false; }// arriba
					if (CalcularColisionesDireccionales(enemigo->GetEX(), enemigo->GetEY(), listaObs[i]->GetX(), listaObs[i]->GetY(), enemigo->GetAncho(), enemigo->GetAlto(), listaObs[i]->GetAncho(), listaObs[i]->GetAlto(), enemigo->GetVelocidad() *2, enemigo->GetVelocidad() * 2, 2) == true) { s = false; }//abajo
					if (CalcularColisionesDireccionales(enemigo->GetEX(), enemigo->GetEY(), listaObs[i]->GetX(), listaObs[i]->GetY(), enemigo->GetAncho(), enemigo->GetAlto(), listaObs[i]->GetAncho(), listaObs[i]->GetAlto(), enemigo->GetVelocidad() *2, enemigo->GetVelocidad() * 2, 1) == true) { a = false; }// izquierda
					if (CalcularColisionesDireccionales(enemigo->GetEX(), enemigo->GetEY(), listaObs[i]->GetX(), listaObs[i]->GetY(), enemigo->GetAncho(), enemigo->GetAlto(), listaObs[i]->GetAncho(), listaObs[i]->GetAlto(), enemigo->GetVelocidad() *2, enemigo->GetVelocidad() * 2, 3) == true) { d = false; }//derecha
				}
				enemigo->PerseguirProta(protagonista->GetPX(), protagonista->GetPY(), w, a, s, d);
			}
			enemigo->Dibujar();
		}
	}
	void Niveles::EnemigoHaceGuardia(PersonajeSecundario* enemigo) { // movimiento para que los enemigos se acerquen al prota
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
			enemigo->Dibujar();
		}
	}
	void Niveles::EnemigoMuere(PersonajeSecundario* enemigo) {  // cuando el enemigo muere
		if (enemigo->GetVida() <= 0) {
			enemigo->SetVivo(false);
			enemigo->Borrar();
		}
	}
	void Niveles::GenerarMovimientoJugador(Protagonista* prota) {  // Condición general de todo el nivel para decirle al jugador si se puede mover o no -- aqui vas todas las colisiones del nivel, todo, todito todo
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
		prota->Borrar();
		for (int i = 0; i < canObs; i++) {// colisiones con obstáculos
			if (CalcularColisionesDireccionales(px, py, listaObs[i]->GetX(), listaObs[i]->GetY(), ancho, alto, listaObs[i]->GetAncho(), listaObs[i]->GetAlto(), pvlx, pvly, 0) == true) { w = false; }// arriba
			if (CalcularColisionesDireccionales(px, py, listaObs[i]->GetX(), listaObs[i]->GetY(), ancho, alto, listaObs[i]->GetAncho(), listaObs[i]->GetAlto(), pvlx, pvly, 2) == true) { s = false; }//abajo
			if (CalcularColisionesDireccionales(px, py, listaObs[i]->GetX(), listaObs[i]->GetY(), ancho, alto, listaObs[i]->GetAncho(), listaObs[i]->GetAlto(), pvlx, pvly, 1) == true) { a = false; }// izquierda
			if (CalcularColisionesDireccionales(px, py, listaObs[i]->GetX(), listaObs[i]->GetY(), ancho, alto, listaObs[i]->GetAncho(), listaObs[i]->GetAlto(), pvlx, pvly, 3) == true) { d = false; }//derecha
		}
		prota->Mover(w, s, a, d);
		prota->Dibujar();
	}
	void Niveles::GenerarTambores(int cantidad) {
		canTamb = cantidad;
		listaTamb = new Tambores * [cantidad];
		for (int i = 0; i < cantidad; i++)
			listaTamb[i] = new Tambores();
	}
	int Niveles::PresionarTambores(int psocicionparatocar, short pos) {
		short n = 0;
		int nu;
		switch (pos) {
		case 0: nu = 16; break;
		case 1: nu = 23; break;
		case 2: nu = 30; break;
		default: break;
		}
		for (int i = 0; i < canTamb; i++) {
			if (CalcularColisiones(26, nu, listaTamb[i]->GetX(), listaTamb[i]->GetY(), 4, 9, 3, 5) && listaTamb[i]->GetVivo() == true) {
				if (listaTamb[i]->PresionarTambores(psocicionparatocar) && listaTamb[i]->GetVivo() == true) {
					n = 1;
				}
				else { n = 2; }
				listaTamb[i]->SetVivo(false);
				listaTamb[i]->Borrar();
				listaTamb[i]->SetY(40);
			}
		}
		return n;
	}
	void Niveles::TamboresMovimiento(int psocicionparatocar) {
		for (int i = 0; i < canTamb; i++) {
			if (listaTamb[i]->GetVivo() == true) {
				if (listaTamb[i]->GetVivo() == true) { listaTamb[i]->Borrar(); }
				if (listaTamb[i]->GetX() > psocicionparatocar - 11) { listaTamb[i]->SetX(listaTamb[i]->GetX() - 1); }
				if (listaTamb[i]->GetVivo() == true) { listaTamb[i]->Dibujar(); }
				if (listaTamb[i]->GetX() < psocicionparatocar - 10 && listaTamb[i]->GetVivo()) {
					listaTamb[i]->SetVivo(false);
					listaTamb[i]->Borrar();
				}
			}
		}
	}
	void Niveles::RevivirTambor(short tipo, short nivel) {
		bool n = true;
		int i = 0;
		int y;
		switch (nivel) {
		case 0: y = 18; break;
		case 1: y = 25; break;
		case 2: y = 32; break;
		default: break;
		}
		BorrarSpot(190, 16);
		BorrarSpot(190, 23);
		BorrarSpot(190, 30);
		do {
			if (listaTamb[i]->GetVivo() == false) {
				listaTamb[i]->SetX(180);
				listaTamb[i]->SetY(y);
				DibujarSpot(190, y - 2);
				listaTamb[i]->SetTipo(tipo);
				listaTamb[i]->SetVivo(true);
				n = false;  // github copilot
				listaTamb[i]->Dibujar();
			}
			if (i < canTamb) { i++; }
		} while (n);
	}
	void Niveles::AtributosTambores(int x) {  // asignación de atributos a los obstáculos
		for (int i = 0; i < x; i++) {
			listaTamb[i]->SetX(1);
			listaTamb[i]->SetY(25);
			listaTamb[i]->SetTipo(0);
			listaTamb[i]->SetVivo(false);
		}
	}
	void Niveles::GenerarCofres(int cantidad) {
		canCofre = cantidad;
		listaCofre = new Cofre * [cantidad];
		for (int i = 0; i < cantidad; i++) { listaCofre[i] = new Cofre(1, 1, 1, 1, 1, true, true, 1); }
	}
	void Niveles::AtributosCofres(int numero, int x, int y, int ANCHURA, int ALTURA, int num) {
		listaCofre[numero]->SetX(x);
		listaCofre[numero]->SetY(y);
		listaCofre[numero]->SetAlto(ALTURA);
		listaCofre[numero]->SetAncho(ANCHURA);
		listaCofre[numero]->SetNumero(num);
	}
	void Niveles::DibujarCofre() {
		for (int i = 0; i < canCofre; i++) {
			if (listaCofre[i]->GetExistencia()) {
				listaCofre[i]->ImprimirItem(listaCofre[i]->GetX(), listaCofre[i]->GetY());
			}
		}
	}
	int Niveles::PisandoItem(Protagonista* prota) {
		for (int i = 0; i < canCofre; i++) {
			if (listaCofre[i]->GetExistencia()) {
				if (listaCofre[i]->PisandoItem(prota)) {
					Posicion(20, 5); ColorBlanco(); cout << "Desea Abrir el cofre?: pulse Z";
					MostrarPreguntaCofre = true;
					if (tecla == 'Z' || tecla == 'z') {
						listaCofre[i]->SetExsistencia(false);
						return i + listaCofre[i]->GetNumero();
					}
					else { return 0; }
				}
				else if (MostrarPreguntaCofre) {
					Posicion(20, 5); ColorBlanco(); cout << "                                ";
					return 0;
				}
			}
		}
	}
	void Niveles::GenerarLasers(int n) {
		canLasers = n;
		listaLasers = new LasersMenu * [n];
		for (int i = 0; i < n; i++) { listaLasers[i] = new LasersMenu(); }
	}
	void Niveles::LasersMover(Protagonista* prota) {
		for (int i = 0; i < canLasers; i++) {
			listaLasers[i]->MoverSpot();
			if (CalcularColisiones(prota->GetPX(), prota->GetPY(), listaLasers[i]->GetX(), listaLasers[i]->GetY(), prota->GetAlto(), prota->GetAncho(), 2, 7)) {
				prota->SetVida(prota->GetVida() - 1);
				listaLasers[i]->SetUwU(true);
			}
		}
	}