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
}