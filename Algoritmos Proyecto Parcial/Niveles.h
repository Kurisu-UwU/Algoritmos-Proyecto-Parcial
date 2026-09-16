#pragma once
#include "Clases.h"

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
	DibujarMiguelOharaGrandeTitulo(10, 10);
	int a = 0;
	do {
		a++;
		TextMiguelIntro(a);
	} while (a < 2);
}
void Nivel3() {
	int a = 0;
	do {
		a++;
		TextPunkIntro(a);
	} while (a < 2);
	
	AnimacionBorrar();

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
	do {
		enemigo1->Borrar();
		enemigo2->Borrar();
		enemigo3->Borrar();
		enemigo4->Borrar();
		enemigo1->Mover();
		enemigo2->Mover();
		enemigo3->Mover();
		enemigo4->Mover();
		enemigo1->Dibujar();
		enemigo2->Dibujar();
		enemigo3->Dibujar();
		enemigo4->Dibujar();
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