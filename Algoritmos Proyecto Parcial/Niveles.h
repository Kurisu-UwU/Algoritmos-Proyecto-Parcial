#pragma once
#include "Mapas.h"

void Nivel1() {
	DibujarMilesMoralesGrandeTitulo(10, 10);
	int a=0;
	do {
		a++;
		TextMilesIntro(a);
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

	Protagonista* Miles = new Protagonista(10, 10, 100, 1, 10, 100, 1, "Miles Morales", 1);
	MoverNivel1(Miles, arriba, abajo, izquierda, derecha);
	delete Miles;
}
void Nivel3() {
	int a = 0;
	do {
		a++;
		TextPunkIntro(a);
	} while (a < 2);
	
	AnimacionBorrar();

	Protagonista* punk = new Protagonista(10,10,100,1,10,100, 2,"Punk",3);
	Proyectiles* proyectil;
	Enemigos* enemigo1 = new Enemigos();
	Enemigos* enemigo2 = new Enemigos();
	Enemigos* enemigo3 = new Enemigos();
	Enemigos* enemigo4 = new Enemigos();
	enemigo1->SetEX(10);
	enemigo2->SetEX(20);
	enemigo3->SetEX(30);
	enemigo4->SetEX(40);
	enemigo1->SetEY(5);
	enemigo2->SetEY(10);
	enemigo3->SetEY(15);
	enemigo4->SetEY(20);
	enemigo1->SetVelocidadTempo(1);
	enemigo2->SetVelocidadTempo(2);
	enemigo3->SetVelocidadTempo(3);
	enemigo4->SetVelocidadTempo(4);

	do {
		enemigo1->Borrar();
		enemigo2->Borrar();
		enemigo3->Borrar();
		enemigo4->Borrar();
		enemigo1->PerseguirProta(punk);
		enemigo2->PerseguirProta(punk);
		enemigo3->PerseguirProta(punk);
		enemigo4->PerseguirProta(punk);
		enemigo1->Dibujar();
		enemigo2->Dibujar();
		enemigo3->Dibujar();
		enemigo4->Dibujar();
		punk->Borrar();
		punk->Mover(true, true, true, true);
		punk->Dibujar();
		_sleep(1);
	} while (1);
}
void NivelPrueba() {
	int a = 0;
	NivelBatalla* nivelbatalla3;
	nivelbatalla3 = new NivelBatalla(); /// Prueba
	Proyectiles* proyectil;
	Enemigos* enemigos1;
	enemigos1 = new Enemigos();
	do {
		a++;
		TextPunkIntro(a);
	} while (a < 2);
	AnimacionBorrar();
	do {
		if (_kbhit()) {//detecta si se ha pulsado una tecla
			char tecla = getch(); //captura la tecla pulsada
			enemigos1->GenerarProyectil(tecla);
		}
		if (enemigos1->GetCantDeProyectiles() > 0) {
			enemigos1->MostrarProyectil();
		}
		_sleep(1);
	} while (1);
}