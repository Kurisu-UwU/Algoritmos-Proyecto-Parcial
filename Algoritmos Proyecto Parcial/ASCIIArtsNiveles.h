#pragma once
#include "ASCIIArtsMenu.h"

void DibujarMiles(int x, int y) {
	Posicion(x+1, y); y++; cout << "__";
	Posicion(x, y); y++;  cout << "(\\/)";
	Posicion(x, y); y++;  cout << "o||o";
	Posicion(x+1, y); y++; cout << "^^";
}
void DibujarMiguel(int x, int y) {
	Posicion(x + 2, y); y++; cout << "__";
	Posicion(x, y); y++;     cout << "(><)";
	Posicion(x, y); y++;     cout << "[=||=]";
	Posicion(x + 1, y); y++; cout << "¨ uu ¨";
}
void DibujarPunk(int x, int y) {
	Posicion(x + 2, y);ColorBlanco();     cout << "/\\";
	Posicion(x + 1, y + 1); ColorRojo(); cout << "(";
	Posicion(x + 2, y + 1); ColorBlanco(); cout << "\\/";
	Posicion(x + 4, y + 1); ColorRojo();cout << ")";
	Posicion(x + 6, y + 1); ColorRojoOscuro(); cout << "W";
	Posicion(x, y + 2); ColorRojoOscuro(); cout << "o";
	Posicion(x + 1, y + 2); ColorRojo(); cout << "=";
	Posicion(x + 2, y + 2); ColorAzul(); cout << "||";
	Posicion(x + 4, y + 2); ColorAzul(); cout << "=";
	Posicion(x + 5, y + 2); ColorRojo(); cout << "o";
	Posicion(x + 6, y + 2); ColorAzul(); cout << "|";
	Posicion(x + 2, y + 3); ColorAzul(); cout << "II";
	Posicion(x + 5, y + 3); ColorRojoOscuro(); cout << "(";
	Posicion(x + 6, y + 3); ColorRojoOscuro(); cout << "0";
	Posicion(x + 7, y + 3); ColorRojoOscuro(); cout << ")";
	Posicion(x + 2, y + 4); ColorRojo(); cout << "XX";
	Posicion(x + 5, y + 4); ColorRojoOscuro(); cout << "(_)";
}
void BorrarPunk(int x, int y) {
	Posicion(x + 2, y);     cout << "  ";
	Posicion(x + 1, y + 1);  cout << "      ";
	Posicion(x, y + 2); ; cout << "       ";
	Posicion(x + 2, y + 3); cout << "      ";
	Posicion(x + 2, y + 4); cout << "      ";
}
void DibujarEnemigo(int x, int y) {
	Posicion(x + 1, y); y++; ColorGris(); cout << "..";
	Posicion(x, y + 1); y++; ColorGris(); cout << "[oo]";
	Posicion(x, y + 2); y++; ColorGris(); cout << "-()-";
	Posicion(x + 1, y + 3); ColorGris(); y++; cout << "''";
}
void DibujarGwen(int x, int y) {
	Posicion(x + 2, y); y++; cout << "__";
	Posicion(x + 1, y); y++;   cout << "(\/)";
	Posicion(x, y); y++;   cout << "o+YY+o";
	Posicion(x + 2, y); y++; cout << "/\\";
	Posicion(x + 2, y); y++; cout << "ll";
}
void DibujarSpot(int x, int y) {
	Posicion(x + 2, y); ColorBlanco(); cout << "__";
	Posicion(x + 1, y + 1); ColorBlanco(); cout << "(";
	Posicion(x + 2, y + 1); ColorAzulOscuro(); cout << "()";
	Posicion(x + 4, y + 1); ColorBlanco(); cout << ")";
	Posicion(x, y + 2); ColorBlanco(); cout << "o=()=o";
	Posicion(x + 2, y + 3); ColorBlanco(); cout << "00";
	Posicion(x + 2, y + 4); ColorBlanco(); cout << "OO";
}
void BorrarSpot(int x, int y) {
	Posicion(x + 2, y); y++; cout << "  ";
	Posicion(x + 1, y); y++;   cout << "    ";
	Posicion(x, y); y++;   cout << "      ";
	Posicion(x + 2, y); y++; cout << "  ";
	Posicion(x + 2, y); y++; cout << "  ";
}
//___________
//_|    ||  ||___
//| **| D
//C - (o)---- - (o)-- -
void Dibujara(int x, int y) {
	Posicion(x + 2, y); y++; cout << "__";
	Posicion(x + 1, y); y++;   cout << "(())";
	Posicion(x, y); y++;   cout << "o=()=o";
	Posicion(x + 2, y); y++; cout << "00";
	Posicion(x + 2, y); y++; cout << "OO";
}
void DibujarAyudante(int x, int y) {
	Posicion(x + 1, y); y++; cout << "__";
	Posicion(x, y); y++;     cout << "(^^)";
	Posicion(x, y); y++;     cout << "\\||/";
	Posicion(x + 1, y); y++; cout << "°°";
}
void BorrarSprite(int x, int y) {
	Posicion(x + 1, y); y++; cout << "        ";
	Posicion(x, y); y++;     cout << "        ";
	Posicion(x, y); y++;     cout << "        ";
	Posicion(x + 1, y); y++; cout << "        ";
	Posicion(x + 1, y); y++; cout << "        ";
}
void DibujarHabilidadQ(bool color, int n) {
	if (color) {
		ColorVerde();
		Posicion(53, 4); cout << "Habilidad Q: Lista";
	}
	else if (!color) {
		ColorRojo();
		if (n > -1) {
			Posicion(53, 4); cout << "Habilidad Q:    " << n << "  ";
		}
	}
}
void DibujarMilesMoralesGrandeTitulo(int x, int y) {
	ColorMorado();
	Posicion(x, y);     cout << ".___  ___.  __   __       _______     _______.   .___  ___.   ______   .______          ___       __       _______     _______.";
	Posicion(x, y + 1); cout << "|   \\/   | |  | |  |     |   ____|   /       |   |   \\/   |  /  __  \\  |   _  \\        /   \\     |  |     |   ____|   /       |";
	Posicion(x, y + 2); cout << "|  \\  /  | |  | |  |     |  |__     |   (----`   |  \\  /  | |  |  |  | |  |_)  |      /  ^  \\    |  |     |  |__     |   (----`";
	Posicion(x, y + 3); cout << "|  |\\/|  | |  | |  |     |   __|     \\   \\       |  |\\/|  | |  |  |  | |      /      /  /_\\  \\   |  |     |   __|     \\   \\";
	Posicion(x, y + 4); cout << "|  |  |  | |  | |  `----.|  |____.----)   |      |  |  |  | |  `--'  | |  |\\  \\----./  _____  \\  |  `----.|  |____.----)   |";
	Posicion(x, y + 5); cout << "|__|  |__| |__| |_______||_______|_______/       |__|  |__|  \\______/  | _| `._____/__/     \\__\\ |_______||_______|_______/";
}

void DibujarMiguelOharaGrandeTitulo(int x, int y) {
	ColorMorado();
	Posicion(x, y);   cout << ".___  ___.  __    _______  __    __   _______  __           ______    __ __    __       ___      .______          ___";
	Posicion(x, y + 1); cout << "|   \\/   | |  |  /  _____||  |  |  | |   ____||  |         /  __  \\  (_ )  |  |  |     /   \\     |   _  \\        /   \\";
	Posicion(x, y + 2); cout << "|  \\  /  | |  | |  |  __  |  |  |  | |  |__   |  |        |  |  |  |  |/|  |__|  |    /  ^  \\    |  |_)  |      /  ^  \\";
	Posicion(x, y + 3); cout << "|  |\\/|  | |  | |  | |_ | |  |  |  | |   __|  |  |        |  |  |  |    |   __   |   /  /_\\  \\   |      /      /  /_\\  \\";
	Posicion(x, y + 4); cout << "|  |  |  | |  | |  |__| | |  `--'  | |  |____ |  `----.   |  `--'  |    |  |  |  |  /  _____  \\  |  |\\  \\----./  _____  \\";
	Posicion(x, y + 5); cout << "|__|  |__| |__|  \\______|  \\______/  |_______||_______|    \\______/     |__|  |__| /__/     \\__\\ | _| `._____/__/     \\__\\";
}

void DibujarPanelDeControl() {
	ColorVerde();
	Posicion(0, 0); cout << "=====================================================================================================================================================================================================================";
	Posicion(0, 1); cout << "|"; Posicion(20, 1); cout << "Vida:"; Posicion(212, 1); cout << "|";
	Posicion(0, 2); cout << "|"; Posicion(20, 2); cout << ""; Posicion(212, 2); cout << "|";
	Posicion(0, 3); cout << "|"; Posicion(20, 3); cout << "Energia:"; Posicion(212, 3); cout << "|";
	Posicion(0, 4); cout << "|"; Posicion(20, 4); cout << ""; Posicion(212, 4); cout << "|";
	Posicion(0, 5); cout << "|"; Posicion(20, 5); cout << "Carga:"; Posicion(212, 5); cout << "|";
	Posicion(0, 6); cout << "=====================================================================================================================================================================================================================";
}

void DibujarEdificio(int x, int y) {
	ColorAmarillo();
	Posicion(x, y); ColorGris(); cout << "_________________________";
	Posicion(x, y + 1); ColorGris(); cout << "|";
	Posicion(x + 2, y + 1); ColorAzul(); cout << "_____   _____   _____";
	Posicion(x + 24, y + 1); ColorGris(); cout << "|";
	Posicion(x, y + 2); ColorGris(); cout << "|";
	Posicion(x + 2, y + 2); ColorAzul(); cout << "|   |   |   |   |   |";
	Posicion(x + 24, y + 2); ColorGris(); cout << "|";
	Posicion(x, y + 3); ColorGris(); cout << "|";
	Posicion(x + 2, y + 3); ColorAzul(); cout << "|   |   |   |   |   |";
	Posicion(x + 24, y + 3); ColorGris(); cout << "|";
	Posicion(x, y + 4); ColorGris(); cout << "|";
	Posicion(x + 2, y + 4); ColorAzul(); cout << "|   |   |   |   |   |";
	Posicion(x + 24, y + 4); ColorGris(); cout << "|";
	Posicion(x, y + 5); ColorGris(); cout << "|";
	Posicion(x + 2, y + 5); ColorAzul(); cout << "-----   -----   -----";
	Posicion(x + 24, y + 5); ColorGris(); cout << "|";
	Posicion(x, y + 6); ColorGris(); cout << "|";
	Posicion(x + 2, y + 6); ColorAzul(); cout << "_____   _____   _____";
	Posicion(x + 24, y + 6); ColorGris(); cout << "|";
	Posicion(x, y + 7); ColorGris(); cout << "|";
	Posicion(x + 2, y + 7); ColorAzul(); cout << "|   |   |   |   |   |";
	Posicion(x + 24, y + 7); ColorGris(); cout << "|";
	Posicion(x, y + 8); ColorGris(); cout << "|";
	Posicion(x + 2, y + 8); ColorAzul(); cout << "|   |   |   |   |   |";
	Posicion(x + 24, y + 8); ColorGris(); cout << "|";
	Posicion(x, y + 9); ColorGris(); cout << "|";
	Posicion(x + 2, y + 9); ColorAzul(); cout << "|   |   |   |   |   |";
	Posicion(x + 24, y + 9); ColorGris(); cout << "|";
	Posicion(x, y + 10); ColorGris(); cout << "|";
	Posicion(x + 2, y + 10); ColorAzul(); cout << "-----   -----   -----";
	Posicion(x + 24, y + 10); ColorGris(); cout << "|";
	Posicion(x, y + 11); ColorGris(); cout << "|";
	Posicion(x + 2, y + 11); ColorAzul(); cout << "_____";
	Posicion(x + 10, y + 11); ColorAmarilloOscuro(); cout << "_____";
	Posicion(x + 18, y + 11); ColorAzul(); cout << "_____";
	Posicion(x + 24, y + 11); ColorGris(); cout << "|";
	Posicion(x, y + 12); ColorGris(); cout << "|";
	Posicion(x + 2, y + 12); ColorAzul(); cout << "|   |";
	Posicion(x + 10, y + 12); ColorAmarilloOscuro(); cout << "|";
	Posicion(x + 12, y + 12); ColorAzul(); cout << "0";
	Posicion(x + 14, y + 12); ColorAmarilloOscuro(); cout << "|";
	Posicion(x + 18, y + 12); ColorAzul(); cout << "|   |";
	Posicion(x + 24, y + 12); ColorGris(); cout << "|";
	Posicion(x, y + 13); ColorGris(); cout << "|";
	Posicion(x + 2, y + 13); ColorAzul(); cout << "|   |";
	Posicion(x + 10, y + 13); ColorAmarilloOscuro(); cout << "|   |";
	Posicion(x + 18, y + 13); ColorAzul(); cout << "|   |";
	Posicion(x + 24, y + 13); ColorGris(); cout << "|";
	Posicion(x, y + 14); ColorGris(); cout << "|";
	Posicion(x + 2, y + 14); ColorAzul(); cout << "-----";
	Posicion(x + 10, y + 14); ColorAmarilloOscuro(); cout << "|   |";
	Posicion(x + 18, y + 14); ColorAzul(); cout << "-----";
	Posicion(x + 24, y + 14); ColorGris(); cout << "|";
	Posicion(x, y + 15); ColorGris(); cout << "|";
	Posicion(x + 1, y + 15); ColorGris(); cout << "_________";
	Posicion(x + 10, y + 15); ColorAmarilloOscuro(); cout << "|___|";
	Posicion(x + 15, y + 15); ColorGris(); cout << "_________";
	Posicion(x + 24, y + 15); ColorGris(); cout << "|";



}

void DibujarTornillos(int x, int y) {
	Posicion(x, y); ColorGris(); cout << "_";
	Posicion(x, y + 1); cout << "|";
}

void DibujarTuercas(int x, int y) {
	Posicion(x, y); ColorGris(); cout << "<0>"; y++;
}

void DibujarArandelas(int x, int y) {
	Posicion(x, y); ColorGris(); cout << "O";
}

void DibujarAbrazadera(int x, int y) {
	Posicion(x + 1, y); ColorGris(); cout << "_._._._._"; y++;
	Posicion(x, y + 1); ColorGris(); cout << "|_|_|_|_|_|"; y++;
}

void DibujarCables(int x, int y) {
	Posicion(x, y); ColorAmarillo(); cout << "X";
	Posicion(x + 1, y); ColorAzulOscuro(); cout << "========";
	Posicion(x + 9, y); ColorAmarillo(); cout << "X";
}

void DibujarCarcasa(int x, int y) {
	Posicion(x, y); ColorGris(); cout << "_______";
	Posicion(x, y + 1); ColorGris; cout << "|";
	Posicion(x + 2, y + 1); ColorAmarillo; cout << "+--/ |";
	Posicion(x + 7, y + 1); ColorGris; cout << "|";
	Posicion(x, y + 2); ColorGris(); cout << "|";
	Posicion(x + 2, y + 2); ColorAmarillo(); cout << "|_/";
	Posicion(x + 5, y + 2); ColorRojo(); cout << "o";
	Posicion(x + 7, y + 2); ColorGris(); cout << "|";
	Posicion(x, y + 3); ColorGris(); cout << "|______|";
}

void DibujarCofre(int x, int y) {
	Posicion(x, y); ColorAmarilloOscuro(); cout << " _____";
	Posicion(x, y + 1); ColorAmarilloOscuro(); cout << "/__Y__\\";
	Posicion(x + 3, y + 1); ColorAmarillo(); cout << "Y__\\";
	Posicion(x + 4, y + 1); ColorAmarilloOscuro(); cout << "__\\";
	Posicion(x, y + 2); ColorAmarilloOscuro(); cout << "|_____|";
}