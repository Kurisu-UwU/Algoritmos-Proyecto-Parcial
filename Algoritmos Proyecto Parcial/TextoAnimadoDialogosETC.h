#pragma once
#include "Librerias.h"
#include "MapasMatriz.h"

//Para dialogos animados en el juego

void TextMilesIntro(int n) {
	switch (n) {
	case 1:
		EscribirTextoAnimado("Miles: ¡Hola! Soy Miles Morales", 10, 20, 25);
		break;
	case 2:
		EscribirTextoAnimado("Vamos a la aventura!", 10, 22, 50);
		break;
	}
}
void TextMiguelIntro(int n) {
	switch (n) {
	case 1:
		EscribirTextoAnimado("Miles: ¡Hola! Soy Miguel O'hara", 10, 20, 25);
		break;
	case 2:
		EscribirTextoAnimado("Vamos a la aventura!", 10, 22, 50);
		break;
	}
}
void TextPunkIntro(int n) {
	switch (n) {
	case 1:
		EscribirTextoAnimado("SpiderPunk: Tengo que buscar una forma de derrotar esos enemigos", 10, 20, 25);
		break;
	case 2:
		EscribirTextoAnimado("ES HORA DE ROMPER COSAS!", 10, 22, 50);
		break;
	}
}