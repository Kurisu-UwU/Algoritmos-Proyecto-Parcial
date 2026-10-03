#pragma once
#include "ASCIIArtsNiveles.h"

void CuadroDeTexto(string nombre, int perfil, bool direccion) {
	ColorVerde();
	int n; if (direccion == true) { n = 6; }else { n = 102; }
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
	case 4:DibujarGwen(n, 2); break;
	case 5:DibujarSpot(n, 2); break;
	case 6:DibujarMargoKees(n, 2); break;

	default: break;
	}
	Posicion(n+10, 3); cout << nombre;
}
//
//
//
//
//
void TextMilesIntro(int n) {
	switch (n) {
	case 1:
		EscribirTextoAnimado("La realidad que aveces duele", 10, 20, 25);
		break;
	case 2:
		EscribirTextoAnimado("Adentrandose en la recamara de contencion", 10, 22, 50);
		break;
	case 3:
		AnimacionBorrar();
		break;
	default:break;
	}
}
void TextMiles1(int n) {
	int a;
	switch (n) {
	case 1:
		DibujarSpot(100, 10);
		DibujarMiles(100, 22);
		DibujarMiguel(120, 22);
		DibujarPunk(80, 22);
		CuadroDeTexto("[Miles Morales]", 1, true);
		EscribirTextoAnimado("Que... acabas de hacer?... quien.. eres?      ", PosIzDIALOGO, 4, 40);
		break;
	case 2:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("Yo?....      ", PosDerDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("Yo soy tu         ", PosDerDIALOGO, 4, 40);
		break;
	case 4:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("Y tu... eres yo      ", PosDerDIALOGO, 4, 40);
		break;
	case 5:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("Yo te cree a ti          ", PosDerDIALOGO, 4, 40);
		break;
	case 6:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("Te converti en lo que eres ahora       ", PosDerDIALOGO, 4, 40);
		break;
	case 7:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("Un HEROE      ", PosDerDIALOGO, 4, 100);
		break;
	case 8:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("Y tu? me creaste como un monstruo     ", PosDerDIALOGO, 4, 40);
		break;
	case 9:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("YO SOY TU NEMESIS        ", PosDerDIALOGO, 4, 200);
		break;
	case 10:
		CuadroDeTexto("[Miguel O´hara]", 2, true);
		EscribirTextoAnimado("........       ", PosIzDIALOGO, 4, 70);
		break;
	case 11:
		CuadroDeTexto("[Spider Punk]", 3, true);
		EscribirTextoAnimado("Vaya problema         ", PosIzDIALOGO, 4, 50);
		break;
	case 12:
		BorrarMiles(100, 22);
		DibujarMiles(100, 22);
		CuadroDeTexto("[Miles Morales]", 1, true);
		EscribirTextoAnimado("Que... piensas hacerle a mi padre?      ", PosIzDIALOGO, 4, 40);
		break;
	case 13:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("Que pienso hacer?... es simple    ", PosDerDIALOGO, 4, 60);
		break;
	case 14:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("TU destruiste mi vida        ", PosDerDIALOGO, 4, 60);
		break;
	case 15:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("Yo destruire la TUYA        ", PosDerDIALOGO, 4, 80);
		break;
	case 16:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("Es tu destino, asi como lo fue el mio        ", PosDerDIALOGO, 4, 60);
		break;
	case 17:
		CuadroDeTexto("[The Spot]", 5, false);
		EscribirTextoAnimado("El CANON no puede cambiarse, Miles        ", PosDerDIALOGO, 4, 50);
		break;
	case 18:
		CuadroDeTexto("[Miles Morales]", 1, true);
		EscribirTextoAnimado("No te atrevas a HACERLE DANO!!!!!!        ", PosIzDIALOGO, 4, 40);
		break;
	case 19:
		CuadroDeTexto("[Miguel O´hara]", 2, true);
		EscribirTextoAnimado("ALTO!     ", PosIzDIALOGO, 4, 50);
		break;
	case 20:
		CuadroDeTexto("[Miles Morales]", 1, true);
		EscribirTextoAnimado("....", PosIzDIALOGO, 4, 40);
		break;
	case 21:
		CuadroDeTexto("[Miguel O´hara]", 2, true);
		EscribirTextoAnimado("Miles      ", PosIzDIALOGO, 4, 70);
		break;
	case 22:
		CuadroDeTexto("[Miguel O´hara]", 2, true);
		EscribirTextoAnimado("Sabes muy bien qu-", PosIzDIALOGO, 4, 50);
		break;
	case 23:
		CuadroDeTexto("[Miles Morales]", 1, true);
		EscribirTextoAnimado("Y QUE?    ", PosIzDIALOGO, 4, 40);
		break;
	case 24:
		CuadroDeTexto("[Miles Morales]", 1, true);
		EscribirTextoAnimado("DICES QUE DEJE MORIR A MI PADRE???", PosIzDIALOGO, 4, 40);
		break;
	case 25:
		CuadroDeTexto("[Miles Morales]", 1, true);
		EscribirTextoAnimado("ASI SIN MAS??", PosIzDIALOGO, 4, 40);
		break;
	case 26:
		CuadroDeTexto("[Spider Punk]", 3, true);
		EscribirTextoAnimado(".....      ", PosIzDIALOGO, 4, 100);
		break;
	case 27:
		CuadroDeTexto("[Spider Punk]", 3, true);
		EscribirTextoAnimado("Miles, escu-", PosIzDIALOGO, 4, 70);
		break;
	case 28:
		CuadroDeTexto("[Miles Morales]", 1, true);
		EscribirTextoAnimado("No, Lo entiendo", PosIzDIALOGO, 4, 90);
		break;
	case 29: AnimacionBorrar(); break;
	default:break;
	}
}
//		
//
//
// 
//
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
void TextMiguel1(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("The Spot", 5, false);
		EscribirTextoAnimado("Finalmente te encontre      ", PosDerDIALOGO, 4, 40);
		break;
	case 2:
		CuadroDeTexto("The Spot", 5, false);
		EscribirTextoAnimado("      ", PosDerDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Miguel O´hara", 2, true);
		EscribirTextoAnimado("...     adios", PosIzDIALOGO, 4, 50);
		break;
	case 4:
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Vas a dejarnos justo ahora?!... EN UN MOMENTO COMO ESTE?           ", PosDerDIALOGO, 4, 50);
		break;
	case 5:
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Tenemos que hablar con miles, el tiene que... entender... que el canon no puede cambiarse...     ", PosDerDIALOGO, 4, 50);
		break;
	case 6:
		CuadroDeTexto("Miguel O´hara", 2, true);
		EscribirTextoAnimado("... Como dije, tengo asuntos pendientes, a no ser que quieras venir conmigo     ", PosIzDIALOGO, 4, 50);
		break;
	case 7:
		CuadroDeTexto("Miguel O´hara", 2, true);
		EscribirTextoAnimado("Vas a tener que encontrar cofres y recolectar tornillos...      ", PosIzDIALOGO, 4, 50);
		break;
	case 8:
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Tornillos?... bueno.. mas te vale que sea importante...    ", PosDerDIALOGO, 4, 50);
		break;
	case 9:
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Bueno... sabes donde encontrarme     ", PosDerDIALOGO, 4, 50);
		break;
	case 10: AnimacionBorrar(); break;
	default:break;
	}
}
//
//
//
//
//
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
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Vas a dejarnos justo ahora?!... EN UN MOMENTO COMO ESTE???           ", PosDerDIALOGO, 4, 50);
		break;
	case 5: 
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Tenemos que hablar con miles, el tiene que... entender... que el canon no puede cambiarse...     ", PosDerDIALOGO, 4, 50);
		break;
	case 6: 
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("... Como dije, tengo asuntos pendientes, a no ser que quieras venir conmigo     ", PosIzDIALOGO, 4, 50);
		break;
	case 7:
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("Vas a tener que encontrar cofres y recolectar tornillos...      ", PosIzDIALOGO, 4, 50);
		break;
	case 8:
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Tornillos?... bueno.. mas te vale que sea importante...    ", PosDerDIALOGO, 4, 50);
		break; 
	case 9: 
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Bueno... sabes donde encontrarme     ", PosDerDIALOGO, 4, 50);
		break;
	case 10: AnimacionBorrar(); break;
	default:break;
	}
}

void TextPunkSpot(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("...     Que....    problematico     ", PosIzDIALOGO, 4, 25);
		break;
	case 2:
		CuadroDeTexto("The Spot", 5, false);
		EscribirTextoAnimado("No tan rapido..... dime donde esta miles       ", PosDerDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("TU otra vez!                ", PosIzDIALOGO, 4, 50);
		break;
	case 4: 
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("No vas a escapar esta v-", PosIzDIALOGO, 4, 50);
		break;
	case 5:
		CuadroDeTexto("The Spot", 5, false);
		EscribirTextoAnimado("Silencio~            ", PosDerDIALOGO, 4, 50);
		break;
	case 6:
		CuadroDeTexto("The Spot", 5, false);;
		EscribirTextoAnimado("Donde esta?.... Miles.... tengo asuntos pendientes con el       ", PosDerDIALOGO, 4, 50);
		break;
	case 7:
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("Bueno..... Casualmente yo tambien lo estaba buscando            ", PosIzDIALOGO, 4, 50);
		break;
	case 8:
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("Que te parece si... el primero que lo encuentra gana?            ", PosIzDIALOGO, 4, 50);
		break;
	case 9: 
		CuadroDeTexto("The Spot", 5, false);
		EscribirTextoAnimado("Solo quieres hacerme perder el tiempo            ", PosDerDIALOGO, 4, 50);
		break;
	case 10:
		CuadroDeTexto("The Spot", 5, false);
		EscribirTextoAnimado("Acabemos esto de una vez            ", PosDerDIALOGO, 4, 50);
		break;
	case 11: 
		CuadroDeTexto("Spider Punk", 3, true);
		EscribirTextoAnimado("Es hora del espectaculo!            ", PosIzDIALOGO, 4, 50);
		break;
	case 12: AnimacionBorrar(); break;
	default:break;
	}
}
