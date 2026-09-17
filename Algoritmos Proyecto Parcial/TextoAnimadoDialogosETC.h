#pragma once
#include "Librerias.h"

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
		EscribirTextoAnimado("Miles: ¡Hola! Soy Spider Punk", 10, 20, 25);
		break;
	case 2:
		EscribirTextoAnimado("Vamos a la aventura!", 10, 22, 50);
		break;
	}
}