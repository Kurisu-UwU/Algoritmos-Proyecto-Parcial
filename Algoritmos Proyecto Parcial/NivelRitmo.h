#pragma once
#include "NivelesClase.h"
#include "TextoAnimadoDialogosETC.h"


void NivelesRitmo1(Niveles* nivel3, int n) {
	switch (n) {
	case 1: {
		AnimacionBorrar();
		int booleanoGeneralParaNiveles2 = true;
		tiempo = 0;
		nivel3->GenerarTambores(12);
		nivel3->AtributosTambores(12);
		int puntaje = 0;
		short pos = 1;
		int vida = 20;
		DibujarZX(26,43);
		do {
			DibujarPanelDeControl();
			switch (pos) {
			case 0: DibujarPunk(26, 16); break;
			case 1: DibujarPunk(26, 23); break;
			case 2: DibujarPunk(26, 30); break;
			default: break;
			}
			nivel3->TamboresMovimiento(25);
			_sleep(1);
			if (_kbhit()) {
				DibujarZX(26, 43);
				BorrarPunk(26,16);
				BorrarPunk(26, 23);
				BorrarPunk(26, 30);
				tecla = _getch();
				if (tecla == 'z' || tecla == 'Z')AnimacionZX(26, 43,0);
				if (tecla == 'x' || tecla == 'X')AnimacionZX(26, 43, 1);
				switch (nivel3->PresionarTambores(25, pos)) {
				case 0: break;
				case 1: puntaje += 2;  break;
				case 2: puntaje++; vida--;  break;
				}
				if ((tecla == 's' || tecla == 'S')&& pos < 2) { pos++; }
				if ((tecla == 'w' || tecla == 'W')&& pos > 0) { pos--; }
			}
			switch (tiempo) {
			case 20: nivel3->RevivirTambor(0,1); break;
			case 40: nivel3->RevivirTambor(0,1); break;
			case 60: nivel3->RevivirTambor(1,1); break;
			case 110: nivel3->RevivirTambor(1,0); break;
			case 120: nivel3->RevivirTambor(0, 0); break;
			case 130: nivel3->RevivirTambor(1, 0); break;
			case 180: nivel3->RevivirTambor(0, 2); break;
			case 240: nivel3->RevivirTambor(1, 2); break;
			case 440: booleanoGeneralParaNiveles2 = false; booleanoGeneralParaNiveles3 = false; break;
			default: break;
			}
			tiempo++;
			Posicion(20, 10); ColorAzul(); cout << "Tiempo: " << tiempo;
			Posicion(40, 10); ColorVerde(); cout << "Puntaje: " << puntaje << " ";
			Posicion(60, 10); ColorRojo(); cout << "Vida: " << vida << " ";
		} while (booleanoGeneralParaNiveles2 && vida>1);
		AnimacionBorrar();
		DibujarPanelDeControl();
		DibujarEdificio(1, 7);//Dibuja obstaculo
		DibujarEdificio(26, 7);
		DibujarEdificio(51, 7);
		DibujarEdificio(187, 32);
		DibujarEdificio(162, 32);
		DibujarEdificio(137, 32);
		break;
	}
	case 2: break;
	case 3: break;
	default: break;
	}
}
