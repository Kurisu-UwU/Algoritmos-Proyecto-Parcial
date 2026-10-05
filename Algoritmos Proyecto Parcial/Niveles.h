#pragma once
#include "NivelRitmo.h"
void NivelPregunta() {

	AnimacionBorrar();

	DibujarMiles(30, 24);
	DibujarMiguel(40, 24);
	DibujarEdificio(1, 32);
	DibujarEdificio(26, 32);
	DibujarEdificio(51, 32);
	DibujarEdificio(136, 32);
	DibujarEdificio(161, 32);
	DibujarEdificio(186, 32);
	DibujarEdificio(7, 7);
	DibujarEdificio(32, 7);
	DibujarEdificio(57, 7);
	DibujarEdificio(82, 7);
	DibujarEdificio(107, 7);
	DibujarEdificio(132, 7);
	DibujarEdificio(157, 7);
	DibujarEdificio(182, 7);
	DibujarCarro(190, 24);
	DibujarCarro(190, 28);
	DibujarCarro(1, 24);
	DibujarCarro(1, 28);

	DibujarGrieta3(55, 24);
	DibujarGrieta3(63, 24);
	_sleep(300);
	DibujarGrieta2(55, 24);
	DibujarGrieta2(63, 24);
	_sleep(300);
	DibujarGrieta(55, 24);
	DibujarGrieta(63, 24);
	_sleep(300);
	BorrarGrieta(55, 24);
	BorrarGrieta(63, 24);
	DibujarPunk(55, 24);
	DibujarGwen(63, 24);
	for (int i = 0; i < 23; i++) {
		TextFinal(i);
	}



	_sleep(1000);



	AnimacionBorrar();
	CuadroDeTexto("", 0, false);
	EscribirTextoAnimado("Luego de vivir la experiencia desde el punto de vista de los 3 personajes...      ", PosIzDIALOGO, 4, 40);
	CuadroDeTexto("", 0, false);
	EscribirTextoAnimado("Con cual de los 3 personajes te identificas mas?      ", PosIzDIALOGO, 4, 40);
	int booleanoaqui = true;
	
	do {

		ImprimirA(83, 40); ImprimirD(122, 40);
		DibujarOpcionMiles(10, 10);
		DibujarOpcionMiguel(85, 10);
		DibujarOpcionPunk(160, 10);
		DibujarZ(195, 40); Posicion(166, 42); cout << "Presione Z para seleccionar";
		if (kbhit()) {
			tecla = getch();
			ImprimirA(83, 40); ImprimirD(122, 40);
			if (tecla == 'a' || tecla == 'A') { opMenu--; if (opMenu < 1) opMenu = 3; }
			if (tecla == 'd' || tecla == 'D') { opMenu++; if (opMenu > 3) opMenu = 1; }
			if (tecla == 'z' || tecla == 'Z') {
				AnimacionBorrar();
				opFinal = opMenu;  // saber que opción eligió
				booleanoaqui = false;
			}
		}
	} while (booleanoaqui);

	switch (opFinal) {
	case 1: 
		for (int i = 0; i < 6; i++) {
			FinalMiles(i);
		}
		break;
	case 2:
		for (int i = 0; i < 6; i++) {
			FinalMiguel(i);
		}
		break;
	case 3:
		for (int i = 0; i < 6; i++) {
			FinalPunk(i);
		}
		break;
	}
}
void Nivel1() {
	booleanoGeneralParaNiveles4 = true;
	MilesMorales* miles = new MilesMorales(30, 30, 8, 5, 100, 2, 2, 10, 5, 2, "Miles Morales", 1, 1, 3);
	booleanoGeneralParaNiveles = true;
	booleanoGeneralParaNiveles3 = true;
	booleanoGeneralParaNiveles5 = true;
	booleanoGeneralParaNiveles6 = true;
	DibujarMilesMoralesGrandeTitulo(10, 10);
	miles->SetInvisibilidad(false);
	for (int i = 0; i < 4 && booltexto; i++) { TextMilesIntro(i); }
	for (int i = 0; i < 40 && booltexto; i++) { TextMiles1(i); }
	booltexto = true;

	DibujarMiles(100, 22);
	DibujarMiguel(100, 26);
	AnimacionBorrar();
	miles->SetPX(100); miles->SetPY(22);
	Persecucion* nivelpersecucion = new Persecucion();

	nivelpersecucion->GenerarObstaculo(3);
	nivelpersecucion->AtributosObstaculo(0, 1, 14, 0, 200, 4);
	nivelpersecucion->AtributosObstaculo(1, 1, 34, 0, 200, 4);
	nivelpersecucion->AtributosObstaculo(2, 0, 15, 0, 6, 20);

	nivelpersecucion->GenerarCarros(12);
	nivelpersecucion->AtributosCarros();
	DibujarPanelDeControl();
	DibujarCarretera();
	nivelpersecucion->GenerarMovimientoJugador(miles);
	NivelPersecucion(nivelpersecucion);
	nivelpersecucion->CarrosMovimiento(miles);
	DibujarMiguel(0, 22);
	tiempo = 0;
	Posicion(10, 2); ColorAzul(); cout << "[Miles Morales]";
	Posicion(20, 4); ColorAzul(); cout << "Tiempo: " << tiempo;
	Posicion(10, 4); ColorRojo(); cout << "Vida: " << miles->GetVida() << " ";
	do {
		if (tiempo == 0) {ColorAzul();} else if (tiempo == 1) {ColorAmarillo();}
		DibujarW(100, 17);
		Posicion(110, 18); cout << "Mover arriba";
		if (tiempo == 0) { ColorAmarillo(); } else if (tiempo == 1) { ColorAzul(); }
		DibujarS(100, 28);
		Posicion(110, 27); cout << "Mover abajo";
		_sleep(300);
		tiempo++;
		if (tiempo >= 2) { tiempo = 0; }
	} while (!_kbhit());
	BorrarTecla(100, 17);
	BorrarTecla(100, 28);
	Posicion(110, 18); cout << "            ";
	Posicion(110, 27); cout << "            ";
	DibujarCarretera();
	tecla = teclageneralbasura;
	int tempoo = 0;
	int carretera = 6;
	boolmiguelatrapa = false;
	do {  //Parte 1
		if (_kbhit()) { tecla = getch(); }
		DibujarLineaDeCarretera(carretera);
		DibujarPanelDeControl();
		BorrarMiguel(100 - (miles->GetVida() * 20), miles->GetPY());
		nivelpersecucion->GenerarMovimientoJugador(miles);
		NivelPersecucion(nivelpersecucion);
		nivelpersecucion->CarrosMovimiento(miles); 
		Posicion(20, 4); ColorAzul(); cout << "Tiempo: " << tiempo;
		Posicion(10, 4); ColorRojo(); cout << "Vida: " << miles->GetVida() << " ";
		int n = miles->GetVida();
		if (CalcularColisiones(100 - (miles->GetVida() * 20), miles->GetPY(), miles->GetPX(), miles->GetPY(), 20, 6, miles->GetAlto(), miles->GetAncho())) {
			booleanoGeneralParaNiveles = false; boolmiguelatrapa = true;
		}
		DibujarMiguel(100 - (miles->GetVida() * 20), miles->GetPY());
		_sleep(1);
		tecla = teclageneralbasura;
		tempoo++;
		if (tempoo >= 2) { carretera--; tempoo = 0; }
		if (carretera < 0) { carretera = 6; }
	} while (booleanoGeneralParaNiveles && miles->GetVida()>0);
	AnimacionBorrar();
	delete nivelpersecucion;
	if (!boolmiguelatrapa && miles->GetVida() > 0) {
		booleanoGeneralParaNiveles4 = true;
		booleanoGeneralParaNiveles = true;
		Niveles* nivel1 = new Niveles();
		miles->Generarhabilidades();
		miles->SetInvisibilidad(false);
		Enemigos** enemigos1 = new Enemigos * [1];
		enemigos1[0] = new Enemigos(170, 37, 4, 4, 1, 5, 1, 2, 1, "Enemigo1", true, 1);
		enemigos1[1] = new Enemigos(170, 42, 4, 4, 1, 5, 1, 3, 1, "Enemigo1", true, 1);
		Enemigos* enemigo2 = new Enemigos(100, 27, 4, 4, 1, 5, 1, 2, 1, "Enemigo1", true, 1);
		Enemigos* enemigos3 = new Enemigos(160, 25, 4, 4, 1, 5, 1, 2, 1, "Enemigo1", true, 1);
		bool booleanopuertanivel3 = true;
		Enemigos** enemigos4 = new Enemigos * [0];
		enemigos4[0] = new Enemigos(32, 22, 4, 4, 1, 5, 1, 2, 1, "Enemigo1", true, 1);
		bool booleanopuertanivel4 = true;
		Gwen* gwen = new Gwen(129, 10, 6, 5, 1, 5, 1, 5, 1, "Gwen", true, 1);
		bool GwenPersigue = false;
		DibujarSpiderPunkGrandeTitulo(10, 10);
		Console::Clear();
		miles->SetVelocidady(1);
		miles->SetPX(5); miles->SetPY(9);
		int subnivel = 1; ////////////////////////////////// ATENTO CON ESTO, CAMBIAR EL SUBNIVEL PARA PROBAR OTRO NIVEL
		do {
			switch (subnivel) {
			case 1: {
				nivel1->GenerarObstaculo(13);
				nivel1->AtributosObstaculo(0, 0, 7, 0, 194, 1); // muro extremo
				nivel1->AtributosObstaculo(1, 15, 47, 0, 213 - 15, 1);// muro extremo
				nivel1->AtributosObstaculo(2, 0, 7, 0, 1, 12);// muro extremo
				nivel1->AtributosObstaculo(3, 212, 10, 0, 1, 47);// muro extremo

				nivel1->AtributosObstaculo(4, 3, 19, 0, 12, 26);
				nivel1->AtributosObstaculo(5, 44, 19, 0, 72 - 42, 35 - 19);
				nivel1->AtributosObstaculo(6, 73, 22, 0, 109 - 72, 34 - 21);
				nivel1->AtributosObstaculo(7, 49, 7, 0, 73 - 48, 19 - 7);
				nivel1->AtributosObstaculo(8, 146, 22, 0, 156 - 145, 34 - 21);
				nivel1->AtributosObstaculo(9, 156, 7, 0, 187 - 155, 35 - 7);
				//Puertas Abiertas
				nivel1->AtributosObstaculo(10, 14, 19, 0, 9, 1);
				nivel1->AtributosObstaculo(11, 38, 19, 0, 11, 1);
				nivel1->AtributosObstaculo(12, 208, 7, 0, 8, 1);

				tecla = 'j';
				DibujarNivelUno1();
				Posicion(10, 2); ColorAzul(); cout << "[Miles Morales]";
				Posicion(30, 2); ColorVerde(); cout << "Habilidad Q: Lista";
				bool cositoraro = true;
				int tiempodano = 0;
				do {  //Parte 1
					if (_kbhit()) { tecla = getch(); }
					DibujarPanelDeControl();
					Posicion(10, 4); ColorRojo(); cout << "Vida: " << miles->GetVida() << " ";
					nivel1->EnemigoHaceGuardia(enemigos1[0]);
					nivel1->EnemigoHaceGuardia(enemigos1[1]);
					if (GwenPersigue) {
						nivel1->EnemigoAcercaProta(gwen, miles, false);
					}else {gwen->Dibujar();}
					if (!GwenPersigue && CalcularColisiones(miles->GetPX(), miles->GetPY(), gwen->GetEX(), gwen->GetEY(), miles->GetAlto(), miles->GetAncho(), gwen->GetAlto(), gwen->GetAncho())) {
						for (int i = 0; i < 7 && booltexto; i++) { TextMilesConGwen(i); }
						GwenPersigue = true;
						Posicion(10, 2); ColorAzul(); cout << "[Miles Morales]";
					}
					for (int i = 0; i < 2; i++) {
						if (tiempodano == 0 && cositoraro && CalcularColisiones(miles->GetPX(), miles->GetPY(), enemigos1[i]->GetEX(), enemigos1[i]->GetEY(), miles->GetAlto(), miles->GetAncho(), 4, 4)) {
							cositoraro = false;
							miles->SetVida(miles->GetVida() - 1);
							tiempodano = 20;
							BorrarMiles(miles->GetPX(), miles->GetPY());
							miles->SetPX(5);
							miles->SetPY(9);
						}
					}
					nivel1->GenerarMovimientoJugador(miles);
					cositoraro = true;
					if (tecla == 'q' || tecla == 'Q') {
						//Posicion(0, 30); cout << "Habilidad Q activada";
						miles->ControladorTiempoHabilidades(0);
					}
					if (CalcularColisiones(miles->GetPX(), miles->GetPY(), 194, 7, miles->GetAlto(), miles->GetAncho(), 1, 12)) {
						booleanoGeneralParaNiveles = false;
						subnivel = 2;
						miles->SetPX(194); miles->SetPY(41); 
						if (GwenPersigue) {
							gwen->SetEX(194); gwen->SetEY(41);
						}
					}
					_sleep(1);
					tecla = teclageneralbasura;
					miles->DibujarHabilidades();
					if (tiempodano > 0) { tiempodano--; }
				} while (booleanoGeneralParaNiveles && miles->GetVida() >= 0);
				break;
			}
			case 2: {
				nivel1->GenerarObstaculo(8);
				nivel1->AtributosObstaculo(0, 0, 7, 0, 6, 1); /* muro extremo*/ nivel1->AtributosObstaculo(6, 20, 7, 0, 7, 1);
				nivel1->AtributosObstaculo(1, 182, 47, 0, 9, 1);/*muro extremo */ nivel1->AtributosObstaculo(7, 104, 47, 0, 9, 1);
				nivel1->AtributosObstaculo(2, 0, 7, 0, 1, 24);// muro extremo
				nivel1->AtributosObstaculo(3, 212, 10, 0, 1, 47);// muro extremo

				nivel1->AtributosObstaculo(4, 28, 7, 0, 213 - 27, 22 - 6);
				nivel1->AtributosObstaculo(5, 0, 33, 0, 183, 47 - 33);

				tecla = 'j';
				DibujarNivelUno2();
				Posicion(10, 2); ColorAzul(); cout << "[Miles Morales]";
				Posicion(30, 2); ColorVerde(); cout << "Habilidad Q: Lista";
				bool cositoraro = true;
				int tiempodano = 0;
				do {
					if (_kbhit()) { tecla = getch(); }
					DibujarPanelDeControl();
					Posicion(10, 4); ColorRojo(); cout << "Vida: " << miles->GetVida() << " ";
					nivel1->EnemigoAcercaProta(enemigo2, miles, miles->GetInvisibilidad());
					if (!miles->GetInvisibilidad() && tiempodano == 0 && cositoraro && CalcularColisiones(miles->GetPX(), miles->GetPY(), enemigo2->GetEX(), enemigo2->GetEY(), miles->GetAlto(), miles->GetAncho(), 4, 4)) {
						cositoraro = false;
						miles->SetVida(miles->GetVida() - 1);
						tiempodano = 20;
						BorrarMiles(miles->GetPX(), miles->GetPY());
						miles->SetPX(194);
						miles->SetPY(41);
					}
					if (GwenPersigue) {
						nivel1->EnemigoAcercaProta(gwen, miles, false);
					}
					nivel1->GenerarMovimientoJugador(miles);
					cositoraro = true;
					if (tecla == 'q' || tecla == 'Q') {
						//Posicion(0, 30); cout << "Habilidad Q activada";
						miles->ControladorTiempoHabilidades(0);
					}
					if (CalcularColisiones(miles->GetPX(), miles->GetPY(), 189, 47, miles->GetAlto(), miles->GetAncho(), 3, 18)) {
						booleanoGeneralParaNiveles = false;
						subnivel = 1; 
						miles->SetPX(194);miles->SetPY(9); 
						if (GwenPersigue) {
							gwen->SetEX(194); gwen->SetEY(9);
						}
					}
					if (CalcularColisiones(miles->GetPX(), miles->GetPY(), 5, 7, miles->GetAlto(), miles->GetAncho(), 1, 15)) {
						booleanoGeneralParaNiveles = false;
						subnivel = 3;
						miles->SetPX(194); miles->SetPY(41);
						if (GwenPersigue) {
							gwen->SetEX(194); gwen->SetEY(41);
						}
					}
					_sleep(1);
					tecla = teclageneralbasura;
					miles->DibujarHabilidades();
					if (tiempodano > 0) { tiempodano--; }
				} while (booleanoGeneralParaNiveles && miles->GetVida() >=0);
				break;
			}
			case 3: {
				nivel1->GenerarObstaculo(11);
				nivel1->AtributosObstaculo(0, 0, 7, 0, 203, 1); // muro extremo
				nivel1->AtributosObstaculo(1, 182, 47, 0, 9, 1);/*muro extremo */ nivel1->AtributosObstaculo(8, 104, 47, 0, 9, 1);
				nivel1->AtributosObstaculo(2, 0, 7, 0, 1, 3);/*muro extremo */ nivel1->AtributosObstaculo(9, 0, 17, 0, 1, 3);
				nivel1->AtributosObstaculo(3, 212, 10, 0, 1, 47);// muro extremo

				nivel1->AtributosObstaculo(4, 0, 20, 0, 57, 35 - 22);
				nivel1->AtributosObstaculo(5, 55, 35, 0, 181 - 55, 47 - 35);
				nivel1->AtributosObstaculo(6, 55, 20, 0, 181 - 55, 1);
				nivel1->AtributosObstaculo(7, 179, 20, 0, 3, 35 - 20);

				nivel1->AtributosObstaculo(10, 35, 7, 0, 3, 35);

				tecla = 'j';
				DibujarNivelUno3();
				Posicion(10, 2); ColorAzul(); cout << "[Miles Morales]";
				Posicion(30, 2); ColorVerde(); cout << "Habilidad Q: Lista";
				do {  //Parte 1
					if (_kbhit()) { tecla = getch(); }
					DibujarPanelDeControl();
					if (booleanopuertanivel3) {
						DibujarPuertaNivel1Escena3(29, 8); DibujarPlacaDePresion(61, 22);
					}
					else { DibujarPlacaDePresionRoja(61, 22); }
					for (int i = 0; i < 1; i++) {
						nivel1->EnemigoAcercaProta(enemigos3, miles, miles->GetInvisibilidad());
						if (CalcularColisiones(enemigos3->GetEX(), enemigos3->GetEY(), 61, 22, 4, 4, 5, 11)) {
							booleanopuertanivel3 = false;
							nivel1->AtributosObstaculo(10, 0, 0, 0, 0, 0);
							BorrarPuertaNivelEscena3(29, 8);
						}
					}
					if (GwenPersigue) {
						nivel1->EnemigoAcercaProta(gwen, miles, false);
					}
					nivel1->GenerarMovimientoJugador(miles);
					if (tecla == 'q' || tecla == 'Q') {
						//Posicion(0, 30); cout << "Habilidad Q activada";
						miles->ControladorTiempoHabilidades(0);
					}
					if (CalcularColisiones(miles->GetPX(), miles->GetPY(), 189, 47, miles->GetAlto(), miles->GetAncho(), 3, 18)) {
						booleanoGeneralParaNiveles = false;
						subnivel = 2;
						miles->SetPX(9); miles->SetPY(9);
						if (GwenPersigue) {
							gwen->SetEX(9); gwen->SetEY(9);
						}
					}
					if (CalcularColisiones(miles->GetPX(), miles->GetPY(), 0, 10, miles->GetAlto(), miles->GetAncho(), 7, 2)) {
						booleanoGeneralParaNiveles = false;
						subnivel = 4;
						miles->SetPX(194); miles->SetPY(9);
						if (GwenPersigue) {
							gwen->SetEX(194); gwen->SetEY(9);
						}
					}
					_sleep(1);
					tecla = teclageneralbasura;
					miles->DibujarHabilidades();
				} while (booleanoGeneralParaNiveles && miles->GetVida() >= 0);
				break;
			}
			case 4: {
				nivel1->GenerarObstaculo(12);
				nivel1->AtributosObstaculo(0, 0, 7, 0, 213, 1); // muro extremo
				nivel1->AtributosObstaculo(1, 15, 47, 0, 213 - 15, 1);// muro extremo
				nivel1->AtributosObstaculo(2, 0, 7, 0, 1, 47);// muro extremo
				nivel1->AtributosObstaculo(3, 213, 16, 0, 1, 47 - 15); /* muro extremo */ nivel1->AtributosObstaculo(9, 213, 7, 0, 1, 2);

				nivel1->AtributosObstaculo(4, 104, 27, 0, 213 - 105, 36 - 26);
				nivel1->AtributosObstaculo(5, 170, 18, 0, 213 - 169, 27 - 17);
				nivel1->AtributosObstaculo(6, 26, 18, 0, 2, 36 - 18);
				nivel1->AtributosObstaculo(7, 26, 18, 0, 213 - 26, 1);
				nivel1->AtributosObstaculo(8, 26, 36, 0, 213 - 26, 1);
				nivel1->AtributosObstaculo(10, 60, 18, 0, 77 - 60, 27 - 18);

				nivel1->AtributosObstaculo(11, 177, 37, 0, 3, 35);
				tecla = 'j';
				DibujarNivelUno4();
				Posicion(10, 2); ColorAzul(); cout << "[Miles Morales]";
				Posicion(30, 2); ColorVerde(); cout << "Habilidad Q: Lista";
				do {  //Parte 1
					if (_kbhit()) { tecla = getch(); }
					DibujarPanelDeControl();
					if (booleanopuertanivel4) {
						DibujarPuertaNivel1Escena4(177, 37); DibujarPlacaDePresion(156, 20);
					}
					else { DibujarPlacaDePresionVerde(156, 20); }
					for (int i = 0; i < 1; i++) {
						nivel1->EnemigoAcercaProta(enemigos4[i], miles, miles->GetInvisibilidad());
						if (CalcularColisiones(enemigos4[i]->GetEX(), enemigos4[i]->GetEY(), 156, 20, 4, 4, 5, 11)) {
							booleanopuertanivel4 = false;
							nivel1->AtributosObstaculo(11, 0, 0, 0, 0, 0);
							BorrarPuertaNivelEscena4(177, 37);
						}
						else {
							booleanopuertanivel4 = true;
							nivel1->AtributosObstaculo(11, 177, 37, 0, 3, 35);
						}
					}
					if (GwenPersigue) {
						nivel1->EnemigoAcercaProta(gwen, miles, false);
					}
					nivel1->GenerarMovimientoJugador(miles);
					if (tecla == 'q' || tecla == 'Q') {
						miles->ControladorTiempoHabilidades(0);
					}
					if (CalcularColisiones(miles->GetPX(), miles->GetPY(), 210, 39, miles->GetAlto(), miles->GetAncho(), 5, 1)) {
						booleanoGeneralParaNiveles = false;
						subnivel = 5;
						miles->SetPX(9); miles->SetPY(9);
						if (GwenPersigue) {
							gwen->SetEX(9); gwen->SetEY(9);
						}
					}
					if (CalcularColisiones(miles->GetPX(), miles->GetPY(), 210, 10, miles->GetAlto(), miles->GetAncho(), 5, 2)) {
						booleanoGeneralParaNiveles = false;
						subnivel = 3;
						miles->SetPX(7); miles->SetPY(10);
						if (GwenPersigue) {
							gwen->SetEX(7); gwen->SetEY(10);
						}
					}
					_sleep(1);
					tecla = teclageneralbasura;
					miles->DibujarHabilidades();
				} while (booleanoGeneralParaNiveles && miles->GetVida() >= 0);
				break;
			}
			case 5: {
				booleanoGeneralParaNiveles4 = false;
				/*miles->SetPX(194); miles->SetPY(41);
				nivel1->GenerarObstaculo(6);
				nivel1->AtributosObstaculo(0, 0, 7, 0, 194, 1); // muro extremo
				nivel1->AtributosObstaculo(1, 15, 47, 0, 213 - 15, 1);// muro extremo
				nivel1->AtributosObstaculo(2, 0, 7, 0, 1, 24);// muro extremo
				nivel1->AtributosObstaculo(3, 212, 10, 0, 1, 47);// muro extremo

				nivel1->AtributosObstaculo(4, 28, 7, 0, 213 - 27, 22 - 6);
				nivel1->AtributosObstaculo(5, 0, 33, 0, 182, 47 - 33);

				nivel1->GenerarCofres(1);
				nivel1->AtributosCofres(0, 100, 10, 7, 3, 1);
				tecla = 'j';
				DibujarNivelUno2();
				Posicion(10, 2); ColorAzul(); cout << "[Miles Morales]";
				Posicion(30, 2); ColorVerde(); cout << "Habilidad Q: Lista";
				do {  //Parte 1
					if (_kbhit()) { tecla = getch(); }
					DibujarPanelDeControl();
					DibujarTornillos(158, 2); Posicion(160, 3); ColorAzul(); cout << cantidaddeherramientas;
					nivel1->DibujarCofre();
					nivel1->GenerarMovimientoJugador(miles);
					if (booleanoGeneralParaNiveles3) {
						NivelesRitmo1(nivel1, nivel1->PisandoItem(miles));
					}
					if (!booleanoGeneralParaNiveles3) {
						Posicion(160, 20); ColorVerde(); cout << "Ve a buscar mas cofres ------>";
						if (CalcularColisiones(miles->GetPX(), miles->GetPY(), 208, 7, miles->GetAlto(), miles->GetAncho(), 30, 4)) {
							booleanoGeneralParaNiveles = false;
							subnivel = 2;
						}
					}
					else { booleanoGeneralParaNiveles3 = true; }
					_sleep(1);
					tecla = teclageneralbasura;
				} while (booleanoGeneralParaNiveles);*/
				break;
			}
			default: break;
			}
			Console::Clear();
			booleanoGeneralParaNiveles = true;
		} while (booleanoGeneralParaNiveles4 && miles->GetVida() >= 0);
	}
	if (boolmiguelatrapa || miles->GetVida() <= 0) {
		DibujarDerrota();
	}
	else { DibujarVictoriaMiles(); AnimacionBorrar(); }
	delete miles;
}





void Nivel2() {
	booleanoGeneralParaNiveles4 = false;
	bool nivelcompleto = false;
	int subnivel = 1;
	bool subnivelcompleto1, subnivelcompleto2, subnivelcompleto3, subnivelcompleto4, subnivelcompleto5;
	bool subnivelcompleto6, subnivelcompleto7, subnivelcompleto8, subnivelcompleto9, subnivelcompleto10;
	bool subnivelcompleto11, subnivelcompleto12, subnivelcompleto13, subnivelcompleto14, subnivelcompleto15;
	bool subnivelcompleto16, subnivelcompleto17, subnivelcompleto18, subnivelcompleto19, subnivelcompleto20;
	bool subnivelcompleto21, subnivelcompleto22, subnivelcompleto23, subnivelcompleto24, subnivelcompleto25;

	bool dialogo1 = false;
	bool NPC11 = false;
	bool NPC22 = false;
	bool NPC12 = false;
	bool NPC15 = false;
	bool Escape = false;
	DibujarMiguelOharaGrandeTitulo(10, 10);
	for (int i = 0; i < 2 && booltexto; i++) { TextMiguelIntro(i); }
	AnimacionBorrar();
	DibujarMaquinaMargo(150, 10);
	DibujarEscritorioMargo(160, 30);
	DibujarPlataforma(60, 10);
	DibujarMiguel(67, 12);
	DibujarGwen(60, 30);
	DibujarMargoKees(167, 33);
	DibujarSpiderWoman(74, 30);
	for (int i = 0; i < 18 && booltexto; i++) { TextMiguel1(i); }
	AnimacionBorrar();
	booltexto = true;
	MiguelOhara* Miguel = new MiguelOhara(50, 25,6,5, 100, 2, 1, 10, 10, 1, "Miguel O'hara", 2, 1, 3);
	contadortiempomiguel = 10001;
	
	do {
		switch (subnivel) {
		case 1: {
			subnivelcompleto1 = false;
			Niveles* nivel2 = new Niveles();

			DibujarMiguel(Miguel->GetPX(), Miguel->GetPY());

			nivel2->GenerarObstaculo(4);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(3, 136, 32, 0, 75, 16);
			tecla = 'j';

			DibujarEdificio(1, 7);
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			DibujarEdificio(136, 7);
			DibujarEdificio(161, 7);
			DibujarEdificio(186, 7);

			DibujarEdificio(1, 32);
			DibujarEdificio(26, 32);
			DibujarEdificio(51, 32);
			DibujarEdificio(136, 32);
			DibujarEdificio(161, 32);
			DibujarEdificio(186, 32);

			if (dialogo1 == false) {
				for (int i = 0; i < 7 && booltexto; i++) {
					TextMiguel2(i);
					BorrarPanelDeControlInterno();
				}
				booltexto = true;
				dialogo1 = true;
			}

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 250 metros";
				nivel2->GenerarMovimientoJugador(Miguel);
				
				tecla = teclageneralbasura;
				_sleep(1);
				
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 46, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto1 = true;
					subnivel = 6;
					Miguel->SetPX(100);
					Miguel->SetPY(8);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 7, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto1 = true;
					subnivel = 11;
					Miguel->SetPX(100);
					Miguel->SetPY(40);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto1 = true;
					subnivel = 2;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
				if (contadortiempomiguel <= 0) {
					subnivelcompleto1 = true;
					subnivel = 99;
				}
			} while (!subnivelcompleto1);
			delete nivel2;
			break;
		}
		case 2: {
			subnivelcompleto2 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(2);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(1, 1, 32, 0, 210, 16);
			tecla = 'j';

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			do {  //Parte 1

				ColorRojoOscuro(); Posicion(190, 23); cout << "XXXXXXXXX";
				ColorMagenta(); Posicion(190, 23); cout << "101010101";
				ColorAmarilloOscuro(); Posicion(190, 23); cout << "010101010";

				ColorRojoOscuro(); Posicion(188, 25); cout << "XXXXXXX";
				ColorMagenta(); Posicion(188, 25); cout << "1010101";
				ColorAmarilloOscuro(); Posicion(190, 23); cout << "0101010";

				ColorRojoOscuro(); Posicion(197, 28); cout << "XXXX";
				ColorMagenta(); Posicion(197, 28); cout << "1010";
				ColorAmarilloOscuro(); Posicion(197, 28); cout << "0101";

				ColorRojoOscuro(); Posicion(199, 26); cout << "XXXX";
				ColorMagenta(); Posicion(199, 26); cout << "1010";
				ColorAmarilloOscuro(); Posicion(199, 26); cout << "0101";

				ColorRojoOscuro(); Posicion(198, 29); cout << "XXXXXX";
				ColorMagenta(); Posicion(198, 29); cout << "101010";
				ColorAmarilloOscuro(); Posicion(198, 29); cout << "010101";

				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 210 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto2 = true;
					subnivel = 3;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto2 = true;
					subnivel = 1;
					Miguel->SetPX(200);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
				if (contadortiempomiguel <= 0) {
					subnivelcompleto1 = true;
					subnivel = 99;
				}
			} while (!subnivelcompleto2);
			delete nivel2;
			break;
		}
		case 3: {
			subnivelcompleto3 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(3);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(1, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(2, 190, 24, 0, 10, 8);
			tecla = 'j';

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			DibujarGrieta(180, 24);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 180 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto3 = true;
					subnivel = 2;
					Miguel->SetPX(200);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 180, 24, Miguel->GetAlto(), Miguel->GetAncho(), 8, 5)) {
					subnivelcompleto3 = true;
					subnivel = 21;
					Miguel->SetPX(30);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto3);
			delete nivel2;
			break;
		}
		case 4: {
			subnivelcompleto4 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(5);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 1, 24, 0, 20, 8);
			tecla = 'j';

			DibujarEdificio(1, 7);
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			DibujarEdificio(136, 7);
			DibujarEdificio(161, 7);
			DibujarEdificio(186, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			do {  //Parte 1

				ColorRojoOscuro(); Posicion(190, 23); cout << "XXXXXXXXX";
				ColorMagenta(); Posicion(190, 23); cout << "101010101";
				ColorAmarilloOscuro(); Posicion(190, 23); cout << "010101010";

				ColorRojoOscuro(); Posicion(188, 25); cout << "XXXXXXX";
				ColorMagenta(); Posicion(188, 25); cout << "1010101";
				ColorAmarilloOscuro(); Posicion(190, 23); cout << "0101010";

				ColorRojoOscuro(); Posicion(197, 28); cout << "XXXX";
				ColorMagenta(); Posicion(197, 28); cout << "1010";
				ColorAmarilloOscuro(); Posicion(197, 28); cout << "0101";

				ColorRojoOscuro(); Posicion(199, 26); cout << "XXXX";
				ColorMagenta(); Posicion(199, 26); cout << "1010";
				ColorAmarilloOscuro(); Posicion(199, 26); cout << "0101";

				ColorRojoOscuro(); Posicion(198, 29); cout << "XXXXXX";
				ColorMagenta(); Posicion(198, 29); cout << "101010";
				ColorAmarilloOscuro(); Posicion(198, 29); cout << "010101";

				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 155 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 7, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto4 = true;
					subnivel = 14;
					Miguel->SetPX(100);
					Miguel->SetPY(40);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto4 = true;
					subnivel = 5;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto4);
			delete nivel2;
			break;
		}
		case 5: {
			subnivelcompleto5 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(5);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 190, 24, 0, 10, 8);
			nivel2->AtributosObstaculo(3, 1, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(4, 136, 32, 0, 75, 16);
			tecla = 'j';

			DibujarEdificio(1, 7);
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			DibujarEdificio(136, 7);
			DibujarEdificio(161, 7);
			DibujarEdificio(186, 7);

			DibujarEdificio(1, 32);
			DibujarEdificio(26, 32);
			DibujarEdificio(51, 32);
			DibujarEdificio(136, 32);
			DibujarEdificio(161, 32);
			DibujarEdificio(186, 32);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 150 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 46, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto5 = true;
					subnivel = 10;
					Miguel->SetPX(100);
					Miguel->SetPY(8);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 7, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto5 = true;
					subnivel = 15;
					Miguel->SetPX(100);
					Miguel->SetPY(40);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto5 = true;
					subnivel = 4;
					Miguel->SetPX(200);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto5);
			delete nivel2;
			break;
		}
		case 6: {
			subnivelcompleto6 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(5);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 1, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(4, 190, 24, 0, 20, 8);

			tecla = 'j';

			DibujarEdificio(1, 7);
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			DibujarEdificio(136, 7);
			DibujarEdificio(161, 7);
			DibujarEdificio(186, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 280 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 7, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto6 = true;
					subnivel = 1;
					Miguel->SetPX(100);
					Miguel->SetPY(40);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto6);
			delete nivel2;
			break;
		}
		case 7: {
			subnivelcompleto7 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(3);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(1, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(2, 1, 24, 0, 20, 8);
			tecla = 'j';

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 250 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto7 = true;
					subnivel = 8;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto7);
			delete nivel2;
			break;
		}
		case 8: {
			subnivelcompleto8 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(6);
			nivel2->AtributosObstaculo(0, 7, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 82, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 7, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(3, 107, 32, 0, 100, 16);
			tecla = 'j';

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarGrieta(90, 37);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 220 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto8 = true;
					subnivel = 9;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto8 = true;
					subnivel = 7;
					Miguel->SetPX(200);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 90, 37, Miguel->GetAlto(), Miguel->GetAncho(), 8, 5)) {
					subnivelcompleto8 = true;
					subnivel = 22;
					Miguel->SetPX(173);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto8);
			delete nivel2;
			break;
		}
		case 9: {
			subnivelcompleto9 = false;
			Niveles* nivel2 = new Niveles();


			nivel2->GenerarObstaculo(3);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(1, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(2, 190, 24, 0, 10, 8);
			tecla = 'j';

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);


			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 205 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto9 = true;
					subnivel = 8;
					Miguel->SetPX(200);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto9);
			delete nivel2;
			break;
		}
		case 10: {
			subnivelcompleto10 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(5);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 1, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(4, 190, 24, 0, 20, 8);

			tecla = 'j';

			DibujarEdificio(1, 7);
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			DibujarEdificio(136, 7);
			DibujarEdificio(161, 7);
			DibujarEdificio(186, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 200 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 7, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto10 = true;
					subnivel = 5;
					Miguel->SetPX(100);
					Miguel->SetPY(40);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto10);
			delete nivel2;
			break;
		}
		case 11: {
			NPC11 = false;
			subnivelcompleto11 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(6);
			nivel2->AtributosObstaculo(0, 1, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 1, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(4, 190, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(5, 110, 24, 0, 5, 4);

			tecla = 'j';

			DibujarPeterPorker(110, 24);

			DibujarEdificio(1, 32);
			DibujarEdificio(26, 32);
			DibujarEdificio(51, 32);
			DibujarEdificio(136, 32);
			DibujarEdificio(161, 32);
			DibujarEdificio(186, 32);

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 220 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 108, 23, Miguel->GetAlto(), Miguel->GetAncho(), 6, 9)) {
					if (NPC11 == false) {
						for (int i = 0; i < 4 && booltexto; i++) { TextPeterPorker(i); }
						BorrarPanelDeControlInterno();
						NPC11 = true;
						booltexto = true;
					}
				}

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 46, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto11 = true;
					subnivel = 1;
					Miguel->SetPX(100);
					Miguel->SetPY(8);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto11);
			delete nivel2;
			break;
		}
		case 12: {
			NPC12 = false;
			subnivelcompleto12 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(4);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(1, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(2, 1, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(3, 25, 24, 0, 6, 5);
			tecla = 'j';

			DibujarNoir(25, 24);

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 180 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 23, 23, Miguel->GetAlto(), Miguel->GetAncho(), 7, 10)) {
					if (NPC12 == false) {
						for (int i = 0; i < 5 && booltexto; i++) { TextNoir(i); }
						BorrarPanelDeControlInterno();
						NPC12 = true;
						booltexto = true;
					}
				}

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto12 = true;
					subnivel = 13;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto12);
			delete nivel2;
			break;
		}
		case 13: {
			subnivelcompleto13 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(2);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(1, 1, 32, 0, 210, 16);
			tecla = 'j';

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 140 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto13 = true;
					subnivel = 14;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto13 = true;
					subnivel = 12;
					Miguel->SetPX(200);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto13);
			delete nivel2;
			break;
		}
		case 14: {
			subnivelcompleto14 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(3);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(1, 1, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 136, 32, 0, 75, 16);
			tecla = 'j';

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(1, 32);
			DibujarEdificio(26, 32);
			DibujarEdificio(51, 32);
			DibujarEdificio(136, 32);
			DibujarEdificio(161, 32);
			DibujarEdificio(186, 32);

			DibujarGrieta(190, 24);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 110 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 190, 24, Miguel->GetAlto(), Miguel->GetAncho(), 8, 5)) {
					subnivelcompleto14 = true;
					subnivel = 18;
					Miguel->SetPX(170);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto14 = true;
					subnivel = 13;
					Miguel->SetPX(200);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 46, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto14 = true;
					subnivel = 4;
					Miguel->SetPX(100);
					Miguel->SetPY(8);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto14);
			delete nivel2;
			break;
		}
		case 15: {
			NPC15 = false;
			subnivelcompleto15 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(6);
			nivel2->AtributosObstaculo(0, 1, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 1, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(4, 190, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(5, 25, 24, 0, 6, 5);

			tecla = 'j';

			DibujarSpiderWoman(25, 24);

			DibujarEdificio(1, 32);
			DibujarEdificio(26, 32);
			DibujarEdificio(51, 32);
			DibujarEdificio(136, 32);
			DibujarEdificio(161, 32);
			DibujarEdificio(186, 32);

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			DibujarGrieta(183, 24);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 100 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 23, 23, Miguel->GetAlto(), Miguel->GetAncho(), 7, 10)) {
					if (NPC15 == false) {
						for (int i = 0; i < 5 && booltexto; i++) { TextWoman(i); }
						BorrarPanelDeControlInterno();
						NPC15 = true;
						booltexto = true;
					}
				}

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 183, 24, Miguel->GetAlto(), Miguel->GetAncho(), 8, 5)) {
					subnivelcompleto15 = true;
					subnivel = 19;
					Miguel->SetPX(32);
					Miguel->SetPY(24);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 46, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto15 = true;
					subnivel = 5;
					Miguel->SetPX(100);
					Miguel->SetPY(8);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto15);
			delete nivel2;
			break;
		}
		case 16: {
			subnivelcompleto16 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(5);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 1, 24, 0, 20, 8);
			tecla = 'j';

			DibujarEdificio(1, 7);
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			DibujarEdificio(136, 7);
			DibujarEdificio(161, 7);
			DibujarEdificio(186, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			do {  //Parte 1

				ColorRojoOscuro(); Posicion(190, 23); cout << "XXXXXXXXX";
				ColorMagenta(); Posicion(190, 23); cout << "101010101";
				ColorAmarilloOscuro(); Posicion(190, 23); cout << "010101010";

				ColorRojoOscuro(); Posicion(188, 25); cout << "XXXXXXX";
				ColorMagenta(); Posicion(188, 25); cout << "1010101";
				ColorAmarilloOscuro(); Posicion(190, 23); cout << "0101010";

				ColorRojoOscuro(); Posicion(197, 28); cout << "XXXX";
				ColorMagenta(); Posicion(197, 28); cout << "1010";
				ColorAmarilloOscuro(); Posicion(197, 28); cout << "0101";

				ColorRojoOscuro(); Posicion(199, 26); cout << "XXXX";
				ColorMagenta(); Posicion(199, 26); cout << "1010";
				ColorAmarilloOscuro(); Posicion(199, 26); cout << "0101";

				ColorRojoOscuro(); Posicion(198, 29); cout << "XXXXXX";
				ColorMagenta(); Posicion(198, 29); cout << "101010";
				ColorAmarilloOscuro(); Posicion(198, 29); cout << "010101";

				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 205 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 7, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto16 = true;
					subnivel = 21;
					Miguel->SetPX(100);
					Miguel->SetPY(40);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto16 = true;
					subnivel = 17;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto16);
			delete nivel2;
			break;
		}
		case 17: {
			subnivelcompleto17 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(3);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 32, 0, 210, 16);
			tecla = 'j';
			DibujarEdificio(1, 7);
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			DibujarEdificio(136, 7);
			DibujarEdificio(161, 7);
			DibujarEdificio(186, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 155 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 7, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto17 = true;
					subnivel = 22;
					Miguel->SetPX(100);
					Miguel->SetPY(40);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto17 = true;
					subnivel = 16;
					Miguel->SetPX(200);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto17 = true;
					subnivel = 18;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto17);
			delete nivel2;
			break;
		}
		case 18: {
			subnivelcompleto18 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(3);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(1, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(2, 190, 24, 0, 10, 8);
			tecla = 'j';

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			DibujarGrieta(180, 24);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 110 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto18 = true;
					subnivel = 17;
					Miguel->SetPX(200);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 180, 24, Miguel->GetAlto(), Miguel->GetAncho(), 8, 5)) {
					subnivelcompleto18 = true;
					subnivel = 14;
					Miguel->SetPX(170);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto18);
			delete nivel2;
			break;
		}
		case 19: {
			subnivelcompleto19 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(5);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 1, 24, 0, 20, 8);
			tecla = 'j';

			DibujarEdificio(1, 7);
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			DibujarEdificio(136, 7);
			DibujarEdificio(161, 7);
			DibujarEdificio(186, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			DibujarGrieta(22, 24);

			do {  //Parte 1
				ColorRojoOscuro(); Posicion(190, 23); cout << "XXXXXXXXX";
				ColorMagenta(); Posicion(190, 23); cout << "101010101";
				ColorAmarilloOscuro(); Posicion(190, 23); cout << "010101010";

				ColorRojoOscuro(); Posicion(188, 25); cout << "XXXXXXX";
				ColorMagenta(); Posicion(188, 25); cout << "1010101";
				ColorAmarilloOscuro(); Posicion(190, 23); cout << "0101010";

				ColorRojoOscuro(); Posicion(197, 28); cout << "XXXX";
				ColorMagenta(); Posicion(197, 28); cout << "1010";
				ColorAmarilloOscuro(); Posicion(197, 28); cout << "0101";

				ColorRojoOscuro(); Posicion(199, 26); cout << "XXXX";
				ColorMagenta(); Posicion(199, 26); cout << "1010";
				ColorAmarilloOscuro(); Posicion(199, 26); cout << "0101";

				ColorRojoOscuro(); Posicion(198, 29); cout << "XXXXXX";
				ColorMagenta(); Posicion(198, 29); cout << "101010";
				ColorAmarilloOscuro(); Posicion(198, 29); cout << "010101";

				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 70 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);


				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 7, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto19 = true;
					subnivel = 24;
					Miguel->SetPX(100);
					Miguel->SetPY(40);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto19 = true;
					subnivel = 20;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 22, 24, Miguel->GetAlto(), Miguel->GetAncho(), 8, 5)) {
					subnivelcompleto19 = true;
					subnivel = 15;
					Miguel->SetPX(173);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
			} while (!subnivelcompleto19);
			delete nivel2;
			break;
		}
		case 20: {
			subnivelcompleto20 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(4);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 190, 24, 0, 10, 8);
			tecla = 'j';
			DibujarEdificio(1, 7);
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			DibujarEdificio(136, 7);
			DibujarEdificio(161, 7);
			DibujarEdificio(186, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			DibujarSpot(35, 25);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 50 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 33, 24, Miguel->GetAlto(), Miguel->GetAncho(), 7, 10)) {
					if (Escape == false) {
						for (int i = 0; i < 7 && booltexto; i++) { TextSpotScape(i); }
						BorrarPanelDeControlInterno();
						_sleep(300);
						DibujarGrieta(35, 25);
						_sleep(300);
						DibujarGrieta2(35, 25);
						_sleep(300);
						DibujarGrieta3(35, 25);
						_sleep(300);
						BorrarSpot(35, 25);
						BorrarGrieta(35, 25);
						booltexto = true;

					}
					Escape = true;
				}

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 7, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto20 = true;
					subnivel = 25;
					Miguel->SetPX(90);
					Miguel->SetPY(30);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto20 = true;
					subnivel = 19;
					Miguel->SetPX(200);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto20 = true;
					subnivel = 18;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
				if (contadortiempomiguel <= 0) {
					subnivelcompleto20 = true;
					subnivel = 99;
				}
			} while (!subnivelcompleto20);
			delete nivel2;
			break;
		}
		case 21: {
			subnivelcompleto21 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(5);
			nivel2->AtributosObstaculo(0, 1, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 1, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(4, 190, 24, 0, 20, 8);

			tecla = 'j';

			DibujarEdificio(1, 32);
			DibujarEdificio(26, 32);
			DibujarEdificio(51, 32);
			DibujarEdificio(136, 32);
			DibujarEdificio(161, 32);
			DibujarEdificio(186, 32);

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			DibujarGrieta(22, 24);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 200 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 46, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto21 = true;
					subnivel = 16;
					Miguel->SetPX(100);
					Miguel->SetPY(8);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 22, 24, Miguel->GetAlto(), Miguel->GetAncho(), 8, 5)) {
					subnivelcompleto21 = true;
					subnivel = 3;
					Miguel->SetPX(170);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
				if (contadortiempomiguel <= 0) {
					subnivelcompleto21 = true;
					subnivel = 99;
				}
			} while (!subnivelcompleto21);
			delete nivel2;
			break;
		}
		case 22: {
			NPC22 = false;
			subnivelcompleto22 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(6);
			nivel2->AtributosObstaculo(0, 1, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 1, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(4, 190, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(5, 25, 24, 0, 6, 5);

			tecla = 'j';

			DibujarPavitr(25, 24);

			DibujarEdificio(1, 32);
			DibujarEdificio(26, 32);
			DibujarEdificio(51, 32);
			DibujarEdificio(136, 32);
			DibujarEdificio(161, 32);
			DibujarEdificio(186, 32);

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			DibujarGrieta(183, 24);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 150 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 23, 23, Miguel->GetAlto(), Miguel->GetAncho(), 7, 10)) {
					if (NPC22 == false) {
						for (int i = 0; i < 5 && booltexto; i++) { TextPavitr(i); }
						BorrarPanelDeControlInterno();
						NPC22 = true;
						booltexto = true;
					}
				}

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 183, 24, Miguel->GetAlto(), Miguel->GetAncho(), 8, 5)) {
					subnivelcompleto22 = true;
					subnivel = 8;
					Miguel->SetPX(90);
					Miguel->SetPY(30);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 46, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto22 = true;
					subnivel = 17;
					Miguel->SetPX(100);
					Miguel->SetPY(8);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
				if (contadortiempomiguel <= 0) {
					subnivelcompleto22 = true;
					subnivel = 99;
				}
			} while (!subnivelcompleto22);
			delete nivel2;
			break;
		}
		case 23: {
			subnivelcompleto23 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(3);
			nivel2->AtributosObstaculo(0, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(1, 1, 32, 0, 210, 16);
			nivel2->AtributosObstaculo(2, 1, 24, 0, 20, 8);
			tecla = 'j';

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(7, 32);
			DibujarEdificio(32, 32);
			DibujarEdificio(57, 32);
			DibujarEdificio(82, 32);
			DibujarEdificio(107, 32);
			DibujarEdificio(132, 32);
			DibujarEdificio(157, 32);
			DibujarEdificio(182, 32);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 100 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 210, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto23 = true;
					subnivel = 24;
					Miguel->SetPX(10);
					Miguel->SetPY(25);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
				if (contadortiempomiguel <= 0) {
					subnivelcompleto23 = true;
					subnivel = 99;
				}
			} while (!subnivelcompleto23);
			delete nivel2;
			break;
		}
		case 24: {
			subnivelcompleto24 = false;
			Niveles* nivel2 = new Niveles();

			nivel2->GenerarObstaculo(5);
			nivel2->AtributosObstaculo(0, 7, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(1, 136, 7, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 190, 24, 0, 10, 8);
			nivel2->AtributosObstaculo(3, 1, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(4, 136, 32, 0, 75, 16);
			tecla = 'j';

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarEdificio(1, 32);
			DibujarEdificio(26, 32);
			DibujarEdificio(51, 32);
			DibujarEdificio(136, 32);
			DibujarEdificio(161, 32);
			DibujarEdificio(186, 32);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
				Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 50 metros";
				nivel2->GenerarMovimientoJugador(Miguel);

				tecla = teclageneralbasura;
				_sleep(1);

				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 2, 7, Miguel->GetAlto(), Miguel->GetAncho(), 35, 1)) {
					subnivelcompleto24 = true;
					subnivel = 23;
					Miguel->SetPX(190);
					Miguel->SetPY(25);
				}
				if (CalcularColisiones(Miguel->GetPX(), Miguel->GetPY(), 10, 46, Miguel->GetAlto(), Miguel->GetAncho(), 1, 180)) {
					subnivelcompleto24 = true;
					subnivel = 19;
					Miguel->SetPX(100);
					Miguel->SetPY(8);
				}
				contadortiempomiguel--;
				Posicion(40, 2); ColorAzul(); cout << "Tiempo Restante: " << contadortiempomiguel << " ";
				if (contadortiempomiguel <= 0) {
					subnivelcompleto24 = true;
					subnivel = 99;
				}
			} while (!subnivelcompleto24);
			delete nivel2;
			break;
		}
		case 25: {
			booltexto = true;
			tecla = teclageneralbasura;
			subnivelcompleto25 = false;
			Niveles* nivel2 = new Niveles();
			DibujarMiles(50, 25);

			DibujarMiguel(Miguel->GetPX(), Miguel->GetPY());

			nivel2->GenerarObstaculo(5);
			nivel2->AtributosObstaculo(0, 1, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(1, 136, 32, 0, 75, 16);
			nivel2->AtributosObstaculo(2, 1, 7, 0, 210, 16);
			nivel2->AtributosObstaculo(3, 1, 24, 0, 20, 8);
			nivel2->AtributosObstaculo(4, 190, 24, 0, 20, 8);

			tecla = 'j';

			DibujarEdificio(1, 32);
			DibujarEdificio(26, 32);
			DibujarEdificio(51, 32);
			DibujarEdificio(136, 32);
			DibujarEdificio(161, 32);
			DibujarEdificio(186, 32);

			DibujarEdificio(7, 7);
			DibujarEdificio(32, 7);
			DibujarEdificio(57, 7);
			DibujarEdificio(82, 7);
			DibujarEdificio(107, 7);
			DibujarEdificio(132, 7);
			DibujarEdificio(157, 7);
			DibujarEdificio(182, 7);

			DibujarCarro(190, 24);
			DibujarCarro(190, 28);

			DibujarCarro(1, 24);
			DibujarCarro(1, 28);
			DibujarPanelDeControl();
			Posicion(4, 2); ColorAzulOscuro(); cout << "Nombre: Miguel O'hara";
			Posicion(4, 4); ColorAzulOscuro(); cout << "Lejania a Miles: 0 metros";
			for (int i = 0; i < 7 && booltexto; i++) {
				TextMiguelFinal(i); 
				booltexto = true;
				BorrarPanelDeControlInterno();
			}
			booleanoGeneralParaNiveles4 = true;
			delete nivel2;
			break;
		}
		default: break;
		}
		AnimacionBorrar();
	} while (!booleanoGeneralParaNiveles4 && contadortiempomiguel>0);
	if (contadortiempomiguel <= 0) {
		DibujarDerrota();
	}
	else { DibujarVictoria(); }
	delete Miguel;
}



void Nivel3() {
	int uwu = 4;
	bool SpotMuerto = true;
	booleanoGeneralParaNiveles4 = true;
	SpiderPunk* punk = new SpiderPunk(30, 30, 8, 5, 100, 2, 1, 10, 100, 2, "Punk", 3, 1, 3);
	do {
		booleanoGeneralParaNiveles = true;
		booleanoGeneralParaNiveles3 = true;
		booleanoGeneralParaNiveles5 = true;
		booleanoGeneralParaNiveles6 = true;
		switch (uwu) {
		case 1: {
			DibujarSpiderPunkGrandeTitulo(10,10);
			for (int i = 0; i < 4 && booltexto; i++) { TextPunkIntro(i); }
			for (int i = 0; i < 11 && booltexto; i++) { TextPunk1(i); }  // dialogo punk 1
			AnimacionBorrar();

			punk->SetPX(30); punk->SetPY(30);
			Niveles* nivel3 = new Niveles();

			nivel3->GenerarObstaculo(3);
			nivel3->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel3->AtributosObstaculo(1, 137, 32, 0, 75, 16);
			nivel3->AtributosObstaculo(2, 30, 10, 0, 2, 10);
			nivel3->GenerarCofres(1);
			nivel3->AtributosCofres(0, 100, 10, 7, 3,1);
			tecla = 'j';
			DibujarEdificio(1, 7);//Dibuja obstaculo
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			DibujarEdificio(187, 32);
			DibujarEdificio(162, 32);
			DibujarEdificio(137, 32);
			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				DibujarTornillos(158, 2); Posicion(160, 3); ColorAzul(); cout << cantidaddeherramientas;
				nivel3->DibujarCofre();
				nivel3->GenerarMovimientoJugador(punk);
				if (booleanoGeneralParaNiveles3) {
					NivelesRitmo1(nivel3, nivel3->PisandoItem(punk));
				}
				if (!booleanoGeneralParaNiveles3) {
					Posicion(160, 20); ColorVerde(); cout << "Ve a buscar mas cofres ------>";
					if (CalcularColisiones(punk->GetPX(), punk->GetPY(), 208, 7, punk->GetAlto(), punk->GetAncho(), 30, 4)) {
						booleanoGeneralParaNiveles = false;
						uwu = 2;
					}
				}
				else { booleanoGeneralParaNiveles3 = true; }
				_sleep(1);
				tecla = teclageneralbasura;
			} while (booleanoGeneralParaNiveles);
			break;
		}
		case 2: {  ///////// PARTE 2 ///////////////////////

			punk->SetPX(25); punk->SetPY(25);
			Niveles* nivel3 = new Niveles();

			nivel3->GenerarObstaculo(4);
			nivel3->AtributosObstaculo(0, 1, 7, 0, 200, 16);
			nivel3->AtributosObstaculo(1, 137, 32, 0, 75, 16);
			nivel3->AtributosObstaculo(2, 1, 32, 0, 75, 16);
			nivel3->AtributosObstaculo(3, 30, 10, 0, 2, 10);
			nivel3->GenerarCofres(2);
			nivel3->AtributosCofres(0, 100, 28, 7, 3,2);
			nivel3->AtributosCofres(1, 120, 28, 7, 3, 2);
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
			tecla = 'j';
			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				DibujarTornillos(158, 2); Posicion(160, 3); ColorAzul(); cout << cantidaddeherramientas;
				nivel3->DibujarCofre();
				nivel3->GenerarMovimientoJugador(punk);
				if (booleanoGeneralParaNiveles3 || booleanoGeneralParaNiveles5) {
					NivelesRitmo1(nivel3, nivel3->PisandoItem(punk));
				}
				if (!booleanoGeneralParaNiveles3 && !booleanoGeneralParaNiveles5) {
					Posicion(160, 20); ColorVerde(); cout << "Ve a buscar mas cofres ------>";
					if (CalcularColisiones(punk->GetPX(), punk->GetPY(), 208, 7, punk->GetAlto(), punk->GetAncho(), 30, 4)) {
						booleanoGeneralParaNiveles = false;
						uwu = 3;
					}
				}
				_sleep(1);
				tecla = teclageneralbasura;
			} while (booleanoGeneralParaNiveles);
			break;
		} 
		case 3: {

			punk->SetPX(25); punk->SetPY(25);
			Niveles* nivel3 = new Niveles();

			nivel3->GenerarObstaculo(5);
			nivel3->AtributosObstaculo(0, 1, 7, 0, 75, 16);
			nivel3->AtributosObstaculo(1, 137, 7, 0, 75, 16);
			nivel3->AtributosObstaculo(2, 1, 32, 0, 200, 16);
			nivel3->AtributosObstaculo(3, 30, 10, 0, 2, 10);
			nivel3->AtributosObstaculo(4, 0, 47, 0, 213, 2);
			nivel3->GenerarCofres(3);
			nivel3->AtributosCofres(0, 100, 28, 7, 3,4);
			nivel3->AtributosCofres(1, 120, 28, 7, 3, 4);
			nivel3->AtributosCofres(2, 140, 28, 7, 3, 4);
			tecla = 'j';

			DibujarEdificio(1, 32);
			DibujarEdificio(26, 32);
			DibujarEdificio(51, 32);
			DibujarEdificio(76, 32);
			DibujarEdificio(101, 32);
			DibujarEdificio(126, 32);
			DibujarEdificio(151, 32);
			DibujarEdificio(176, 32);
			DibujarEdificio(187, 7);
			DibujarEdificio(162, 7);
			DibujarEdificio(137, 7);
			DibujarEdificio(1, 7);
			DibujarEdificio(26, 7);
			DibujarEdificio(51, 7);
			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				DibujarPanelDeControl();
				nivel3->DibujarCofre();
				DibujarTornillos(158, 2); Posicion(160, 3); ColorAzul(); cout << cantidaddeherramientas;
				nivel3->GenerarMovimientoJugador(punk);
				if (booleanoGeneralParaNiveles3 || booleanoGeneralParaNiveles5 || booleanoGeneralParaNiveles6) {
					NivelesRitmo1(nivel3, nivel3->PisandoItem(punk));
				}
				if (!booleanoGeneralParaNiveles3 && !booleanoGeneralParaNiveles5 && !booleanoGeneralParaNiveles6) {
					Posicion(160, 20); ColorVerde(); cout << "Ve a buscar mas cofres ------>";
					if (CalcularColisiones(punk->GetPX(), punk->GetPY(), 208, 7, punk->GetAlto(), punk->GetAncho(), 30, 4)) {
						booleanoGeneralParaNiveles = false;
						uwu = 4;
					}
				}
				_sleep(1);
				tecla = teclageneralbasura;
			} while (booleanoGeneralParaNiveles);
			break;
		}
		case 4: {
			for (int i = 0; i < 13; i++) { TextPunkSpot(i); }  // dialogo punk 1
			EscribirTextoAnimado("Presiona Q para atacar, el ataque apuntará hacia la dirección de tu movimiento!", 40, 20, 50);
			AnimacionBorrar();
			punk->SetPX(20); punk->SetPY(30);
			punk->SetVida(30);
			Proyectiles* proyectil; //Inicialización de proyectiles para la clase enemigos
			Spot* Jefe = new Spot(8, 30, 6, 5, 5, 10, 1, 1, 0, "Spot", true, 0);  // inicialización automática de los enemigos en la función nivel /// PD no se inicializa de igual manera dentro de una clase
			Niveles* nivel3 = new Niveles();

			nivel3->GenerarObstaculo(4);
			nivel3->AtributosObstaculo(0, 0, 10, 0, 213, 16);
			nivel3->AtributosObstaculo(1, 0, 47, 0, 213, 2);
			nivel3->AtributosObstaculo(2, 2, 26, 0, 5, 25);
			nivel3->AtributosObstaculo(3, 200, 26, 0, 5, 25);
			nivel3->GenerarLasers(2);
			
			nivel3->GenerarNotadeMusica(40);
			nivel3->AtributosNotas();

			punk->Generarhabilidades();
			DibujarPanelDeControl();
			DibujarEdificio(1, 10);
			DibujarEdificio(26, 10);
			DibujarCarro(52, 21);
			DibujarCarro(77, 21);
			DibujarCarro(102, 21);
			DibujarCarro(128, 21);
			DibujarEdificio(151, 10);
			DibujarEdificio(176, 10);

			DibujarGrieta(2, 28);
			DibujarGrieta(2, 38);
			DibujarGrieta(200, 28);
			DibujarGrieta(200, 38);

			int contador = 0;

			tecla = teclageneralbasura;
			Jefe->SetEX(8); Jefe->SetEX(30);
			do {  //Parte 1
				if (_kbhit()) { tecla = getch(); }
				int random = rand() % 3;
				DibujarPanelDeControl();
				DibujarGrieta(2, 28);
				DibujarGrieta(2, 38);
				DibujarGrieta(200, 28);
				DibujarGrieta(200, 38);
				DibujarCarro(52, 21);
				DibujarCarro(77, 21);
				DibujarCarro(102, 21);
				DibujarCarro(128, 21);
				nivel3->GenerarMovimientoJugador(punk);
				nivel3->NotasMovimiento();
				nivel3->LasersMover(punk);
				if (contador % 150 == 0) {
					Jefe->Borrar();
					switch (random) {
					case 0:Jefe->SetEX(8); Jefe->SetEY(30); break;
					case 1:Jefe->SetEX(8); Jefe->SetEY(40); break;
					case 2:Jefe->SetEX(190); Jefe->SetEY(30); break;
					case 3:Jefe->SetEX(190); Jefe->SetEY(40); break;
					default: break;
					}
					//Jefe->MoverSpot(8, 30, 190, 40);
				}
				Jefe->Dibujar();
				Posicion(100, 2); cout << "Vida: " << Jefe->GetVida() << " ";//Muestra vida de enemigo
				Posicion(20, 1); cout << "Vida: " << punk->GetVida() << " ";
				if (tecla == 'q' || tecla == 'Q') {
					//if (punk->GetHabilidadLista()) { nivel3->RevivirNotaDeMusica(0, punk); }
					nivel3->RevivirNotaDeMusica(0, punk);
					//Posicion(53, 5); cout << "Habilidad Q activada";
					//nivel3->AtacarEnemigos(Jefe, punk);
					//punk->ControladorTiempoHabilidades(0);  //Controlador de tiempo de habilidades
					nivel3->AtacarEnemigoNotas(Jefe);
					nivel3->AtacarProtaNotas(punk);
				}
				punk->DibujarHabilidades();
				if (Jefe->GetVida() < 1) {
					SpotMuerto = true;
					booleanoGeneralParaNiveles = false; booleanoGeneralParaNiveles4=false;
				}
				if (punk->GetVida() < 1) { SpotMuerto = false; }
				_sleep(1);
				tecla = 'j';
				contador++;
			} while (booleanoGeneralParaNiveles);
			break; }
		default: break;
		}
		AnimacionBorrar();
		EscribirTextoAnimado("", 40, 20, 50);
	} while (booleanoGeneralParaNiveles4);
	delete punk;
	if (SpotMuerto) {
		for (int i = 0; i < 9; i++) {
			FinalNivel3(i);
		}
		DibujarVictoria();NivelPregunta();
	}
	else DibujarDerrota();
}
