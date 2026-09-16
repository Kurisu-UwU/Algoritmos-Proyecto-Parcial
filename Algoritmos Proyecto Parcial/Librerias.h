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
void DibujarWASD(int x, int y) {
	ColorAzul();
	Posicion(x, y);     cout << " ____ ____ ____ ____";
	Posicion(x, y + 1); cout << "||W |||A |||S |||D ||";
	Posicion(x, y + 2); cout << "||__|||__|||__|||__||";
	Posicion(x, y + 3); cout << "|/__\\|/__\\|/__\\|/__\\|";
}
// ____           
//||w ||          
//||__||          
//|/__\|          
// ____ ____ ____ 
//||a |||s |||d ||
//||__|||__|||__||
//|/__\|/__\|/__\|
void AnimacionWASD(int x,int y,int noseaaa) {  //visual
	ColorAmarillo();
	switch (noseaaa) {
	case 1: 
		Posicion(x, y);     cout << " ____ ";
		Posicion(x, y + 1); cout << "||W ||";
		Posicion(x, y + 2); cout << "||__||";
		Posicion(x, y + 3); cout << "|/__\\|";
		break;
	case 2: 
		Posicion(x+5, y);     cout << " ____ ";
		Posicion(x+5, y + 1); cout << "||A ||";
		Posicion(x+5, y + 2); cout << "||__||";
		Posicion(x+5, y + 3); cout << "|/__\\|";
		break;
	case 3: 
		Posicion(x+10, y);     cout << " ____ ";
		Posicion(x+10, y + 1); cout << "||S ||";
		Posicion(x+10, y + 2); cout << "||__||";
		Posicion(x+10, y + 3); cout << "|/__\\|";
		break;
	case 4: 
		Posicion(x + 15, y);     cout << " ____ ";
		Posicion(x + 15, y + 1); cout << "||D ||";
		Posicion(x + 15, y + 2); cout << "||__||";
		Posicion(x + 15, y + 3); cout << "|/__\\|";
		break;
	case 5: Posicion(x, y); cout << "Z"; break;
	}
}