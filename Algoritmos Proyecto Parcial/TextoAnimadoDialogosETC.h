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
	case 7:DibujarSpiderWoman(n, 2); break;
	case 9:DibujarPeterPorker(n, 2); break;
	case 10:DibujarPavitr(n, 2); break;
	case 11:DibujarNoir(n, 2); break;
	case 12:break;

	default: break;
	}
	Posicion(n+10, 3); cout << nombre;
}
void CuadroDeTextoParaNiveles(string nombre, int perfil, bool direccion) {
	ColorVerde();
	int n; if (direccion == true) { n = 6; }
	else { n = 102; }
	Posicion(0, 0); cout << "=====================================================================================================================================================================================================================";
	Posicion(0, 1); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 2); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 3); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 4); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 5); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 6); cout << "=====================================================================================================================================================================================================================";
	switch (perfil) {
	case 1:DibujarMiles(n, 1); break;
	case 2:DibujarMiguel(n, 1); break;
	case 3:DibujarPunk(n, 1); break;
	case 4:DibujarGwen(n, 1); break;
	case 5:DibujarSpot(n, 1); break;
	case 6:DibujarMargoKees(n, 1); break;
	case 7:DibujarSpiderWoman(n, 1); break;
	case 9:DibujarPeterPorker(n, 1); break;
	case 10:break;

	default: break;
	}
	Posicion(n + 10, 3); cout << nombre;
}
void BorrarTexto() {
	ColorVerde();
	Posicion(0, 0); cout << "=====================================================================================================================================================================================================================";
	Posicion(0, 1); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 2); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 3); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 4); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 5); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 6); cout << "=====================================================================================================================================================================================================================";
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
void TextMilesConGwen(int n) {
	switch (n){ 
	case 1: 
		CuadroDeTextoParaNiveles("[Gwen Stacy]", 4, true);
		EscribirTextoAnimado("MILES!     ", PosIzDIALOGO, 4, 25);
		break;
	case 2:
		CuadroDeTextoParaNiveles("[Gwen Stacy]", 4, true);
		EscribirTextoAnimado("No espere encontrarte por aca            ", PosIzDIALOGO, 4, 25);
		break;
	case 3:
		CuadroDeTextoParaNiveles("[Gwen Stacy]", 4, true);
		EscribirTextoAnimado("Y Miguel? aun sigue persiguiendote?             ", PosIzDIALOGO, 4, 25);
		break;
	case 4:
		CuadroDeTextoParaNiveles("[Gwen Stacy]", 4, true);
		EscribirTextoAnimado("Ya veo....           ", PosIzDIALOGO, 4, 25);
		break;
	case 5:
		CuadroDeTextoParaNiveles("[Gwen Stacy]", 4, true);
		EscribirTextoAnimado("Rapido, hay que irnos         ", PosIzDIALOGO, 4, 25);
		break;
	case 6: BorrarTexto(); break;
	default: break;
	}
	if (tecla == 'x' || tecla == 'X') { 
		BorrarTexto(); 
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
		EscribirTextoAnimado("Miguel: Hola, mi nombre es Miguel O'hara", 10, 20, 25);
		break;
	case 2:
		EscribirTextoAnimado("Salvemos el spider verso!", 10, 22, 50);
		break;
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

void TextMiguel1(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("¡Que acaba de pasar!", PosIzDIALOGO, 4, 40);
		break;
	case 2:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("Como permitieron que Miles escapara, puede romper el canon y destruir el spider verso", PosIzDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Pues no se, tal vez no le gritaste con suficiente fuerza", PosDerDIALOGO, 4, 50);
		break;
	case 4:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("Esto es culpa tuya, tu lo trajiste aqui y lo dejaste huir", PosIzDIALOGO, 4, 50);
		break;
	case 5:
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Solo dejenme hablar con el, puedo resolver esto", PosDerDIALOGO, 4, 50);
		break;
	case 6:
		CuadroDeTexto("Miguel O´hara", 2, true);
		EscribirTextoAnimado("No, ya nos has estorvado suficiente, te prohibo seguirnos a la dimension de Miles", PosIzDIALOGO, 4, 50);
		break;
	case 7:
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("No puedes hacer eso, Spider Woman dile que se equivoca", PosDerDIALOGO, 4, 50);
		break;
	case 8:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("El tiene razon, deberias quedarte aqui", PosDerDIALOGO, 4, 50);
		break;
	case 9:
		CuadroDeTexto("Gwen Stacy", 4, false);
		EscribirTextoAnimado("Eso no es justo, Miles no tenia malas intenciones", PosDerDIALOGO, 4, 50);
		break;
	case 10:
		CuadroDeTexto("Margo Kees", 6, false);
		EscribirTextoAnimado("Gwen tiene razon, Miles no sabe lo que esta haciendo", PosDerDIALOGO, 4, 50);
		break;
	case 11:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("¡Silencio!, tu solo estas aqui para manejar la maquina transportadora", PosIzDIALOGO, 4, 50);
		break;
	case 12:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("Y controlar el sistema de seguridad", PosIzDIALOGO, 4, 50);
		break;
	case 13:
		CuadroDeTexto("Margo Kees", 6, false);
		EscribirTextoAnimado("Estoy harta de esto, Miles es inocente", PosDerDIALOGO, 4, 50);
		break;
	case 14:
		CuadroDeTexto("Margo Kees", 6, false);
		EscribirTextoAnimado("Veamos que tan facilmente lo encuentras con tu propio sistema de seguridad en tu contra", PosDerDIALOGO, 4, 50);
		break;
	case 15:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("No tengo tiempo para esto, debo ir tras Miles, tu has lo que quieras", PosIzDIALOGO, 4, 50);
		break;
	case 16:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("Spider Woman, vamonos, tu me ayudaras en la busqueda", PosIzDIALOGO, 4, 50);
		break;
	case 17:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("Bien, vamonos", PosDerDIALOGO, 4, 50);
		break;
	case 18: AnimacionBorrar(); break;
	default:break;
	}
}

void TextMiguel2(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Spider Woman", 12, false);
		EscribirTextoAnimado("Llamada entrante", PosDerDIALOGO, 4, 40);
		break;
	case 2:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("Hola Miguel, me escuchas?", PosDerDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("Paseandome por este lugar me di cuenta de que Miles esta dejando glitches por algunas zonas", PosDerDIALOGO, 4, 58);
		break;
	case 4:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("Puedes usar esa informacion para localizarlo", PosDerDIALOGO, 4, 50);
		break;
	case 5:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("Tambien he activado un rastreador que te indicara tu distancia a Miles", PosDerDIALOGO, 4, 50);
		break;
	case 6:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("Yo buscare por otra zona, mucha suerte", PosDerDIALOGO, 4, 50);
		break;
	case 7: AnimacionBorrar(); break;
	default:break;
	}
}

void TextMiguelFinal(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("Por fin, después de tonta te encuentro", PosIzDIALOGO, 4, 40);
		break;
	case 2:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("No tienes idea de la cantidad de problemas que me has dado hoy", PosIzDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Miles Morales", 1, false);
		EscribirTextoAnimado("Intentar rescatar a un ser querido es un crimen?", PosDerDIALOGO, 4, 50);
		break;
	case 4:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("Ese no es el punto, pones en riesgo todo el spider verso", PosIzDIALOGO, 4, 50);
		break;
	case 5:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("Ahora que te tengo, por fin, todos estan a salvo", PosIzDIALOGO, 4, 50);
		break;
	case 6: AnimacionBorrar(); break;
	default:break;
	}
}

void TextPeterPorker(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Peter Porker", 9, false);
		EscribirTextoAnimado("Estas buscando a Miles, lo vi hace rato por la pista de abajo, dijo algo sobre unas manchas", PosDerDIALOGO, 4, 40);
		break;
	case 2:
		CuadroDeTexto("Peter Porker", 9, false);
		EscribirTextoAnimado("Sabes de que estaba hablando?", PosDerDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Peter Porker", 9, false);
		EscribirTextoAnimado("Como sea, encontrarlo no sera dificil, por donde pasa deja glitches", PosDerDIALOGO, 4, 50);
		break;
	case 4: AnimacionBorrar(); break;
	default:break;
	}
}

void TextPavitr(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Pavitr Prabhakar", 10, false);
		EscribirTextoAnimado("Estas manchas aparecieron repentinamente", PosDerDIALOGO, 4, 40);
		break;
	case 2:
		CuadroDeTexto("Pavitr Prabhakar", 10, false);
		EscribirTextoAnimado("Algunas sirven como transporte eficiente", PosDerDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Pavitr Prabhakar", 10, false);
		EscribirTextoAnimado("Otras te llevan a callejones sin salida", PosDerDIALOGO, 4, 50);
		break;
	case 4:
		CuadroDeTexto("Pavitr Prabhakar", 10, false);
		EscribirTextoAnimado("Esta por ejemplo no te lleva a ningun lugar, no creo que Miles la haya tomado", PosDerDIALOGO, 4, 50);
		break;
	case 5: AnimacionBorrar(); break;
	default:break;
	}
}

void TextNoir(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Spider Man Noir", 11, false);
		EscribirTextoAnimado("¿Que dice?", PosDerDIALOGO, 4, 40);
		break;
	case 2:
		CuadroDeTexto("Spider Man Noir", 11, false);
		EscribirTextoAnimado("Si, vi a Miles", PosDerDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Spider Man Noir", 11, false);
		EscribirTextoAnimado("No, no paso por qui", PosDerDIALOGO, 4, 50);
		break;
	case 4:
		CuadroDeTexto("Spider Man Noir", 11, false);
		EscribirTextoAnimado("Estaba hasta un estremo de la ciudad, dijo que tuvo que tomar 3 manchas para llegar", PosDerDIALOGO, 4, 50);
		break;
	case 5: AnimacionBorrar(); break;
	default:break;
	}
}

void TextWoman(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("¿Tambien llegaste aqui?", PosDerDIALOGO, 4, 40);
		break;
	case 2:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("Siento que ya nos acercamos a Miles", PosDerDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("Adelantate y ten cuidado", PosDerDIALOGO, 4, 50);
		break;
	case 4:
		CuadroDeTexto("Spider Woman", 7, false);
		EscribirTextoAnimado("Creo que oi a alguien del otro lado de la mancha", PosDerDIALOGO, 4, 50);
		break;
	case 5: AnimacionBorrar(); break;
	default:break;
	}
}

void TextSpotScape(int n) {
	switch (n) {
	case 1:
		CuadroDeTexto("Spot", 5, false);
		EscribirTextoAnimado("O ya llegaste", PosDerDIALOGO, 4, 40);
		break;
	case 2:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("Fuiste tu quien dejo tus manchas por la ciudad", PosIzDIALOGO, 4, 40);
		break;
	case 3:
		CuadroDeTexto("Miguel O'hara", 2, true);
		EscribirTextoAnimado("¿Que haces aqui?", PosIzDIALOGO, 4, 50);
		break;
	case 4:
		CuadroDeTexto("Spot", 7, false);
		EscribirTextoAnimado("Vine para vengarme de Miles, pero contigo aqui no creo que sea posible", PosDerDIALOGO, 4, 50);
		break;
	case 5:
		CuadroDeTexto("Spot", 7, false);
		EscribirTextoAnimado("Se que no puedo vencerte y mi venganza puede esperar", PosDerDIALOGO, 4, 50);
		break;
	case 6:
		CuadroDeTexto("Spot", 7, false);
		EscribirTextoAnimado("Como sea, me voy a causar estragos en otro multiverso, ahi te ves", PosDerDIALOGO, 4, 50);
		break;
	case 7: AnimacionBorrar(); break;
	default:break;
	}
}