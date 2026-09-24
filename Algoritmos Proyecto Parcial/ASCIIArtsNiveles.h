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
	Posicion(x+1, y); y++; cout << "¡¡";
	Posicion(x, y); y++;  cout << "(\\/)";
	Posicion(x, y); y++;  cout << "<||>";
	Posicion(x+1, y); y++; cout << "oo";
}
void DibujarEnemigo(int x, int y) {
	Posicion(x+1, y); y++; cout << "..";
	Posicion(x, y); y++; cout << "[oo]";
	Posicion(x, y); y++; cout << "-()-";
	Posicion(x+1, y); y++; cout << "''";
}
void DibujarGwen(int x, int y) {
	Posicion(x+1, y); y++; cout << "__";
	Posicion(x, y); y++;   cout << "(\\/)";
	Posicion(x, y); y++;   cout << "-()-";
	Posicion(x+1, y); y++; cout << "''";
}
void DibujarAyudante(int x, int y) {
	Posicion(x + 1, y); y++; cout << "__";
	Posicion(x, y); y++;     cout << "(^^)";
	Posicion(x, y); y++;     cout << "\\||/";
	Posicion(x + 1, y); y++; cout << "°°";
}
void BorrarSprite(int x, int y) {
	Posicion(x + 1, y); y++; cout << "    ";
	Posicion(x, y); y++;     cout << "    ";
	Posicion(x, y); y++;     cout << "      ";
	Posicion(x + 1, y); y++; cout << "      ";
}
//   __     __     ¡¡
//  (\/)   (><)   (\/)
//	°||°  [=||=]  <||>
//	 ^^   ¨ uu ¨   °°
//	 ..    __    __
//  [°°]  (^^)  (\/)
//  -()-  \||/  -()-
//	 ""    °°    ''

void DibujarHabilidadQ(bool color, int n) {
	if (color) {
		ColorVerde();
		Posicion(0, 40); cout << "Habilidad Q: Lista";
	}
	else if (!color) {
		ColorRojo();
		if (n > -1) {
			Posicion(0, 40); cout << "Habilidad Q:    " << n << "  ";
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
//    .___  ___.  __   __       _______     _______.   .___  ___.   ______   .______          ___       __       _______     _______.
//    |   \/   | |  | |  |     |   ____|   /       |   |   \/   |  /  __  \  |   _  \        /   \     |  |     |   ____|   /       |
//    |  \  /  | |  | |  |     |  |__     |   (----`   |  \  /  | |  |  |  | |  |_)  |      /  ^  \    |  |     |  |__     |   (----`
//    |  |\/|  | |  | |  |     |   __|     \   \       |  |\/|  | |  |  |  | |      /      /  /_\  \   |  |     |   __|     \   \    
//    |  |  |  | |  | |  `----.|  |____.----)   |      |  |  |  | |  `--'  | |  |\  \----./  _____  \  |  `----.|  |____.----)   |   
//    |__|  |__| |__| |_______||_______|_______/       |__|  |__|  \______/  | _| `._____/__/     \__\ |_______||_______|_______/         

void DibujarMiguelOharaGrandeTitulo(int x, int y) {
	ColorMorado();
	Posicion(x, y);   cout << ".___  ___.  __    _______  __    __   _______  __           ______    __ __    __       ___      .______          ___";
	Posicion(x, y + 1); cout << "|   \\/   | |  |  /  _____||  |  |  | |   ____||  |         /  __  \\  (_ )  |  |  |     /   \\     |   _  \\        /   \\";
	Posicion(x, y + 2); cout << "|  \\  /  | |  | |  |  __  |  |  |  | |  |__   |  |        |  |  |  |  |/|  |__|  |    /  ^  \\    |  |_)  |      /  ^  \\";
	Posicion(x, y + 3); cout << "|  |\\/|  | |  | |  | |_ | |  |  |  | |   __|  |  |        |  |  |  |    |   __   |   /  /_\\  \\   |      /      /  /_\\  \\";
	Posicion(x, y + 4); cout << "|  |  |  | |  | |  |__| | |  `--'  | |  |____ |  `----.   |  `--'  |    |  |  |  |  /  _____  \\  |  |\\  \\----./  _____  \\";
	Posicion(x, y + 5); cout << "|__|  |__| |__|  \\______|  \\______/  |_______||_______|    \\______/     |__|  |__| /__/     \\__\\ | _| `._____/__/     \\__\\";
}
//    .___  ___.  __    _______  __    __   _______  __           ______    __ __    __       ___      .______          ___      
//    |   \/   | |  |  /  _____||  |  |  | |   ____||  |         /  __  \  (_ )  |  |  |     /   \     |   _  \        /   \     
//    |  \  /  | |  | |  |  __  |  |  |  | |  |__   |  |        |  |  |  |  |/|  |__|  |    /  ^  \    |  |_)  |      /  ^  \    
//    |  |\/|  | |  | |  | |_ | |  |  |  | |   __|  |  |        |  |  |  |    |   __   |   /  /_\  \   |      /      /  /_\  \   
//    |  |  |  | |  | |  |__| | |  `--'  | |  |____ |  `----.   |  `--'  |    |  |  |  |  /  _____  \  |  |\  \----./  _____  \  
//    |__|  |__| |__|  \______|  \______/  |_______||_______|    \______/     |__|  |__| /__/     \__\ | _| `._____/__/     \__\      

void DibujarPanelDeControl() {
	Posicion(0, 0); cout << "=====================================================================================================================================================================================================================";
	Posicion(0, 1); cout << "|"; Posicion(20, 1); cout << "Vida:"; Posicion(212, 1); cout << "|";
	Posicion(0, 2); cout << "|"; Posicion(20, 2); cout << ""; Posicion(212, 2); cout << "|";
	Posicion(0, 3); cout << "|"; Posicion(20, 3); cout << "Energia:"; Posicion(212, 3); cout << "|";
	Posicion(0, 4); cout << "|"; Posicion(20, 4); cout << ""; Posicion(212, 4); cout << "|";
	Posicion(0, 5); cout << "|"; Posicion(20, 5); cout << "Carga:"; Posicion(212, 5); cout << "|";
	Posicion(0, 6); cout << "=====================================================================================================================================================================================================================";
}

void DibujarEdificio(int x, int y) {
	Posicion(x, y); cout << "";
}