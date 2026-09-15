#pragma once
#include <conio.h>
#include <iostream>
using namespace std;
using namespace System;

int opMenu = 1, opFinal = 0;
bool Condicion2; // condicion para el bucle main
bool Condicion1 = true; // condicion para el bucle main
int tiempo = 0;

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