#pragma once
#include "ASCIIArtsNiveles.h"

//Para dialogos animados en el juego
										   /*verdadero izquierda, falso derecha*/
void CuadroDeTexto(string nombre, int perfil, bool direccion) { //perfiles: 1 Miles / 2 Miguel / 3 Punk / 4 Gwen / 5 La mancha / 6 PspiderWoman / 7 Nose
	int n; if (direccion == true) { n = 4; }else { n = 100; }
	Posicion(0, 0); cout << "=====================================================================================================================================================================================================================";
	Posicion(0, 1); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 2); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 3); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 4); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 5); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 6); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 7); cout << "=====================================================================================================================================================================================================================";
	switch (perfil) {
	case 1:DibujarMiles(n, 2);break;
	case 2:DibujarMiguel(n, 2);break;
	case 3:DibujarPunk(n, 2);break;
	default:break;
	}
	Posicion(n+6, 3); cout << nombre;
}
void TextMilesIntro(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Miles morales", 1, true);
		EscribirTextoAnimado("Miles", 10, 20, 25);
		break;
	case 2:
		EscribirTextoAnimado("Ono", 10, 22, 50);
		break;
	case 3: AnimacionBorrar(); break;
	case 4:
	default:break;
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
	default:break;
	}
}





void TextPunkIntro(int n) {
	switch (n) {
	case 1:
		EscribirTextoAnimado("Anarquia entre los 2 caminos", 10, 20, 25);
		break;
	case 2:
		EscribirTextoAnimado("A ROCKEAR!", 10, 22, 50);
		break;
	case 3: AnimacionBorrar(); break;
	default:break;
	}
}
void TextPunk1(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("...     Que....    problematico     ", PosIzDIALOGO, 4, 25);
		break;
	case 2:
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("Bien... tengo cosas pendientes por hacer       ", PosIzDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("...     adios", PosIzDIALOGO, 4, 50);
		break;
	case 4: 
		CuadroDeTexto("Gwen Stacy", 3, false);
		EscribirTextoAnimado("Vas a dejarnos justo ahora?!... EN UN MOMENTO COMO ESTE???           ", PosDerDIALOGO, 4, 50);
		break;
	case 5: 
		CuadroDeTexto("Gwen Stacy", 3, false);
		EscribirTextoAnimado("Tenemos que hablar con miles, el tiene que... entender... que el canon no puede cambiarse...     ", PosDerDIALOGO, 4, 50);
		break;
	case 6: 
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("... Como dije, tengo asuntos pendientes, a no ser que quieras venir conmigo     ", PosIzDIALOGO, 4, 50);
		break;
	case 7:
		CuadroDeTexto("Gwen Stacy", 3, false);
		EscribirTextoAnimado("Ah.. mas te vale que sea importante... sabes donde encontrarme   ", PosDerDIALOGO, 4, 50);
		break;
	case 8: AnimacionBorrar(); break;
	default:break;
	}
}