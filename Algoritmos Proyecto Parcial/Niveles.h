#pragma once
#include "NivelRitmo.h"

void Nivel1() {
	DibujarMilesMoralesGrandeTitulo(10, 10);
	int a=0;
	do {
		a++;
		TextMilesIntro(a);// Dialogo introduccion
		_sleep(100);
	} while (a < 2);
}
//
//
//
//
//
//
void Nivel2() {
	bool arriba = true, abajo = true, izquierda = true, derecha = true;
	DibujarMiguelOharaGrandeTitulo(10, 10);
	int a = 0;
	do {
		a++;
		TextMiguelIntro(a);
	} while (a < 2);
	AnimacionBorrar();

	Protagonista* Miles = new Protagonista(50, 10,4,4, 100, 2, 1, 10, 100, 1, "Miles Morales", 1, 1, 3);
	Niveles* nivel2 = new Niveles();
	nivel2->GenerarObstaculo(4);
	DibujarEdificio(1, 7);
	nivel2->AtributosObstaculo(0, 1, 7, 0, 25, 16);
	nivel2->AtributosObstaculo(1, 20, 20, 0, 5, 5);
	nivel2->AtributosObstaculo(2, 30, 30, 0, 5, 5);
	nivel2->AtributosObstaculo(3, 30, 40, 0, 5, 5);
	do {  //Parte 1
		if (_kbhit()) { tecla = getch(); }
		DibujarPanelDeControl();
		nivel2->GenerarMovimientoJugador(Miles);
		if (tecla == 'q' || tecla == 'Q') {
			Posicion(0, 30); cout << "Habilidad Q activada";
		}
		_sleep(1);
		tecla = 'j';
	} while (booleanoGeneralParaNiveles);
	// Inicialización de protagonista
	delete Miles;
}
//
//
//
//
//
//
void Nivel3() {
	for (int i = 9; i < 4; i++) { TextPunkIntro(i); }
	for (int i = 9; i < 9; i++) { TextPunk1(i); }  // dialogo punk 1

	Protagonista* punk = new Protagonista(30, 30,8,5, 100, 2, 1, 10, 100, 2, "Punk", 3, 1, 3);
	Niveles* nivel3 = new Niveles();
	
	nivel3->GenerarObstaculo(3);
	nivel3->AtributosObstaculo(0, 1, 7, 0, 75, 16);
	nivel3->AtributosObstaculo(1, 137, 32, 0, 75, 16);
	nivel3->AtributosObstaculo(2, 30, 10, 0, 2, 10);
	nivel3->GenerarCofres(3);
	nivel3->AtributosCofres(0, 100,10, 7, 3);
	nivel3->AtributosCofres(1, 125, 15, 7, 3);
	nivel3->AtributosCofres(2, 150, 20, 7, 3);
	tecla = 'j';
	DibujarEdificio(1, 7);//Dibuja obstaculo
	DibujarEdificio(26, 7);
	DibujarEdificio(51, 7);
	DibujarEdificio(187, 32);
	DibujarEdificio(162, 32);
	DibujarEdificio(137, 32);
	do {  //Parte 1
		if (_kbhit()) { tecla = getch(); }
		DibujarPanelDeControl();
		nivel3->DibujarCofre();
		nivel3->GenerarMovimientoJugador(punk);
		NivelesRitmo(nivel3, nivel3->PisandoItem(punk));
		_sleep(1);
		tecla = 'j';
	} while (booleanoGeneralParaNiveles);
	delete punk;
}
//
//
//
void Nivel3parte2() {
	for (int i = 9; i < 4; i++) { TextPunkIntro(i); }
	for (int i = 9; i < 9; i++) { TextPunk1(i); }  // dialogo punk 1

	Protagonista* punk = new Protagonista(25, 25, 8, 5, 100, 2, 1, 10, 100, 2, "Punk", 3, 1, 3);
	Proyectiles* proyectil; //Inicialización de proyectiles para la clase enemigos
	Niveles* nivel3 = new Niveles();
	
	nivel3->GenerarObstaculo(4);
	nivel3->AtributosObstaculo(0, 1, 7, 0, 200, 16);
	nivel3->AtributosObstaculo(1, 137, 32, 0, 75, 16);
	nivel3->AtributosObstaculo(2, 1, 32, 0, 75, 16);
	nivel3->AtributosObstaculo(3, 30, 10, 0, 2, 10);
	nivel3->GenerarCofres(3);
	nivel3->AtributosCofres(0, 100, 28, 7, 3);
	nivel3->AtributosCofres(1, 125, 28, 7, 3);
	nivel3->AtributosCofres(2, 150, 28, 7, 3);
	punk->Generarhabilidades();
	DibujarPanelDeControl();
	DibujarEdificio(1, 7);
	DibujarEdificio(26, 7);
	DibujarEdificio(51, 7);
	DibujarEdificio(76, 7);
	DibujarEdificio(101, 7);
	DibujarEdificio(126, 7);
	DibujarEdificio(151, 7);
	DibujarEdificio(176, 7);
	DibujarEdificio(187, 32);
	DibujarEdificio(162, 32);
	DibujarEdificio(137, 32);
	DibujarEdificio(1, 32);
	DibujarEdificio(26, 32);
	DibujarEdificio(51, 32);
	tecla = 'j';
	do {  //Parte 1
		if (_kbhit()) { tecla = getch(); }
		DibujarPanelDeControl();
		nivel3->DibujarCofre();
		nivel3->GenerarMovimientoJugador(punk);
		NivelesRitmo(nivel3, nivel3->PisandoItem(punk));
		if (tecla == 'q' || tecla == 'Q') {
			Posicion(53, 5); cout << "Habilidad Q activada";
			punk->ControladorTiempoHabilidades(0);  //Controlador de tiempo de habilidades
		}
		punk->DibujarHabilidades();
		_sleep(1);
		//if (!enemigo[0]->GetVivo() && !enemigo[1]->GetVivo() && !enemigo[2]->GetVivo() && !enemigo[3]->GetVivo()) {
			//Condición de victoria
		//	booleanoGeneralParaNiveles = false;
		//}
		tecla = 'j';
	} while (booleanoGeneralParaNiveles);
	delete punk;
}
//
// 
//
void Nivel3parte3() {
	for (int i = 9; i < 4; i++) { TextPunkIntro(i); }
	for (int i = 9; i < 9; i++) { TextPunk1(i); }  // dialogo punk 1

	Protagonista* punk = new Protagonista(25, 25, 8, 5, 100, 2, 1, 10, 100, 2, "Punk", 3, 1, 3);
	Proyectiles* proyectil; //Inicialización de proyectiles para la clase enemigos
	Niveles* nivel3 = new Niveles();

	nivel3->GenerarObstaculo(5);
	nivel3->AtributosObstaculo(0, 1, 7, 0, 75, 16);
	nivel3->AtributosObstaculo(1, 137, 7, 0, 75, 16);
	nivel3->AtributosObstaculo(2, 1, 32, 0, 200, 16);
	nivel3->AtributosObstaculo(3, 30, 10, 0, 2, 10);
	nivel3->AtributosObstaculo(4, 0, 47, 0, 213, 2);
	nivel3->GenerarCofres(3);
	nivel3->AtributosCofres(0, 100, 28, 7, 3);
	nivel3->AtributosCofres(1, 125, 28, 7, 3);
	nivel3->AtributosCofres(2, 150, 28, 7, 3);
	punk->Generarhabilidades();
	tecla = 'j';

	DibujarEdificio(1, 32);
	DibujarEdificio(26, 32);
	DibujarEdificio(51, 32);
	DibujarEdificio(76, 32);
	DibujarEdificio(101, 32);
	DibujarEdificio(126, 32);
	DibujarEdificio(151, 32);
	DibujarEdificio(176, 32);
	DibujarEdificio(187, 7);
	DibujarEdificio(162, 7);
	DibujarEdificio(137, 7);
	DibujarEdificio(1, 7);
	DibujarEdificio(26, 7);
	DibujarEdificio(51, 7);
	do {  //Parte 1
		if (_kbhit()) { tecla = getch(); }
		DibujarPanelDeControl();
		nivel3->DibujarCofre();
		nivel3->GenerarMovimientoJugador(punk);
		NivelesRitmo(nivel3, nivel3->PisandoItem(punk));
		if (tecla == 'q' || tecla == 'Q') {
			Posicion(53, 5); cout << "Habilidad Q activada";
			punk->ControladorTiempoHabilidades(0);  //Controlador de tiempo de habilidades
		}
		punk->DibujarHabilidades();
		_sleep(1);
		//if (!enemigo[0]->GetVivo() && !enemigo[1]->GetVivo() && !enemigo[2]->GetVivo() && !enemigo[3]->GetVivo()) {
			//Condición de victoria
		//	booleanoGeneralParaNiveles = false;
		//}
		tecla = 'j';
	} while (booleanoGeneralParaNiveles);
	delete punk;
}
//
// 
//
void Nivel3parte4() {
	for (int i = 9; i < 4; i++) { TextPunkIntro(i); }
	for (int i = 9; i < 9; i++) { TextPunk1(i); }  // dialogo punk 1

	Protagonista* punk = new Protagonista(20, 30, 8, 5, 100, 2, 1, 10, 100, 2, "Punk", 3, 1, 3);
	Proyectiles* proyectil; //Inicialización de proyectiles para la clase enemigos
	int cantenemigos = 1;
	Enemigos** enemigo = new Enemigos * [cantenemigos];  // inicialización automática de los enemigos en la función nivel /// PD no se inicializa de igual manera dentro de una clase
	Niveles* nivel3 = new Niveles();
	for (int i = 0; i < cantenemigos; i++) { enemigo[i] = new Enemigos(10, 7, 1, 5, 1, 1, 1, "Enemigo1", true, 1); }

	enemigo[0]->SetEX(30); //Atributos de los enemigos
	enemigo[0]->SetEY(27);
	enemigo[0]->SetVelocidadTempo(1);
	enemigo[0]->SetVida(1);

	nivel3->GenerarObstaculo(4);
	nivel3->AtributosObstaculo(0, 0, 10, 0, 213, 16);
	nivel3->AtributosObstaculo(1, 0, 47, 0, 213, 2);
	nivel3->AtributosObstaculo(2, 2, 26, 0, 5, 25);
	nivel3->AtributosObstaculo(3, 200, 26, 0, 5, 25);

	punk->Generarhabilidades();
	DibujarPanelDeControl();
	DibujarEdificio(1, 10);
	DibujarEdificio(26, 10);
	DibujarEdificio(51, 10);
	DibujarEdificio(76, 10);
	DibujarEdificio(101, 10);
	DibujarEdificio(126, 10);
	DibujarEdificio(151, 10);
	DibujarEdificio(176, 10);

	DibujarGrieta(2, 28);
	DibujarGrieta(2, 38);
	DibujarGrieta(200, 28);
	DibujarGrieta(200, 38);

	tecla = 'j';
	do {  //Parte 1
		if (_kbhit()) { tecla = getch(); }
		nivel3->EnemigoAcercaProta(enemigo[0], punk);
		nivel3->EnemigoMuere(enemigo[0]);
		DibujarPanelDeControl();


		nivel3->GenerarMovimientoJugador(punk);
		Posicion(100, 2); cout << "Vida: " << enemigo[0]->GetVida();//Muestra vida de enemigo
		if (tecla == 'q' || tecla == 'Q') {
			Posicion(53, 5); cout << "Habilidad Q activada";
			nivel3->AtacarEnemigos(enemigo[0], punk);//Ataca a los enemigos
			punk->ControladorTiempoHabilidades(0);  //Controlador de tiempo de habilidades
		}
		punk->DibujarHabilidades();
		_sleep(1);
		//if (!enemigo[0]->GetVivo() && !enemigo[1]->GetVivo() && !enemigo[2]->GetVivo() && !enemigo[3]->GetVivo()) {
			//Condición de victoria
		//	booleanoGeneralParaNiveles = false;
		//}
		tecla = 'j';
	} while (booleanoGeneralParaNiveles);
	delete[]enemigo;
}
//
//
//
//
// 
//
void NivelPrueba() {
	int a = 0;
	do {
		a++;
		TextPunkIntro(a);
	} while (a < 2);
	AnimacionBorrar();

	Protagonista* punk = new Protagonista(20, 20,4,4,100, 1, 2, 10, 100, 2, "Punk", 2, 1, 3);
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
		if (_kbhit()) { tecla = getch(); }
		for (int i = 0; i < cantenemigos; i++) {
			nivel2->EnemigoAcercaProta(enemigo[i], punk);//Acerca al enemigo al protagonista
			nivel2->EnemigoMuere(enemigo[i]);
		}
		DibujarPanelDeControl();
		DibujarMiguel(nivel2->GetObjX(0), nivel2->GetObjY(0));
		nivel2->GenerarMovimientoJugador(punk);
		Posicion(0, 42); cout << ": " << enemigo[1]->GetVida();//Muestra vida de enemigo
		if (tecla == 'q' || tecla == 'Q') {
			Posicion(0, 30); cout << "Habilidad Q activada";
			for (int i = 0; i < cantenemigos; i++) {
				nivel2->AtacarEnemigos(enemigo[i], punk);}
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
	for (int i = 0; i < cantenemigos; i++) {delete enemigo[i];}
	delete[]enemigo;
}