#pragma once
#include "NivelPersecucionClase.h"
#include "TextoAnimadoDialogosETC.h"

void NivelPersecucion(Persecucion* nivelpersecucion){
		DibujarPanelDeControl();
		_sleep(1);
		Random dado;
		Random dado2;
		int r = dado.Next(1, 4);
		int f = dado2.Next(1, 4);
		switch (tiempo) {
		case 20: nivelpersecucion->RevivirCarro(r, f); break;
		case 40: nivelpersecucion->RevivirCarro(r, f); break;
		case 60: nivelpersecucion->RevivirCarro(r, f); break;
		case 90: nivelpersecucion->RevivirCarro(r, f); break;
		case 100: nivelpersecucion->RevivirCarro(r, f); break;
		case 120: nivelpersecucion->RevivirCarro(r, f); break;
		case 140: nivelpersecucion->RevivirCarro(r, f); break;
		case 170: nivelpersecucion->RevivirCarro(r, f); break;
		case 180: nivelpersecucion->RevivirCarro(r, f); break;
		case 380: break;
		default: break;
		}
		tiempo++;
		Posicion(20, 10); ColorAzul(); cout << "Tiempo: " << tiempo;
		Posicion(40, 10); ColorVerde(); cout << "Puntaje: " << " ";
		Posicion(60, 10); ColorRojo(); cout << "Vida: " << " ";
}

void NivelesRitmo1(Niveles* nivel3, int n) {
	switch (n) {
	case 0: break;
	case 1: {
		AnimacionBorrar();
		int booleanoGeneralParaNiveles2 = true;
		tiempo = 0;
		nivel3->GenerarTambores(12);
		nivel3->AtributosTambores(12);
		int puntaje = 0;
		short pos = 1;
		int vida = 20;
		DibujarZX(26, 43);
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
				BorrarPunk(26, 16);
				BorrarPunk(26, 23);
				BorrarPunk(26, 30);
				tecla = _getch();
				if (tecla == 'z' || tecla == 'Z')AnimacionZX(26, 43, 0);
				if (tecla == 'x' || tecla == 'X')AnimacionZX(26, 43, 1);
				switch (nivel3->PresionarTambores(25, pos)) {
				case 0: break;
				case 1: puntaje += 2;  break;
				case 2: puntaje++; vida--;  break;
				}
				if ((tecla == 's' || tecla == 'S') && pos < 2) { pos++; }
				if ((tecla == 'w' || tecla == 'W') && pos > 0) { pos--; }
			}
			switch (tiempo) {
			case 20: nivel3->RevivirTambor(0, 1); break;
			case 40: nivel3->RevivirTambor(0, 1); break;
			case 60: nivel3->RevivirTambor(1, 1); break;
			case 90: nivel3->RevivirTambor(1, 1); break;
			case 100: nivel3->RevivirTambor(0, 0); break;
			case 120: nivel3->RevivirTambor(0, 0); break;
			case 140: nivel3->RevivirTambor(1, 0); break;
			case 170: nivel3->RevivirTambor(1, 0); break;
			case 180: nivel3->RevivirTambor(0, 1); break;
			case 380: booleanoGeneralParaNiveles2 = false; booleanoGeneralParaNiveles3 = false; cantidaddeherramientas++; break;
			default: break;
			}
			tiempo++;
			Posicion(20, 10); ColorAzul(); cout << "Tiempo: " << tiempo;
			Posicion(40, 10); ColorVerde(); cout << "Puntaje: " << puntaje << " ";
			Posicion(60, 10); ColorRojo(); cout << "Vida: " << vida << " ";
			DibujarZX(26, 43);
		} while (booleanoGeneralParaNiveles2 && vida > 1);
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
	case 2: {
		AnimacionBorrar();
		int booleanoGeneralParaNiveles2 = true;
		tiempo = 0;
		nivel3->GenerarTambores(12);
		nivel3->AtributosTambores(12);
		int puntaje = 0;
		short pos = 1;
		int vida = 20;
		DibujarZX(26, 43);
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
				BorrarPunk(26, 16);
				BorrarPunk(26, 23);
				BorrarPunk(26, 30);
				tecla = _getch();
				if (tecla == 'z' || tecla == 'Z')AnimacionZX(26, 43, 0);
				if (tecla == 'x' || tecla == 'X')AnimacionZX(26, 43, 1);
				switch (nivel3->PresionarTambores(25, pos)) {
				case 0: break;
				case 1: puntaje += 2;  break;
				case 2: puntaje++; vida--;  break;
				}
				if ((tecla == 's' || tecla == 'S') && pos < 2) { pos++; }
				if ((tecla == 'w' || tecla == 'W') && pos > 0) { pos--; }
			}
			switch (tiempo) {
			case 20: nivel3->RevivirTambor(0, 1); break;
			case 40: nivel3->RevivirTambor(0, 1); break;
			case 60: nivel3->RevivirTambor(1, 1); break;
			case 90: nivel3->RevivirTambor(1, 1); break;
			case 100: nivel3->RevivirTambor(0, 0); break;
			case 120: nivel3->RevivirTambor(0, 0); break;
			case 140: nivel3->RevivirTambor(1, 0); break;
			case 170: nivel3->RevivirTambor(1, 0); break;
			case 180: nivel3->RevivirTambor(0, 1); break;
			case 200: nivel3->RevivirTambor(0, 1); break;
			case 220: nivel3->RevivirTambor(0, 2); break;
			case 240: nivel3->RevivirTambor(0, 2); break;
			case 260: nivel3->RevivirTambor(0, 1); break;
			case 280: nivel3->RevivirTambor(0, 1); break;
			case 300: nivel3->RevivirTambor(0, 0); break;
			case 320: nivel3->RevivirTambor(0, 0); break;
			case 340: nivel3->RevivirTambor(0, 1); break;
			case 360: nivel3->RevivirTambor(0, 1); break;
			case 380: nivel3->RevivirTambor(1, 1); break;
			case 410: nivel3->RevivirTambor(1, 1); break;
			case 420: nivel3->RevivirTambor(0, 1); break;
			case 620: booleanoGeneralParaNiveles2 = false; booleanoGeneralParaNiveles3 = false; cantidaddeherramientas++; break;
			default: break;
			}
			tiempo++;
			Posicion(20, 10); ColorAzul(); cout << "Tiempo: " << tiempo;
			Posicion(40, 10); ColorVerde(); cout << "Puntaje: " << puntaje << " ";
			Posicion(60, 10); ColorRojo(); cout << "Vida: " << vida << " ";
		} while (booleanoGeneralParaNiveles2 && vida > 1);
		AnimacionBorrar();
		DibujarPanelDeControl();
		DibujarEdificio(1, 7);
		DibujarEdificio(26, 7);
		DibujarEdificio(51, 7);
		DibujarEdificio(76, 7);
		DibujarEdificio(101, 7);
		DibujarEdificio(126, 7);
		DibujarEdificio(151, 7);
		DibujarEdificio(176, 7);
		DibujarEdificio(187, 32);
		DibujarEdificio(162, 32);
		DibujarEdificio(137, 32);
		DibujarEdificio(1, 32);
		DibujarEdificio(26, 32);
		DibujarEdificio(51, 32);
		break;
	}
	case 3: {
		AnimacionBorrar();
		int booleanoGeneralParaNiveles2 = true;
		tiempo = 0;
		nivel3->GenerarTambores(12);
		nivel3->AtributosTambores(12);
		int puntaje = 0;
		short pos = 1;
		int vida = 20;
		DibujarZX(26, 43);
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
				BorrarPunk(26, 16);
				BorrarPunk(26, 23);
				BorrarPunk(26, 30);
				tecla = _getch();
				if (tecla == 'z' || tecla == 'Z')AnimacionZX(26, 43, 0);
				if (tecla == 'x' || tecla == 'X')AnimacionZX(26, 43, 1);
				switch (nivel3->PresionarTambores(25, pos)) {
				case 0: break;
				case 1: puntaje += 2;  break;
				case 2: puntaje++; vida--;  break;
				}
				if ((tecla == 's' || tecla == 'S') && pos < 2) { pos++; }
				if ((tecla == 'w' || tecla == 'W') && pos > 0) { pos--; }
			}
			switch (tiempo) {
			case 20: nivel3->RevivirTambor(0, 1); break;
			case 40: nivel3->RevivirTambor(0, 1); break;
			case 60: nivel3->RevivirTambor(1, 1); break;
			case 90: nivel3->RevivirTambor(1, 1); break;
			case 100: nivel3->RevivirTambor(0, 0); break;
			case 120: nivel3->RevivirTambor(0, 0); break;
			case 140: nivel3->RevivirTambor(1, 0); break;
			case 170: nivel3->RevivirTambor(1, 0); break;
			case 180: nivel3->RevivirTambor(0, 1); break;
			case 200: nivel3->RevivirTambor(0, 1); break;
			case 220: nivel3->RevivirTambor(0, 2); break;
			case 240: nivel3->RevivirTambor(0, 2); break;
			case 260: nivel3->RevivirTambor(0, 1); break;
			case 280: nivel3->RevivirTambor(0, 1); break;
			case 300: nivel3->RevivirTambor(0, 0); break;
			case 320: nivel3->RevivirTambor(0, 0); break;
			case 340: nivel3->RevivirTambor(0, 1); break;
			case 360: nivel3->RevivirTambor(0, 1); break;
			case 380: nivel3->RevivirTambor(1, 1); break;
			case 410: nivel3->RevivirTambor(1, 1); break;
			case 420: nivel3->RevivirTambor(0, 1); break;
			case 430: nivel3->RevivirTambor(1, 1); break;
			case 440: nivel3->RevivirTambor(0, 1); break;
			case 450: nivel3->RevivirTambor(1, 1); break;
			case 460: nivel3->RevivirTambor(0, 1); break;
			case 465: nivel3->RevivirTambor(1, 1); break;
			case 666: booleanoGeneralParaNiveles2 = false; booleanoGeneralParaNiveles5 = false; cantidaddeherramientas++; break;
			default: break;
			}
			tiempo++;
			Posicion(20, 10); ColorAzul(); cout << "Tiempo: " << tiempo;
			Posicion(40, 10); ColorVerde(); cout << "Puntaje: " << puntaje << " ";
			Posicion(60, 10); ColorRojo(); cout << "Vida: " << vida << " ";
		} while (booleanoGeneralParaNiveles2 && vida > 1);
		AnimacionBorrar();
		DibujarPanelDeControl();
		DibujarEdificio(1, 7);
		DibujarEdificio(26, 7);
		DibujarEdificio(51, 7);
		DibujarEdificio(76, 7);
		DibujarEdificio(101, 7);
		DibujarEdificio(126, 7);
		DibujarEdificio(151, 7);
		DibujarEdificio(176, 7);
		DibujarEdificio(187, 32);
		DibujarEdificio(162, 32);
		DibujarEdificio(137, 32);
		DibujarEdificio(1, 32);
		DibujarEdificio(26, 32);
		DibujarEdificio(51, 32);
		break;
	}
	case 4: {
		AnimacionBorrar();
		int booleanoGeneralParaNiveles2 = true;
		tiempo = 0;
		nivel3->GenerarTambores(12);
		nivel3->AtributosTambores(12);
		int puntaje = 0;
		short pos = 1;
		int vida = 20;
		DibujarZX(26, 43);
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
				BorrarPunk(26, 16);
				BorrarPunk(26, 23);
				BorrarPunk(26, 30);
				tecla = _getch();
				if (tecla == 'z' || tecla == 'Z')AnimacionZX(26, 43, 0);
				if (tecla == 'x' || tecla == 'X')AnimacionZX(26, 43, 1);
				switch (nivel3->PresionarTambores(25, pos)) {
				case 0: break;
				case 1: puntaje += 2;  break;
				case 2: puntaje++; vida--;  break;
				}
				if ((tecla == 's' || tecla == 'S') && pos < 2) { pos++; }
				if ((tecla == 'w' || tecla == 'W') && pos > 0) { pos--; }
			}
			switch (tiempo) {
			case 20: nivel3->RevivirTambor(0, 1); break;
			case 40: nivel3->RevivirTambor(0, 1); break;
			case 60: nivel3->RevivirTambor(1, 1); break;
			case 90: nivel3->RevivirTambor(1, 1); break;
			case 100: nivel3->RevivirTambor(0, 0); break;
			case 120: nivel3->RevivirTambor(0, 0); break;
			case 140: nivel3->RevivirTambor(1, 0); break;
			case 170: nivel3->RevivirTambor(1, 0); break;
			case 180: nivel3->RevivirTambor(0, 1); break;
			case 200: nivel3->RevivirTambor(0, 1); break;
			case 220: nivel3->RevivirTambor(0, 2); break;
			case 240: nivel3->RevivirTambor(0, 2); break;
			case 260: nivel3->RevivirTambor(0, 1); break;
			case 280: nivel3->RevivirTambor(0, 1); break;
			case 300: nivel3->RevivirTambor(0, 0); break;
			case 320: nivel3->RevivirTambor(0, 0); break;
			case 340: nivel3->RevivirTambor(0, 1); break;
			case 360: nivel3->RevivirTambor(0, 1); break;
			case 380: nivel3->RevivirTambor(1, 1); break;
			case 410: nivel3->RevivirTambor(1, 1); break;
			case 420: nivel3->RevivirTambor(0, 1); break;
			case 430: nivel3->RevivirTambor(1, 1); break;
			case 440: nivel3->RevivirTambor(0, 1); break;
			case 450: nivel3->RevivirTambor(1, 1); break;
			case 460: nivel3->RevivirTambor(0, 1); break;
			case 465: nivel3->RevivirTambor(1, 1); break;
			case 600: nivel3->RevivirTambor(0, 1); break;
			case 630: nivel3->RevivirTambor(1, 1); break;
			case 650: nivel3->RevivirTambor(1, 1); break;
			case 680: nivel3->RevivirTambor(0, 1); break;
			case 690: nivel3->RevivirTambor(0, 1); break;
			case 710: nivel3->RevivirTambor(1, 1); break;
			case 740: nivel3->RevivirTambor(1, 1); break;
			case 750: nivel3->RevivirTambor(0, 1); break;
			case 950: booleanoGeneralParaNiveles2 = false; booleanoGeneralParaNiveles3 = false; cantidaddeherramientas++; break;
			default: break;
			}
			tiempo++;
			Posicion(20, 10); ColorAzul(); cout << "Tiempo: " << tiempo;
			Posicion(40, 10); ColorVerde(); cout << "Puntaje: " << puntaje << " ";
			Posicion(60, 10); ColorRojo(); cout << "Vida: " << vida << " ";
		} while (booleanoGeneralParaNiveles2 && vida > 1);
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
	case 5: {
		AnimacionBorrar();
		int booleanoGeneralParaNiveles2 = true;
		tiempo = 0;
		nivel3->GenerarTambores(12);
		nivel3->AtributosTambores(12);
		int puntaje = 0;
		short pos = 1;
		int vida = 20;
		DibujarZX(26, 43);
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
				BorrarPunk(26, 16);
				BorrarPunk(26, 23);
				BorrarPunk(26, 30);
				tecla = _getch();
				if (tecla == 'z' || tecla == 'Z')AnimacionZX(26, 43, 0);
				if (tecla == 'x' || tecla == 'X')AnimacionZX(26, 43, 1);
				switch (nivel3->PresionarTambores(25, pos)) {
				case 0: break;
				case 1: puntaje += 2;  break;
				case 2: puntaje++; vida--;  break;
				}
				if ((tecla == 's' || tecla == 'S') && pos < 2) { pos++; }
				if ((tecla == 'w' || tecla == 'W') && pos > 0) { pos--; }
			}
			switch (tiempo) {
			case 20: nivel3->RevivirTambor(0, 1); break;
			case 40: nivel3->RevivirTambor(0, 1); break;
			case 60: nivel3->RevivirTambor(1, 1); break;
			case 90: nivel3->RevivirTambor(1, 1); break;
			case 100: nivel3->RevivirTambor(0, 0); break;
			case 120: nivel3->RevivirTambor(0, 0); break;
			case 140: nivel3->RevivirTambor(1, 0); break;
			case 170: nivel3->RevivirTambor(1, 0); break;
			case 180: nivel3->RevivirTambor(0, 1); break;
			case 200: nivel3->RevivirTambor(0, 1); break;
			case 220: nivel3->RevivirTambor(0, 2); break;
			case 240: nivel3->RevivirTambor(0, 2); break;
			case 260: nivel3->RevivirTambor(0, 1); break;
			case 280: nivel3->RevivirTambor(0, 1); break;
			case 300: nivel3->RevivirTambor(0, 0); break;
			case 320: nivel3->RevivirTambor(0, 0); break;
			case 340: nivel3->RevivirTambor(0, 1); break;
			case 360: nivel3->RevivirTambor(0, 1); break;
			case 380: nivel3->RevivirTambor(1, 1); break;
			case 410: nivel3->RevivirTambor(1, 1); break;
			case 420: nivel3->RevivirTambor(0, 1); break;
			case 430: nivel3->RevivirTambor(1, 1); break;
			case 440: nivel3->RevivirTambor(0, 1); break;
			case 450: nivel3->RevivirTambor(1, 1); break;
			case 460: nivel3->RevivirTambor(0, 1); break;
			case 465: nivel3->RevivirTambor(1, 1); break;
			case 600: nivel3->RevivirTambor(0, 1); break;
			case 630: nivel3->RevivirTambor(1, 1); break;
			case 650: nivel3->RevivirTambor(1, 1); break;
			case 680: nivel3->RevivirTambor(0, 1); break;
			case 690: nivel3->RevivirTambor(0, 1); break;
			case 710: nivel3->RevivirTambor(1, 1); break;
			case 740: nivel3->RevivirTambor(1, 1); break;
			case 750: nivel3->RevivirTambor(0, 1); break;
			case 950: booleanoGeneralParaNiveles2 = false; booleanoGeneralParaNiveles5 = false; cantidaddeherramientas++; break;
			default: break;
			}
			tiempo++;
			Posicion(20, 10); ColorAzul(); cout << "Tiempo: " << tiempo;
			Posicion(40, 10); ColorVerde(); cout << "Puntaje: " << puntaje << " ";
			Posicion(60, 10); ColorRojo(); cout << "Vida: " << vida << " ";
		} while (booleanoGeneralParaNiveles2 && vida > 1);
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
	case 6: {
		AnimacionBorrar();
		int booleanoGeneralParaNiveles2 = true;
		tiempo = 0;
		nivel3->GenerarTambores(12);
		nivel3->AtributosTambores(12);
		int puntaje = 0;
		short pos = 1;
		int vida = 20;
		DibujarZX(26, 43);
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
				BorrarPunk(26, 16);
				BorrarPunk(26, 23);
				BorrarPunk(26, 30);
				tecla = _getch();
				if (tecla == 'z' || tecla == 'Z')AnimacionZX(26, 43, 0);
				if (tecla == 'x' || tecla == 'X')AnimacionZX(26, 43, 1);
				switch (nivel3->PresionarTambores(25, pos)) {
				case 0: break;
				case 1: puntaje += 2;  break;
				case 2: puntaje++; vida--;  break;
				}
				if ((tecla == 's' || tecla == 'S') && pos < 2) { pos++; }
				if ((tecla == 'w' || tecla == 'W') && pos > 0) { pos--; }
			}
			switch (tiempo) {
			case 20: nivel3->RevivirTambor(0, 1); break;
			case 40: nivel3->RevivirTambor(0, 1); break;
			case 60: nivel3->RevivirTambor(1, 1); break;
			case 90: nivel3->RevivirTambor(1, 1); break;
			case 100: nivel3->RevivirTambor(0, 0); break;
			case 120: nivel3->RevivirTambor(0, 0); break;
			case 140: nivel3->RevivirTambor(1, 0); break;
			case 170: nivel3->RevivirTambor(1, 0); break;
			case 180: nivel3->RevivirTambor(0, 1); break;
			case 200: nivel3->RevivirTambor(0, 1); break;
			case 220: nivel3->RevivirTambor(0, 2); break;
			case 240: nivel3->RevivirTambor(0, 2); break;
			case 260: nivel3->RevivirTambor(0, 1); break;
			case 280: nivel3->RevivirTambor(0, 1); break;
			case 300: nivel3->RevivirTambor(0, 0); break;
			case 320: nivel3->RevivirTambor(0, 0); break;
			case 340: nivel3->RevivirTambor(0, 1); break;
			case 360: nivel3->RevivirTambor(0, 1); break;
			case 380: nivel3->RevivirTambor(1, 1); break;
			case 410: nivel3->RevivirTambor(1, 1); break;
			case 420: nivel3->RevivirTambor(0, 1); break;
			case 430: nivel3->RevivirTambor(1, 1); break;
			case 440: nivel3->RevivirTambor(0, 1); break;
			case 450: nivel3->RevivirTambor(1, 1); break;
			case 460: nivel3->RevivirTambor(0, 1); break;
			case 465: nivel3->RevivirTambor(1, 1); break;
			case 600: nivel3->RevivirTambor(0, 1); break;
			case 630: nivel3->RevivirTambor(1, 1); break;
			case 650: nivel3->RevivirTambor(1, 1); break;
			case 680: nivel3->RevivirTambor(0, 1); break;
			case 690: nivel3->RevivirTambor(0, 1); break;
			case 710: nivel3->RevivirTambor(1, 1); break;
			case 740: nivel3->RevivirTambor(1, 1); break;
			case 750: nivel3->RevivirTambor(0, 1); break;
			case 950: booleanoGeneralParaNiveles2 = false; booleanoGeneralParaNiveles6 = false; cantidaddeherramientas++; break;
			default: break;
			}
			tiempo++;
			Posicion(20, 10); ColorAzul(); cout << "Tiempo: " << tiempo;
			Posicion(40, 10); ColorVerde(); cout << "Puntaje: " << puntaje << " ";
			Posicion(60, 10); ColorRojo(); cout << "Vida: " << vida << " ";
		} while (booleanoGeneralParaNiveles2 && vida > 1);
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
	default: break;
	}
	tecla = 'j';
}
