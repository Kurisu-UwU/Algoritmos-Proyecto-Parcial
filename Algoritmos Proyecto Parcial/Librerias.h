#pragma once
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;
using namespace System;

int opMenu = 1, opFinal = 0;
bool enCarga; // condicion para el bucle main
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

void EscribirTextoAnimado(string mensaje, int x, int y) {
	Posicion(x, y); ColorBlanco();
	for (int i = 0; i < (int)mensaje.length(); i++) {
		cout << mensaje[i];
		_sleep(25);
	}
}