#pragma once
#include <conio.h>
#include <iostream>
using namespace std;
using namespace System;

int opMenu = 1, opFinal = 0;
bool Condicion2; // condicion para el bucle main
bool Condicion1 = true; // condicion para el bucle main
int tiempo = 0;
char tecla = ' ';

void ConsolayOjetos() {
	Console::SetWindowSize(213, 48);
	Console::SetBufferSize(213, 48);
	Console::LargestWindowWidth;
	Console::LargestWindowHeight;
	Console::CursorVisible = false;
}

void Posicion(int x, int y) { Console::SetCursorPosition(x, y); }

void ColorAmarillo() { Console::ForegroundColor = ConsoleColor::Yellow; }
void ColorBlanco() { Console::ForegroundColor = ConsoleColor::White; }
void ColorRojo() { Console::ForegroundColor = ConsoleColor::Red; }
void ColorVerde() { Console::ForegroundColor = ConsoleColor::Green; }
void ColorAzul() { Console::ForegroundColor = ConsoleColor::Blue; }
void ColorNegro() { Console::ForegroundColor = ConsoleColor::Black; }
void ColorCafe() { Console::ForegroundColor = ConsoleColor::DarkYellow; }
void ColorMorado() { Console::ForegroundColor = ConsoleColor::Magenta; }
void ColorGris() { Console::ForegroundColor = ConsoleColor::Gray; }

void BColorRojo() { Console::BackgroundColor = ConsoleColor::Red; }
void BColorAzul() { Console::BackgroundColor = ConsoleColor::Blue; }
void BColorGris() { Console::BackgroundColor = ConsoleColor::Gray; }
void BColorNegro() { Console::BackgroundColor = ConsoleColor::Black; }
void BColorVerde() { Console::BackgroundColor = ConsoleColor::Green; }
void BColorAmarillo() { Console::BackgroundColor = ConsoleColor::Yellow; }
void BColorCafe() { Console::BackgroundColor = ConsoleColor::DarkYellow; }
void BColorMorado() { Console::BackgroundColor = ConsoleColor::Magenta; }
void BColorBlanco() { Console::BackgroundColor = ConsoleColor::White; }

void EscribirTextoAnimado(string mensaje, int x, int y, int sleep) {
	Posicion(x, y); ColorBlanco();
	for (int i = 0; i < (int)mensaje.length(); i++) {
		cout << mensaje[i];
		_sleep(sleep);
	}
}
void AnimacionBorrar() {
	ColorRojo();
	for (int i = 213; i > 7; i = i - 7) {
		for (int j = 0; j < 47; j++) { Posicion(i - 6, j); cout << "|       "; }
		_sleep(1);
	}
	Console::Clear();
}
void ImprimirWASD() {  //visual
	ColorAzul(); Posicion(115, 26); cout << "W";
	ColorAzul(); Posicion(113, 27); cout << "A";
	ColorAzul(); Posicion(115, 28); cout << "S";
	ColorAzul(); Posicion(117, 27); cout << "D";
	ColorAzul(); Posicion(113, 29); cout << "Z";
}
void AnimacionWASD(int x) {  //visual
	ColorAmarillo();
	switch (x) {
	case 1: Posicion(115, 26); cout << "W"; break;
	case 2: Posicion(113, 27); cout << "A"; break;
	case 3: Posicion(115, 28); cout << "S"; break;
	case 4: Posicion(117, 27); cout << "D"; break;
	case 5: Posicion(113, 29); cout << "Z"; break;
	}
}
void WASDmover(bool arriba, bool abajo, bool izquierda, bool derecha, char tecla2, int px, int py) {
	if ((tecla2 == 'w' || tecla2 == 'W') && (arriba == true) && (py > 4)) { py--; }
	if (tecla2 == 'w' || tecla2 == 'W') { ImprimirWASD(); AnimacionWASD(1); }
	if ((tecla2 == 's' || tecla2 == 'S') && (abajo == true) && (py < 27)) { py++; }
	if (tecla2 == 's' || tecla2 == 'S') { ImprimirWASD(); AnimacionWASD(3); }
	if ((tecla2 == 'a' || tecla2 == 'A') && (izquierda == true) && (px > 0)) { px -= 2; }
	if (tecla2 == 'a' || tecla2 == 'A') { ImprimirWASD(); AnimacionWASD(2); }
	if ((tecla2 == 'd' || tecla2 == 'D') && (derecha == true) && (px < 102)) { px += 2; }
	if (tecla2 == 'd' || tecla2 == 'D') { ImprimirWASD(); AnimacionWASD(4); }
	if (tecla2 == 'z' || tecla2 == 'Z') { ImprimirWASD(); AnimacionWASD(5); }
}