#pragma once
#include "Mapas.h"
#include "TextoAnimadoDialogosETC.h"

void Nivel1() {
	DibujarMilesMoralesGrandeTitulo(10, 10);
	int a=0;
	do {
		a++;
		TextMilesIntro(a);// Dialogo introduccion
		_sleep(100);
	} while (a < 2);
}
void Nivel2() {
	bool arriba = true, abajo = true, izquierda = true, derecha = true;
	DibujarMiguelOharaGrandeTitulo(10, 10);
	int a = 0;
	do {
		a++;
		TextMiguelIntro(a);
	} while (a < 2);
	AnimacionBorrar();

	Protagonista* Miles = new Protagonista(10, 10, 100, 1, 10, 100, 1, "Miles Morales", 1, 1, 3);
	// Inicialización de protagonista
	MoverNivel1(Miles, arriba, abajo, izquierda, derecha);
	delete Miles;
}
void Nivel3() {
	int a = 0;
	do {   // Dialogo introduccion
		a++;
		TextPunkIntro(a);
	} while (a < 4); a = 0;
	do {  // dialogo punk 1
		a++;
		TextPunk1(a);
	} while (a < 9);
	
	Protagonista* punk = new Protagonista(20,20,100,1,10,100, 2,"Punk",2,1,3);
	Proyectiles* proyectil; //Inicialización de proyectiles para la clase enemigos
	int cantenemigos = 4;
	Enemigos** enemigo = new Enemigos * [cantenemigos];  // inicialización automática de los enemigos en la función nivel /// PD no se inicializa de igual manera dentro de una clase
	Niveles* nivel2 = new Niveles();
	for (int i = 0; i < cantenemigos; i++) { enemigo[i] = new Enemigos(10, 7, 1, 5, 1, 1, 1, "Enemigo1", true, 1); }

	enemigo[0]->SetEX(10); //Atributos de los enemigos
	enemigo[1]->SetEX(20);
	enemigo[2]->SetEX(30);
	enemigo[3]->SetEX(40);
	enemigo[0]->SetEY(7);
	enemigo[1]->SetEY(10);
	enemigo[2]->SetEY(15);
	enemigo[3]->SetEY(20);
	enemigo[0]->SetVelocidadTempo(1);
	enemigo[1]->SetVelocidadTempo(2);
	enemigo[2]->SetVelocidadTempo(3);
	enemigo[3]->SetVelocidadTempo(4);
	enemigo[0]->SetVida(5);
	enemigo[1]->SetVida(5);
	enemigo[2]->SetVida(5);
	enemigo[3]->SetVida(5);

	nivel2->GenerarObstaculo(3);
	nivel2->AtributosObstaculo(0, 10, 10, 0, 2, 10);
	nivel2->AtributosObstaculo(1, 20, 10, 0, 2, 10);
	nivel2->AtributosObstaculo(2, 30, 10, 0, 2, 10);
	punk->Generarhabilidades();
	Enemigos* enemigo1 = new Enemigos(10, 7, 1, 5, 1, 1, 1, "Enemigo1", true, 1);
	tecla = 'j';
	do {  //Parte 1
		if (_kbhit()) {
			tecla = getch();
		}
		for (int i = 0; i < cantenemigos; i++) {
			nivel2->EnemigoAcercaProta(enemigo[i],punk);
			nivel2->EnemigoMuere(enemigo[i]);	
		}
		DibujarPanelDeControl();
		DibujarMiguel(nivel2->GetObjX(0), nivel2->GetObjY(0));//Dibuja obstaculo
		nivel2->GenerarMovimientoJugador(punk);
		Posicion(0, 42); cout << "Vida: " << enemigo[1]->GetVida();//Muestra vida de enemigo
		if (tecla == 'q' || tecla == 'Q') {
			Posicion(0, 30); cout << "Habilidad Q activada";
				for (int i = 0; i < cantenemigos; i++) {
					nivel2->AtacarEnemigos(enemigo[i], punk);//Ataca a los enemigos
				
			}
				punk->ControladorTiempoHabilidades(0);  //Controlador de tiempo de habilidades
		}
		punk->DibujarHabilidades();
		_sleep(1);
		if (!enemigo[0]->GetVivo() && !enemigo[1]->GetVivo() && !enemigo[2]->GetVivo() && !enemigo[3]->GetVivo()) {
			//Condición de victoria
			booleanoGeneralParaNiveles = false;
		}
		tecla = 'j';
	} while (booleanoGeneralParaNiveles);
	for (int i= 0; i < cantenemigos; i++) {
		delete enemigo[i];
	}
	delete[]enemigo;
}
void NivelPrueba() {
	int a = 0;
	do {
		a++;
		TextPunkIntro(a);
	} while (a < 2);

	AnimacionBorrar();

	Protagonista* punk = new Protagonista(20, 20, 100, 1, 10, 100, 2, "Punk", 2, 1, 3);
	Proyectiles* proyectil; //Inicialización de proyectiles para la clase enemigos
	int cantenemigos = 4;
	Enemigos** enemigo = new Enemigos * [cantenemigos];  // inicialización automática de los enemigos en la función nivel /// PD no se inicializa de igual manera dentro de una clase
	Niveles* nivel2 = new Niveles();
	for (int i = 0; i < cantenemigos; i++) { enemigo[i] = new Enemigos(10, 7, 1, 5, 1, 1, 1, "Enemigo1", true, 1); }

	enemigo[0]->SetEX(10); //Atributos de los enemigos
	enemigo[1]->SetEX(20);
	enemigo[2]->SetEX(30);
	enemigo[3]->SetEX(40);
	enemigo[0]->SetEY(7);
	enemigo[1]->SetEY(10);
	enemigo[2]->SetEY(15);
	enemigo[3]->SetEY(20);
	enemigo[0]->SetVelocidadTempo(1);
	enemigo[1]->SetVelocidadTempo(2);
	enemigo[2]->SetVelocidadTempo(3);
	enemigo[3]->SetVelocidadTempo(4);
	enemigo[0]->SetVida(5);
	enemigo[1]->SetVida(5);
	enemigo[2]->SetVida(5);
	enemigo[3]->SetVida(5);

	nivel2->GenerarObstaculo(3);
	nivel2->AtributosObstaculo(0, 10, 10, 0, 2, 10);
	nivel2->AtributosObstaculo(1, 20, 10, 0, 2, 10);
	nivel2->AtributosObstaculo(2, 30, 10, 0, 2, 10);
	punk->Generarhabilidades();
	tecla = 'j';
	do {  //Parte 1
		if (_kbhit()) {
			tecla = getch();
		}
		for (int i = 0; i < cantenemigos; i++) {
			nivel2->EnemigoAcercaProta(enemigo[i], punk);//Acerca al enemigo al protagonista
			nivel2->EnemigoMuere(enemigo[i]);
		}
		DibujarPanelDeControl();
		DibujarMiguel(nivel2->GetObjX(0), nivel2->GetObjY(0));
		nivel2->GenerarMovimientoJugador(punk);
		Posicion(0, 42); cout << "Vida: " << enemigo[1]->GetVida();//Muestra vida de enemigo
		if (tecla == 'q' || tecla == 'Q') {
			Posicion(0, 30); cout << "Habilidad Q activada";
			for (int i = 0; i < cantenemigos; i++) {
				nivel2->AtacarEnemigos(enemigo[i], punk);
			}
			punk->ControladorTiempoHabilidades(0);
		}
		punk->DibujarHabilidades();
		_sleep(1);
		if (!enemigo[0]->GetVivo() && !enemigo[1]->GetVivo() && !enemigo[2]->GetVivo() && !enemigo[3]->GetVivo()) {		
			// Condición de victoria
			booleanoGeneralParaNiveles = false;
		}
		tecla = 'j';
	} while (booleanoGeneralParaNiveles);
	for (int i = 0; i < cantenemigos; i++) {
		delete enemigo[i];
	}
	delete[]enemigo;
}