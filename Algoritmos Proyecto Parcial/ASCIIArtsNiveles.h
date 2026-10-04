#pragma once
#include "ASCIIArtsMenu.h"

void DibujarMiles(int x, int y) {
	Posicion(x + 2, y); ColorAzulOscuro(); cout << "__";
	Posicion(x + 1, y + 1); cout << "("; ColorBlanco(); cout << "\\/"; ColorAzulOscuro(); cout << ")";
	Posicion(x, y + 2); cout << "o="; ColorRojo(); cout << "||"; ColorAzulOscuro(); cout << "=o";
	Posicion(x + 2, y + 3); cout << "II";
	Posicion(x + 2, y + 4); cout << "^^";
}
void DibujarMilesInvisible(int x, int y) {
	Posicion(x + 2, y); ColorGris(); cout << "__";
	Posicion(x + 1, y + 1); cout << "(";  cout << "\\/";  cout << ")";
	Posicion(x, y + 2); cout << "o=";  cout << "||";  cout << "=o";
	Posicion(x + 2, y + 3); cout << "II";
	Posicion(x + 2, y + 4); cout << "^^";
}
void BorrarMiles(int x, int y) {
	Posicion(x + 2, y); cout << "  ";
	Posicion(x+1, y+1); cout << "    ";
	Posicion(x, y+2); cout << "      ";
	Posicion(x + 2, y+3); cout << "  ";
	Posicion(x + 2, y+4); cout << "  ";
}
void DibujarMiguel(int x, int y) {
	Posicion(x + 2, y); ColorAzulOscuro(); cout << "__";
	Posicion(x + 1, y + 1); cout << "("; ColorRojo(); cout << "><"; ColorAzulOscuro(); cout << ")";
	Posicion(x, y + 2); cout << "["; ColorRojo(); cout << "=||="; ColorAzulOscuro(); cout << "]";
	Posicion(x, y + 3); ColorRojo(); cout << '"'; Posicion(x + 2, y + 3); ColorAzulOscuro(); cout << "II"; ColorRojo(); Posicion(x + 5, y + 3); cout << '"';
	Posicion(x + 2, y + 4); cout << "UU";
}
void BorrarMiguel(int x, int y) {
	Posicion(x + 2, y);         cout << "  ";
	Posicion(x + 1, y + 1);     cout << "    ";
	Posicion(x, y + 2);         cout << "      ";
	Posicion(x, y + 3);         cout << "      ";
	Posicion(x + 2, y + 4);     cout << "  ";
}
void DibujarPunk(int x, int y) {
	Posicion(x + 2, y);ColorBlanco();     cout << "||";
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
	Posicion(x + 1, y); ColorGris(); cout << "..";
	Posicion(x, y + 1); ColorGris(); cout << "[oo]";
	Posicion(x, y + 2); ColorGris(); cout << "-()-";
	Posicion(x + 1, y + 3); ColorGris(); cout << "''";
}
void BorrarEnemigo(int x, int y) {
	Posicion(x + 1, y);  cout << "  ";
	Posicion(x, y + 1);  cout << "    ";
	Posicion(x, y + 2);  cout << "    ";
	Posicion(x + 1, y + 3); cout << "  ";
}
void DibujarPlacaDePresion(int x, int y) {
	ColorAmarillo();
	Posicion(x, y);      cout << "----------";
	Posicion(x, y + 1);  cout << "|   __   |";
	Posicion(x, y + 2);  cout << "|  |##|  |";
	Posicion(x, y + 3);  cout << "|   --   |";
	Posicion(x, y + 4); cout <<  "----------";
	Posicion(x + 4, y + 2); ColorVerde(); cout << "##";
}
void DibujarPlacaDePresionRoja(int x, int y) {
	ColorRojo();
	Posicion(x, y);      cout << "----------";
	Posicion(x, y + 1);  cout << "|   __   |";
	Posicion(x, y + 2);  cout << "|  |##|  |";
	Posicion(x, y + 3);  cout << "|   --   |";
	Posicion(x, y + 4); cout << "----------";
}
void DibujarPlacaDePresionVerde(int x, int y) {
	ColorVerde();
	Posicion(x, y);      cout << "----------";
	Posicion(x, y + 1);  cout << "|   __   |";
	Posicion(x, y + 2);  cout << "|  |##|  |";
	Posicion(x, y + 3);  cout << "|   --   |";
	Posicion(x, y + 4); cout << "----------";
}
void DibujarGwen(int x, int y) {
	Posicion(x + 2, y); ColorBlanco(); cout << "__";
	Posicion(x + 1, y + 1); ColorBlanco();  cout << "(\\/)";
	Posicion(x + 2, y + 1); ColorMagenta();  cout << "\\/";
	Posicion(x + 4, y + 1); ColorBlanco();  cout << ")";
	Posicion(x, y + 2); ColorBlanco();  cout << "o";
	Posicion(x + 1, y + 2); ColorMagenta(); cout << "+";
	Posicion(x + 2, y + 2); ColorAzulOscuro(); cout << "YY";
	Posicion(x + 4, y + 2); ColorMagenta(); cout << "+";
	Posicion(x + 5, y + 2); ColorBlanco(); cout << "o";
	Posicion(x + 2, y + 3); ColorAzulOscuro(); cout << "/\\";
	Posicion(x + 2, y + 4); ColorBlanco(); cout << "ll";
}
void BorrarGwen(int x, int y) {
	Posicion(x + 2, y);  cout << "  ";
	Posicion(x + 1, y + 1);   cout << "    ";
	Posicion(x, y + 2);  cout << "      ";
	Posicion(x + 2, y + 3); cout << "  ";
	Posicion(x + 2, y + 4);  cout << "  ";
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
void DibujarMargoKees(int x, int y) {
	Posicion(x + 1, y); ColorAzul(); cout << "__";
	Posicion(x, y + 1); ColorAzul();  cout << "o";
	Posicion(x + 1, y + 1); ColorMagentaOscuro(); cout << "\\/";
	Posicion(x + 3, y + 1); ColorAzul(); cout << "o";
	Posicion(x, y + 2); ColorMagentaOscuro(); cout << "/()\\";
	Posicion(x + 1, y + 3); ColorMagentaOscuro(); cout << "||";
	Posicion(x + 1, y + 4); ColorMagentaOscuro(); cout << "UU";
}
void DibujarSpiderWoman(int x, int y) {
	Posicion(x + 1, y); ColorAzulOscuro(); cout << "oOOo";
	Posicion(x + 1, y + 1); ColorRojo();  cout << "(";
	Posicion(x + 2, y + 1); ColorAmarillo();  cout << "\\/";
	Posicion(x + 4, y + 1); ColorRojo();  cout << ")";
	Posicion(x, y + 2); ColorRojo(); cout << "o";
	Posicion(x + 1, y + 2); ColorAzulOscuro(); cout << "=";
	Posicion(x + 2, y + 2); ColorRojo(); cout << "qp";
	Posicion(x + 4, y + 2); ColorAzulOscuro(); cout << "=";
	Posicion(x + 5, y + 2); ColorRojo(); cout << "o";
	Posicion(x + 2, y + 3); ColorAzulOscuro(); cout << "||";
	Posicion(x + 1, y + 4); ColorRojo(); cout << ".II.";
}
void DibujarPeterPorker(int x, int y) {
	Posicion(x + 1, y); ColorRojo(); cout << "N_N";
	Posicion(x, y + 1); ColorRojo();  cout << "(";
	Posicion(x + 1, y + 1); ColorBlanco();  cout << "\\ /";
	Posicion(x + 4, y + 1); ColorRojo();  cout << ")";
	Posicion(x + 1, y + 2); ColorRojo();  cout << "O O";
	Posicion(x, y + 3); ColorRojo();  cout << "“";
	Posicion(x + 1, y + 3); ColorAzul();  cout << ".|.";
	Posicion(x + 4, y + 3); ColorRojo();  cout << "”";
}

void DibujarHabilidadQ(bool color, int n) {
	if (color) {
		ColorVerde();
		Posicion(30, 2); cout << "Habilidad Q: Lista";
	}
	else if (!color) {
		ColorRojo();
		if (n > -1) {
			Posicion(30, 2); cout << "Habilidad Q:    " << n << "  ";
		}
	}
}
void DibujarEfectoMiles(int n) {
	ColorAzul();
	if (n > -1) {
		Posicion(30, 4); cout << "Invisibilidad:    " << n << "  ";
	}
	else {
		Posicion(30, 4); cout << "                         ";
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
void DibujarSpiderPunkGrandeTitulo(int x, int y) {
	ColorMorado();
	Posicion(x, y);   cout << "     _______..______    __   _______   _______ .______         .______    __    __  .__   __.  __  ___ ";
	Posicion(x, y+1); cout << "    /       ||   _  \\  |  | |       \\ |   ____||   _  \\        |   _  \\  |  |  |  | |  \\ |  | |  |/  / ";
	Posicion(x, y+2); cout << "   |   (----`|  |_)  | |  | |  .--.  ||  |__   |  |_)  |       |  |_)  | |  |  |  | |   \\|  | |  '  /  ";
	Posicion(x, y+3); cout << "    \\   \\    |   ___/  |  | |  |  |  ||   __|  |      /        |   ___/  |  |  |  | |  . `  | |    <   ";
	Posicion(x, y+4); cout << ".----)   |   |  |      |  | |  '--'  ||  |____ |  |\\  \\----.   |  |      |  `--'  | |  |\\   | |  .  \\  ";
	Posicion(x, y+5); cout << "|_______/    | _|      |__| |_______/ |_______|| _| `._____|   | _|       \\______/  |__| \\__| |__|\\__\\ ";
}
void DibujarPanelDeControl() {
	ColorVerde();
	Posicion(0, 0); cout << "=====================================================================================================================================================================================================================";
	Posicion(0, 1); cout << "|"; Posicion(212, 1); cout << "|";
	Posicion(0, 2); cout << "|"; Posicion(212, 2); cout << "|";
	Posicion(0, 3); cout << "|"; Posicion(212, 3); cout << "|";
	Posicion(0, 4); cout << "|"; Posicion(212, 4); cout << "|";
	Posicion(0, 5); cout << "|"; Posicion(212, 5); cout << "|";
	Posicion(0, 6); cout << "=====================================================================================================================================================================================================================";
}

void BorrarPanelDeControlInterno() {
	Posicion(1, 1); cout << "                                                                                                                                                                                                                   ";
	Posicion(1, 2); cout << "                                                                                                                                                                                                                   ";
	Posicion(1, 3); cout << "                                                                                                                                                                                                                   ";
	Posicion(1, 4); cout << "                                                                                                                                                                                                                   ";
	Posicion(1, 5); cout << "                                                                                                                                                                                                                   ";
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

void DibujarGrieta(int x, int y) {
	Posicion(x + 1, y);     ColorBlanco(); cout <<  "|";
	Posicion(x + 1, y + 1); ColorBlanco(); cout <<  "||";
	Posicion(x, y + 2); ColorBlanco(); cout <<     "|||";
	Posicion(x, y + 3); ColorBlanco(); cout <<     "||||";
	Posicion(x + 1, y + 4); ColorBlanco(); cout <<  "||||";
	Posicion(x, y + 5); ColorBlanco(); cout <<     "|||||";
	Posicion(x + 1, y + 6); ColorBlanco(); cout <<  "||| ";
	Posicion(x + 2, y + 7); ColorBlanco(); cout <<   "|";
}
void BorrarGrieta(int x, int y) {
	Posicion(x + 1, y);     ColorBlanco(); cout << " ";
	Posicion(x + 1, y + 1); ColorBlanco(); cout << " ";
	Posicion(x, y + 2); ColorBlanco(); cout << "   ";
	Posicion(x, y + 3); ColorBlanco(); cout << "    ";
	Posicion(x + 1, y + 4); ColorBlanco(); cout << "    ";
	Posicion(x, y + 5); ColorBlanco(); cout << "     ";
	Posicion(x + 1, y + 6); ColorBlanco(); cout << "    ";
	Posicion(x + 2, y + 7); ColorBlanco(); cout << " ";
}
void DibujarGrieta2(int x, int y) {
	Posicion(x + 1, y);     ColorBlanco(); cout <<  " ";
	Posicion(x + 1, y + 1); ColorBlanco(); cout <<  "| ";
	Posicion(x, y + 2); ColorBlanco(); cout <<     " ||";
	Posicion(x, y + 3); ColorBlanco(); cout <<     " || ";
	Posicion(x + 1, y + 4); ColorBlanco(); cout <<  " || ";
	Posicion(x, y + 5); ColorBlanco(); cout <<     " ||  ";
	Posicion(x + 1, y + 6); ColorBlanco(); cout <<  " |  ";
	Posicion(x + 2, y + 7); ColorBlanco(); cout <<   " ";
}
void DibujarGrieta3(int x, int y) {
	Posicion(x + 1, y);     ColorBlanco(); cout <<  " ";
	Posicion(x + 1, y + 1); ColorBlanco(); cout <<  "  ";
	Posicion(x, y + 2); ColorBlanco(); cout <<     "  |";
	Posicion(x, y + 3); ColorBlanco(); cout <<     " || ";
	Posicion(x + 1, y + 4); ColorBlanco(); cout <<  " || ";
	Posicion(x, y + 5); ColorBlanco(); cout <<     "  |  ";
	Posicion(x + 1, y + 6); ColorBlanco(); cout <<  "    ";
	Posicion(x + 2, y + 7); ColorBlanco(); cout <<   " ";
}
void Dibujaarbol(int x, int y) {
	Posicion(x, y); ColorVerde(); cout << "  ^  ";
	Posicion(x, y + 1); ColorVerde(); cout << " ^^^ ";
	Posicion(x, y + 2); ColorVerde(); cout << "^^^^^";
	Posicion(x, y + 3);	ColorMarron(); cout << "  |  ";
}
void dibujargranarbol(int x, int y) {
	Posicion(x, y); ColorVerde(); cout << "   ###   ";
	Posicion(x, y + 1); ColorVerde(); cout << " ### #o###  ";
	Posicion(x, y + 2); ColorVerde(); cout << " ####o###### ";
	Posicion(x, y + 3); ColorVerde(); cout << "#o#\\ \\#|_#,# ";
	Posicion(x, y + 4); ColorMarron(); cout << " ##\\||// #o#   ";
	Posicion(x, y + 5); ColorMarron(); cout << "    }|{   ";
	Posicion(x, y + 6); ColorMarron(); cout << "     }|{      ";
}
void dibujarpporker(int x, int y) {
	Posicion(x, y); ColorRojo(); cout << "  N_N";
	Posicion(x, y + 1); ColorRojo(); cout << "(\ / )  ";
	Posicion(x, y + 2); ColorRojo(); cout << "  O O";
	Posicion(x, y + 3); ColorRojo(); cout << "   “. | .”";

}
void borrarpporker(int x, int y) {
	Posicion(x, y); cout << "     ";
	Posicion(x, y + 1); cout << "       ";
	Posicion(x, y + 2); cout << "     ";
	Posicion(x, y + 3); cout << "         ";

}
void dibujarmargokees(int x, int y) {
	Posicion(x, y); ColorAzul(); cout << "       _____";
	Posicion(x, y + 1); ColorRojo(); cout << "       o\/o";
	Posicion(x, y + 2); ColorRojo(); cout << "  / ()\  ";
	Posicion(x, y + 3); ColorRojo(); cout << "   || ";
	Posicion(x, y + 4); ColorRojo(); cout << "   UU";
	Posicion(x, y + 5); ColorRojo(); cout << "   ;";
}
void borrarmargokees(int x, int y) {
	Posicion(x, y); cout << "           ";
	Posicion(x, y + 1); cout << "           ";
	Posicion(x, y + 2); cout << "           ";
	Posicion(x, y + 3); cout << "           ";
	Posicion(x, y + 4); cout << "           ";
	Posicion(x, y + 5); cout << "           ";
}
void DibujarPavitr(int x, int y) {
	Posicion(x + 2, y); ColorAzulOscuro(); cout << "__";
	Posicion(x + 1, y + 1); ColorRojo; cout << "(";
	Posicion(x + 2, y + 1); ColorBlanco(); cout << "\\";
	Posicion(x + 3, y + 1); ColorAzulOscuro(); cout << "V";
	Posicion(x + 4, y + 1); ColorRojo(); cout << ")";
	Posicion(x, y + 2); ColorRojo(); cout << "o-||-o";
	Posicion(x + 2, y + 3); ColorAzul(); cout << "/\\";
	Posicion(x + 2, y + 4); ColorCyanOscuro(); cout << "TT";
}
void DibujarNoir(int x, int y) {
	Posicion(x + 1, y); ColorAzulOscuro(); cout << "_[]_";
	Posicion(x + 1, y + 1); ColorAzulOscuro(); cout << "(";
	Posicion(x + 2, y + 1); ColorBlanco(); cout << "\\/";
	Posicion(x + 4, y + 1); ColorAzulOscuro(); cout << ")";
	Posicion(x, y + 2); ColorAzulOscuro(); cout << "o=||=o";
	Posicion(x + 2, y + 3); ColorAzulOscuro(); cout << "II";
	Posicion(x + 1, y + 4); ColorAzulOscuro(); cout << ".UU.";
}
void DibujarCamion(int x, int y) {
	ColorGrisClaro();
	Posicion(x, y);     cout << "     _______________";
	Posicion(x, y + 1); cout << "     |   |         |";
	Posicion(x, y + 2); cout << " ____|---|         |";
	Posicion(x, y + 3); cout << "(|       o         |";
	Posicion(x, y + 4); cout << " l--(o)------(o)---J";
}
void BorrarCamion(int x, int y) {
	Posicion(x, y);     cout << "                    ";
	Posicion(x, y + 1); cout << "                    ";
	Posicion(x, y + 2); cout << "                    ";
	Posicion(x, y + 3); cout << "                    ";
	Posicion(x, y + 4); cout << "                    ";
}
void DibujarCarro(int x, int y) {
	ColorRojo();
	Posicion(x, y); cout << "      __________";
	Posicion(x, y + 1); cout << " _____|---|----|___";
	Posicion(x, y + 2); cout << "(|       o    o    |";
	Posicion(x, y + 3); cout << " l--(o)------(o)---J";
}
void BorrarCarro(int x, int y) {
	Posicion(x, y);     cout << "                ";
	Posicion(x, y + 1); cout << "                   ";
	Posicion(x, y + 2); cout << "                    ";
	Posicion(x, y + 3); cout << "                    ";
}
void DibujarBici(int x, int y) {
	ColorAmarillo();
	Posicion(x, y);     cout << " o   O   _";
	Posicion(x, y + 1); cout << "  \\__|_/";
	Posicion(x, y + 2); cout << "(o)    (o)";
}
void BorrarBici(int x, int y) {
	Posicion(x, y);     cout << "          ";
	Posicion(x, y + 1); cout << "        ";
	Posicion(x, y + 2); cout << "          ";
}

void DibujarOpcionMiles(int x, int y) {
	if (opMenu == 1) ColorAmarillo(); else ColorVerde();
//                                           
//    |V| o  |  _  _    |V| _  __ _  |  _  _ 
//    | | |  | (/__>    | |(_) | (_| | (/__> 
	Posicion(x, y);      cout << "=========================================";
	Posicion(x, y + 1);  cout << "|                                       |";
	Posicion(x, y + 2);  cout << "|                                       |";
	Posicion(x, y + 3);  cout << "|  |V| o |  _  _   |V| _  __ _ |  _  _  |";
	Posicion(x, y + 4);  cout << "|  | | | | (/__>   | |(_) | (_|| (/__>  |";
	Posicion(x, y + 5);  cout << "|";   Posicion(x + 40, y + 5); cout << "|";
	Posicion(x, y + 6);  cout << "|";   Posicion(x + 40, y + 6); cout << "|";
	Posicion(x, y + 7);  cout << "|";   Posicion(x + 40, y + 7); cout << "|";
	Posicion(x, y + 8);  cout << "|";   Posicion(x + 40, y + 8); cout << "|";
	Posicion(x, y + 9);  cout << "|";   Posicion(x + 40, y + 9); cout << "|";
	Posicion(x, y + 10); cout << "|";  Posicion(x + 40, y + 10); cout << "|";
	Posicion(x, y + 11); cout << "|";  Posicion(x + 40, y + 11); cout << "|";
	Posicion(x, y + 12); cout << "|";  Posicion(x + 40, y + 12); cout << "|";
	Posicion(x, y + 13); cout << "|";  Posicion(x + 40, y + 13); cout << "|";
	Posicion(x, y + 14); cout << "|";  Posicion(x + 40, y + 14); cout << "|";
	Posicion(x, y + 15); cout << "|";  Posicion(x + 40, y + 15); cout << "|";
	Posicion(x, y + 16); cout << "|";  Posicion(x + 40, y + 16); cout << "|";
	Posicion(x, y + 17); cout << "|";  Posicion(x + 40, y + 17); cout << "|";
	Posicion(x, y + 18); cout << "|";  Posicion(x + 40, y + 18); cout << "|";
	Posicion(x, y + 19); cout << "|";  Posicion(x + 40, y + 19); cout << "|";
	Posicion(x, y + 20); cout << "|";  Posicion(x + 40, y + 20); cout << "|";
	Posicion(x, y + 21); cout << "|";  Posicion(x + 40, y + 21); cout << "|";
	Posicion(x, y + 22); cout << "|";  Posicion(x + 40, y + 22); cout << "|";
	Posicion(x, y + 23); cout << "|";  Posicion(x + 40, y + 23); cout << "|";
	Posicion(x, y + 24); cout << "|";  Posicion(x + 40, y + 24); cout << "|";
	Posicion(x, y + 25); cout << "|";  Posicion(x + 40, y + 25); cout << "|";
	Posicion(x, y + 26); cout << "=========================================";
	DibujarMiles(x + 10, y + 10);
}
void DibujarOpcionMiguel(int x, int y) {
	if (opMenu == 2) ColorAmarillo(); else ColorVerde();
	Posicion(x, y);      cout << "=========================================";
	Posicion(x, y + 1);  cout << "|                                       |";
	Posicion(x, y + 2);  cout << "|        _             _  /             |";
	Posicion(x, y + 3);  cout << "| |V| o (_|    _  |   / \\  |_  _  __ _  |";
	Posicion(x, y + 4);  cout << "| | | | __||_|(/_ |   \\_/  | |(_| | (_| |";
	Posicion(x, y + 5);  cout << "|";   Posicion(x + 40, y + 5); cout << "|";
	Posicion(x, y + 6);  cout << "|";   Posicion(x + 40, y + 6); cout << "|";
	Posicion(x, y + 7);  cout << "|";   Posicion(x + 40, y + 7); cout << "|";
	Posicion(x, y + 8);  cout << "|";   Posicion(x + 40, y + 8); cout << "|";
	Posicion(x, y + 9);  cout << "|";   Posicion(x + 40, y + 9); cout << "|";
	Posicion(x, y + 10); cout << "|";  Posicion(x + 40, y + 10); cout << "|";
	Posicion(x, y + 11); cout << "|";  Posicion(x + 40, y + 11); cout << "|";
	Posicion(x, y + 12); cout << "|";  Posicion(x + 40, y + 12); cout << "|";
	Posicion(x, y + 13); cout << "|";  Posicion(x + 40, y + 13); cout << "|";
	Posicion(x, y + 14); cout << "|";  Posicion(x + 40, y + 14); cout << "|";
	Posicion(x, y + 15); cout << "|";  Posicion(x + 40, y + 15); cout << "|";
	Posicion(x, y + 16); cout << "|";  Posicion(x + 40, y + 16); cout << "|";
	Posicion(x, y + 17); cout << "|";  Posicion(x + 40, y + 17); cout << "|";
	Posicion(x, y + 18); cout << "|";  Posicion(x + 40, y + 18); cout << "|";
	Posicion(x, y + 19); cout << "|";  Posicion(x + 40, y + 19); cout << "|";
	Posicion(x, y + 20); cout << "|";  Posicion(x + 40, y + 20); cout << "|";
	Posicion(x, y + 21); cout << "|";  Posicion(x + 40, y + 21); cout << "|";
	Posicion(x, y + 22); cout << "|";  Posicion(x + 40, y + 22); cout << "|";
	Posicion(x, y + 23); cout << "|";  Posicion(x + 40, y + 23); cout << "|";
	Posicion(x, y + 24); cout << "|";  Posicion(x + 40, y + 24); cout << "|";
	Posicion(x, y + 25); cout << "|";  Posicion(x + 40, y + 25); cout << "|";
	Posicion(x, y + 26); cout << "=========================================";
	DibujarMiguel(x + 10, y + 10);
}
void DibujarOpcionPunk(int x, int y) {
	if (opMenu == 3) ColorAmarillo(); else ColorVerde();
	Posicion(x, y);      cout << "=========================================";
	Posicion(x, y + 1);  cout << "|                                       |";
	Posicion(x, y + 2);  cout << "|   _   _                 _             |";
	Posicion(x, y + 3);  cout << "|  (_  |_) o  _| _  __   |_)   __  |    |";
	Posicion(x, y + 4);  cout << "|   _) |   | (_|(/_ |    |  |_|| | |<   |";
	Posicion(x, y + 5);  cout << "|";   Posicion(x + 40, y + 5); cout << "|";
	Posicion(x, y + 6);  cout << "|";   Posicion(x + 40, y + 6); cout << "|";
	Posicion(x, y + 7);  cout << "|";   Posicion(x + 40, y + 7); cout << "|";
	Posicion(x, y + 8);  cout << "|";   Posicion(x + 40, y + 8); cout << "|";
	Posicion(x, y + 9);  cout << "|";   Posicion(x + 40, y + 9); cout << "|";
	Posicion(x, y + 10); cout << "|";  Posicion(x + 40, y + 10); cout << "|";
	Posicion(x, y + 11); cout << "|";  Posicion(x + 40, y + 11); cout << "|";
	Posicion(x, y + 12); cout << "|";  Posicion(x + 40, y + 12); cout << "|";
	Posicion(x, y + 13); cout << "|";  Posicion(x + 40, y + 13); cout << "|";
	Posicion(x, y + 14); cout << "|";  Posicion(x + 40, y + 14); cout << "|";
	Posicion(x, y + 15); cout << "|";  Posicion(x + 40, y + 15); cout << "|";
	Posicion(x, y + 16); cout << "|";  Posicion(x + 40, y + 16); cout << "|";
	Posicion(x, y + 17); cout << "|";  Posicion(x + 40, y + 17); cout << "|";
	Posicion(x, y + 18); cout << "|";  Posicion(x + 40, y + 18); cout << "|";
	Posicion(x, y + 19); cout << "|";  Posicion(x + 40, y + 19); cout << "|";
	Posicion(x, y + 20); cout << "|";  Posicion(x + 40, y + 20); cout << "|";
	Posicion(x, y + 21); cout << "|";  Posicion(x + 40, y + 21); cout << "|";
	Posicion(x, y + 22); cout << "|";  Posicion(x + 40, y + 22); cout << "|";
	Posicion(x, y + 23); cout << "|";  Posicion(x + 40, y + 23); cout << "|";
	Posicion(x, y + 24); cout << "|";  Posicion(x + 40, y + 24); cout << "|";
	Posicion(x, y + 25); cout << "|";  Posicion(x + 40, y + 25); cout << "|";
	Posicion(x, y + 26); cout << "=========================================";
	DibujarPunk(x + 10, y + 10);
}
void DibujarPuertaNivel1Escena3(int x, int y) {
	ColorRojo();
	Posicion(x, y);      cout << " _______";
	Posicion(x, y + 1);  cout << "|       |";
	Posicion(x, y + 2);  cout << "|       |";
	Posicion(x, y + 3);  cout << "|       |";
	Posicion(x, y + 4);  cout << "|       |";
	Posicion(x, y + 5);  cout << "|       |";
	Posicion(x, y + 6);  cout << "|       |";
	Posicion(x, y + 7);  cout << "|       |";
	Posicion(x, y + 8);  cout << "|       |";
	Posicion(x, y + 9);  cout << "|       |";
	Posicion(x, y + 10); cout << "|_______|";
}
void BorrarPuertaNivelEscena3(int x, int y) {
	Posicion(x, y);     cout << "          ";
	Posicion(x, y + 1); cout << "          ";
	Posicion(x, y + 2); cout << "          ";
	Posicion(x, y + 3); cout << "          ";
	Posicion(x, y + 4); cout << "          ";
	Posicion(x, y + 5); cout << "          ";
	Posicion(x, y + 6); cout << "          ";
	Posicion(x, y + 7); cout << "          ";
	Posicion(x, y + 8); cout << "          ";
	Posicion(x, y + 9); cout << "          ";
	Posicion(x, y + 10); cout << "          ";
}
void DibujarPuertaNivel1Escena4(int x, int y) {
	ColorRojo();
	Posicion(x, y);     cout << " _______";
	Posicion(x, y + 1); cout << "|       |";
	Posicion(x, y + 2); cout << "|       |";
	Posicion(x, y + 3); cout << "|       |";
	Posicion(x, y + 4); cout << "|       |";
	Posicion(x, y + 5); cout << "|       |";
	Posicion(x, y + 6); cout << "|       |";
	Posicion(x, y + 7); cout << "|       |";
	Posicion(x, y + 8); cout << "|_______|";
}
void BorrarPuertaNivelEscena4(int x, int y) {
	Posicion(x, y);     cout << "          ";
	Posicion(x, y + 1); cout << "          ";
	Posicion(x, y + 2); cout << "          ";
	Posicion(x, y + 3); cout << "          ";
	Posicion(x, y + 4); cout << "          ";
	Posicion(x, y + 5); cout << "          ";
	Posicion(x, y + 6); cout << "          ";
	Posicion(x, y + 7); cout << "          ";
	Posicion(x, y + 8); cout << "          ";
}
void DibujarCarretera() {
	ColorGris();
	Posicion(0, 17); cout << "=====================================================================================================================================================================================================";
	Posicion(0, 25); cout << "      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      - ";
	Posicion(0, 33); cout << "====================================================================================================================================================================================================";
	BColorNegro();
}
void DibujarLineaDeCarretera(int n) {
	Posicion(0, 25);
	for (int i = 0; i < n; i++) cout << " ";
	ColorGris(); cout << "-      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      -      - ";
}
void DibujarNivelUno1() {   //01,3,5,7,9,11,14,17,20,23,26,29,32,35,38,41,44,47,50,53,56,59,62,65,68,71,74,77,80,83,86,89,92,95,98,101,105,109,113,117,121,125,129,133,137,141,145,149,153,157,161,165,169,173,177,181,185,189,193,197,201,205,209,213
	ColorAzul();
	Posicion(0, 7);  cout << "|================================================|                       |==================================================================================|                              |======|          |======|";
	Posicion(0, 8);  cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 9);  cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 10); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 11); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 12); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 13); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 14); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 15); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 16); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 17); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 18); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 19); cout << "|=====================|               |==========|                       |                                                                                  |                              |                        |";
	Posicion(0, 20); cout << "              |                            |                             |                                                                                  |                              |                        |";
	Posicion(0, 21); cout << "              |                            |                             |                                                                                  |                              |                        |";
	Posicion(0, 22); cout << "              |                            |                             |===================================|                                   |==========|                              |                        |";
	Posicion(0, 23); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 24); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 25); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 26); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 27); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 28); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 29); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 30); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 31); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 32); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 33); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 34); cout << "              |                            |==================================================================                                   ===========================================                        |";
	Posicion(0, 35); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 36); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 37); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 38); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 39); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 40); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 41); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 42); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 43); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 44); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 45); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 46); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 47); cout << "              |=====================================================================================================================================================================================================";

	ColorRojo();  Posicion(194, 7);  cout << "|          |";
}
void DibujarNivelUno2() {   //01,3,5,7,9,11,14,17,20,23,26,29,32,35,38,41,44,47,50,53,56,59,62,65,68,71,74,77,80,83,86,89,92,95,98,101,105,109,113,117,121,125,129,133,137,141,145,149,153,157,161,165,169,173,177,181,185,189,193,197,201,205,209,213
	ColorAzul();
	Posicion(0, 7);  cout << "=====|              |=======                                                                                                                                                                                         ";
	Posicion(0, 8);  cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 9);  cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 10); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 11); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 12); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 13); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 14); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 15); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 16); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 17); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 18); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 19); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 20); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 21); cout << "|                          |                                                                                                                                                                                         ";
	Posicion(0, 22); cout << "|                          |========================================================================================================================================================================================|";
	Posicion(0, 23); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 24); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 25); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 26); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 27); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 28); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 29); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 30); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 31); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 32); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 33); cout << "|=====================================================================================================================================================================================|                             |";
	Posicion(0, 34); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 35); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 36); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 37); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 38); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 39); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 40); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 41); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 42); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 43); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 44); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 45); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 46); cout << "                                                                                                                                                                                      |                             |";
	Posicion(0, 47); cout << "                                                                                                                                                                                      ========|            |=======0";

	ColorRojo();  
	Posicion(5, 7);  cout << "|              |";
	Posicion(190, 47);  cout << "|            |";
	ColorAmarillo();
	Posicion(89, 19);  cout << "Presiona Q Para activar tu Habilidad";
}
void DibujarNivelUno3() {   //01,3,5,7,9,11,14,17,20,23,26,29,32,35,38,41,44,47,50,53,56,59,62,65,68,71,74,77,80,83,86,89,92,95,98,101,105,109,113,117,121,125,129,133,137,141,145,149,153,157,161,165,169,173,177,181,185,189,193,197,201,205,209,213
	ColorAzul();
	Posicion(0, 7);  cout << "|===================================================================================================================================================================================================================|";
	Posicion(0, 8);  cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 9);  cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 10); cout << "=                                                                                                                                                                                                                   |";
	Posicion(0, 11); cout << "                                                                                                                                                                                                                    |";
	Posicion(0, 12); cout << "                                                                                                                                                                                                                    |";
	Posicion(0, 13); cout << "                                                                                                                                                                                                                    |";
	Posicion(0, 14); cout << "                                                                                                                                                                                                                    |";
	Posicion(0, 15); cout << "                                                                                                                                                                                                                    |";
	Posicion(0, 16); cout << "                                                                                                                                                                                                                    |";
	Posicion(0, 17); cout << "=                                                                                                                                                                                                                   |";
	Posicion(0, 18); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 19); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 20); cout << "|==========================================================-----------------------------------------------------------------------------------------------------------===============|                              |";
	Posicion(0, 21); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 22); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 23); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 24); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 25); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 26); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 27); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 28); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 29); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 30); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 31); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 32); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 33); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 34); cout << "                                                       |                                                                                                                             |                              |";
	Posicion(0, 35); cout << "                                                       |=============================================================================================================================|                              |";
	Posicion(0, 36); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 37); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 38); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 39); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 40); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 41); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 42); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 43); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 44); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 45); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 46); cout << "                                                                                                                                                                                     |                              |";
	Posicion(0, 47); cout << "                                                                                                                                                                                     |========|            |========";
	Posicion(59, 20); ColorAmarillo(); cout << "-----------------------------------------------------------------------------------------------------------";
	Posicion(0, 10); ColorRojo(); cout << "=";
	Posicion(0, 17); cout << "=";
	Posicion(190, 47); cout << "|            |";

}
void DibujarNivelUno4() {   //01,3,5,7,9,11,14,17,20,23,26,29,32,35,38,41,44,47,50,53,56,59,62,65,68,71,74,77,80,83,86,89,92,95,98,101,105,109,113,117,121,125,129,133,137,141,145,149,153,157,161,165,169,173,177,181,185,189,193,197,201,205,209,213
	ColorAzul();
	Posicion(0, 7);  cout << "|===================================================================================================================================================================================================================|";
	Posicion(0, 8);  cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 9);  cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 10); cout << "|                                                                                                                                                                                                                   =";
	Posicion(0, 11); cout << "|                                                                                                                                                                                                                    ";
	Posicion(0, 12); cout << "|                                                                                                                                                                                                                    ";
	Posicion(0, 13); cout << "|                                                                                                                                                                                                                    ";
	Posicion(0, 14); cout << "|                                                                                                                                                                                                                    ";
	Posicion(0, 15); cout << "|                                                                                                                                                                                                                   =";
	Posicion(0, 16); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 17); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 18); cout << "|                         I=---------------------------------------------------------------------------------------------------------------------------------------------|==========================================|";
	Posicion(0, 19); cout << "|                         I                                 I                I                                                                                           |                                          |";
	Posicion(0, 20); cout << "|                         I                                 I                I                                                                                           |                                          |";
	Posicion(0, 21); cout << "|                         I                                 I                I                                                                                           |                                          |";
	Posicion(0, 22); cout << "|                         I                                 I                I                                                                                           |                                          |";
	Posicion(0, 23); cout << "|                         I                                 I                I                                                                                           |                                          |";
	Posicion(0, 24); cout << "|                         I                                 I                I                                                                                           |                                          |";
	Posicion(0, 25); cout << "|                         I                                 I                I                                                                                           |                                          |";
	Posicion(0, 26); cout << "|                         I                                 I                I                                                                                           |                                          |";
	Posicion(0, 27); cout << "|                         I                                 I----------------I                           |===============================================================|                                          |";
	Posicion(0, 28); cout << "|                         I                                                                              |                                                                                                          |";
	Posicion(0, 29); cout << "|                         I                                                                              |                                                                                                          |";
	Posicion(0, 30); cout << "|                         I                                                                              |                                                                                                          |";
	Posicion(0, 31); cout << "|                         I                                                                              |                                                                                                          |";
	Posicion(0, 32); cout << "|                         I                                                                              |                                                                                                          |";
	Posicion(0, 33); cout << "|                         I                                                                              |                                                                                                          |";
	Posicion(0, 34); cout << "|                         I                                                                              |                                                                                                          |";
	Posicion(0, 35); cout << "|                         I                                                                              |                                                                                                          |";
	Posicion(0, 36); cout << "|                         I=-----------------------------------------------------------------------------|==========================================================================================================|";
	Posicion(0, 37); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 38); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 39); cout << "|                                                                                                                                                                                                                   =";
	Posicion(0, 40); cout << "|                                                                                                                                                                                                                    ";
	Posicion(0, 41); cout << "|                                                                                                                                                                                                                    ";
	Posicion(0, 42); cout << "|                                                                                                                                                                                                                    ";
	Posicion(0, 43); cout << "|                                                                                                                                                                                                                    ";
	Posicion(0, 44); cout << "|                                                                                                                                                                                                                   =";
	Posicion(0, 45); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 46); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 47); cout << "|===================================================================================================================================================================================================================";

	ColorAmarillo();
	Posicion(26, 18); cout << "I=---------------------------------------------------------------------------------------------------------------------------------------------";
	Posicion(26, 19); cout << "I                                 I                I";
	Posicion(26, 20); cout << "I                                 I                I";
	Posicion(26, 21); cout << "I                                 I                I";
	Posicion(26, 22); cout << "I                                 I                I";
	Posicion(26, 23); cout << "I                                 I                I";
	Posicion(26, 24); cout << "I                                 I                I";
	Posicion(26, 25); cout << "I                                 I                I";
	Posicion(26, 26); cout << "I                                 I                I";
	Posicion(26, 27); cout << "I                                 I----------------I";
	Posicion(26, 28); cout << "I";
	Posicion(26, 29); cout << "I";
	Posicion(26, 30); cout << "I";
	Posicion(26, 31); cout << "I";
	Posicion(26, 32); cout << "I";
	Posicion(26, 33); cout << "I";
	Posicion(26, 34); cout << "I";
	Posicion(26, 35); cout << "I";
	Posicion(26, 36); cout << "I=-----------------------------------------------------------------------------";

	Posicion(212, 10); ColorRojo(); cout << "=";
	Posicion(212, 15); cout << "=";
	Posicion(212, 39); cout << "=";
	Posicion(212, 44); cout << "=";
}
void DibujarNivelUno5() {   //01,3,5,7,9,11,14,17,20,23,26,29,32,35,38,41,44,47,50,53,56,59,62,65,68,71,74,77,80,83,86,89,92,95,98,101,105,109,113,117,121,125,129,133,137,141,145,149,153,157,161,165,169,173,177,181,185,189,193,197,201,205,209,213,
	ColorAzul();
	Posicion(0, 7);  cout << "|================================================|                       |==================================================================================|                              |======|          |======|";
	Posicion(0, 8);  cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 9);  cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 10); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 11); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 12); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 13); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 14); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 15); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 16); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 17); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 18); cout << "|                                                |                       |                                                                                  |                              |                        |";
	Posicion(0, 19); cout << "|=====================|               |==========|                       |                                                                                  |                              |                        |";
	Posicion(0, 20); cout << "              |                            |                             |                                                                                  |                              |                        |";
	Posicion(0, 21); cout << "              |                            |                             |                                                                                  |                              |                        |";
	Posicion(0, 22); cout << "              |                            |                             |===================================|                                   |==========|                              |                        |";
	Posicion(0, 23); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 24); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 25); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 26); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 27); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 21); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 22); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 23); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 24); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 25); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 26); cout << "              |                            |                                                                 |                                   |                                         |                        |";
	Posicion(0, 27); cout << "              |                            |==================================================================                                   ===========================================                        |";
	Posicion(0, 28); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 29); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 30); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 31); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 32); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 33); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 34); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 35); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 36); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 37); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 38); cout << "              |                                                                                                                                                                                                     |";
	Posicion(0, 39); cout << "              |=====================================================================================================================================================================================================|";
}
void DibujarNivelGeneral() {
	Posicion(0, 7); ColorAzul();
	cout << "=====================================================================================================================================================================================================================";
	for (int i = 8; i < 47; i++) {
		Posicion(0, i); cout << "|";  Posicion(212, i); cout << "|";
	}
	Posicion(0, 47);
	cout << "====================================================================================================================================================================================================================";

}
void nose() {               //01,3,5,7,9,11,14,17,20,23,26,29,32,35,38,41,44,47,50,53,56,59,62,65,68,71,74,77,80,83,86,89,92,95,98,101,105,109,113,117,121,125,129,133,137,141,145,149,153,157,161,165,169,173,177,181,185,189,193,197,201,205,209,213,
	Posicion(0, 7);  cout << "=====================================================================================================================================================================================================================";
	Posicion(0, 8);  cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 9);  cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 10); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 11); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 12); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 13); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 14); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 15); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 16); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 17); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 18); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 19); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 20); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 21); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 22); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 23); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 24); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 25); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 26); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 27); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 28); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 29); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 30); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 31); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 32); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 33); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 34); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 35); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 36); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 37); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 38); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 39); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 40); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 41); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 42); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 43); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 44); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 45); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 46); cout << "|                                                                                                                                                                                                                   |";
	Posicion(0, 47); cout << "====================================================================================================================================================================================================================";
}

void DibujarMaquinaMargo(int x, int y) {
	ColorMagentaOscuro();
	Posicion(x, y);      cout << "   |\\      __________________      /|   ";
	Posicion(x, y + 1);  cout << "   \\ \\    / ________________ \\    / /   ";
	Posicion(x, y + 2);  cout << "    \\ \\  / /                \\ \\  / /    ";
	Posicion(x, y + 3);  cout << "     \\ \\/ /                  \\ \\/ /     ";
	Posicion(x, y + 4);  cout << "  |\\  \\/ /        -----       \\ \\/  /|  ";
	Posicion(x, y + 5);  cout << "   \\\\ | |                      | | //   ";
	Posicion(x, y + 6);  cout << "    \\\\| |                      | |//    ";
	Posicion(x, y + 7);  cout << "     \\| |     |     -     |    | |/     ";
	Posicion(x, y + 8);  cout << "      | |     |   | 0 |   |    | |      ";
	Posicion(x, y + 9);  cout << "     /| |     |     -     |    | |\\     ";
	Posicion(x, y + 10); cout << "    //| |                      | |\\\\    ";
	Posicion(x, y + 11); cout << "   // | |                      | | \\\\   ";
	Posicion(x, y + 12); cout << "  |/  /\\ \\        -----       / /\\  \\|  ";
	Posicion(x, y + 13); cout << "     / /\\ \\                  / /\\ \\     ";
	Posicion(x, y + 14); cout << "    / /  \\ \\________________/ /  \\ \\    ";
	Posicion(x, y + 15); cout << "   / /    \\__________________/    \\ \\   ";
	Posicion(x, y + 16); cout << "   |/                              \\|   ";
}
void DibujarEscritorioMargo(int x, int y) {
	ColorRojo();
	Posicion(x, y);      cout << "+----------------+";
	Posicion(x, y + 1);  cout << "| _  0 0 0   === |";
	Posicion(x, y + 2);  cout << "||_|+--------+   |";
	Posicion(x, y + 3);  cout << "|...|        |() |";
	Posicion(x, y + 4);  cout << "|...|        |() |";
	Posicion(x, y + 5);  cout << "|...|        |() |";
	Posicion(x, y + 6);  cout << "+---+        +---+";
}
void DibujarPlataforma(int x, int y) {
	ColorRojo();
	Posicion(x, y);      cout << "    ___________  ";
	Posicion(x, y + 1);  cout << "   /___________\\  ";
	Posicion(x, y + 2);  cout << "  //           \\\\ ";
	Posicion(x, y + 3);  cout << " //             \\\\";
	Posicion(x, y + 4);  cout << "||               ||";
	Posicion(x, y + 5);  cout << "||               ||";
	Posicion(x, y + 6);  cout << " \\\\             // ";
	Posicion(x, y + 7);  cout << "  \\\\___________//  ";
	Posicion(x, y + 8);  cout << "   \\___________/   ";
}
void DibujarArbol(int x, int y) {
	ColorRojo();
	Posicion(x + 1, y); ColorVerde(); cout << "0000 ";
	Posicion(x, y + 1); ColorVerde();  cout << "00||/0";
	Posicion(x + 2, y + 1); ColorAmarilloOscuro();  cout << "||/";
	Posicion(x + 5, y + 1); ColorVerde();  cout << "0";
	Posicion(x, y + 2); ColorVerde();  cout << "0";;
	Posicion(x + 1, y + 2); ColorAmarilloOscuro(); cout << "\\||";;
	Posicion(x + 4, y + 2); ColorVerde(); cout << "00";
	Posicion(x + 1, y + 3); ColorVerde(); cout << "0";
	Posicion(x + 2, y + 3); ColorAmarilloOscuro(); cout << " ||/ ";
	Posicion(x + 2, y + 4);  cout << "||";
}

