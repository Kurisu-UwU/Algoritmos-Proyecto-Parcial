#pragma once
#include <conio.h>
#include <iostream>
#include <ctime>
#include <windows.h>
#include <string>
#include <vector>
#using <System.dll>  // Claude IA


#define ANCHO 4
#define ALTO 4

#define PosIzDIALOGO 20
#define PosDerDIALOGO 120

using namespace std;
using namespace System;
using namespace System::Diagnostics;
using namespace System::Media; // Claude IA
using namespace System::Drawing;

int opMenu = 1, opFinal = 0;
bool Condicion2; // condicion para el bucle main
bool Condicion1 = true; // condicion para el bucle main
int tiempo = 0;
char tecla = ' ';
bool booleanoGeneralParaNiveles = true;
// El 2 ya se usa
bool booleanoGeneralParaNiveles3 = true;
bool booleanoGeneralParaNiveles4 = true;
bool booleanoGeneralParaNiveles5 = true;
bool booleanoGeneralParaNiveles6 = true;
bool booltexto = true;
int cantidaddeherramientas = 0;
bool boolmiguelatrapa = false;

char teclageneralbasura = 'j';

int tempanimaciontitulo = 0;

int contadortiempomiguel = 0;

int puntuaciontotal = 0;

bool CalcularColisiones(int x1, int y1, int x2, int y2, int alto1, int ancho1, int alto2, int ancho2) { // colisiones para entidades
	if ((x1 <= x2 + ancho2-1 && y1 <= y2 + alto2-1) && (x1 + ancho1-1 >= x2 && y1 + alto1-1 >= y2)) { return true; }else { return false; }
}
bool CalcularColisionesDireccionales(int x1, int y1, int x2, int y2, int ancho1, int alto1, int ancho2, int alto2, int velocidadx, int velocidady, int tipo) { // colisiones para muros y obstáculos
	int futuroX1 = x1;
	int futuroY1 = y1;
	switch (tipo) {
	case 0: futuroY1 -= velocidady; break; // Arriba (W)  
	case 1: futuroX1 -= velocidadx; break; // Izquierda (A) 
	case 2: futuroY1 += velocidady; break; // Abajo (S)      
	case 3: futuroX1 += velocidadx; break; // Derecha (D)
	default: return false;
	}
	bool colisionX = (futuroX1 < x2 + ancho2) && (futuroX1 + ancho1 > x2);
	bool colisionY = (futuroY1 < y2 + alto2) && (futuroY1 + alto1 > y2);
	return colisionX && colisionY;
}