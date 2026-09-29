#pragma once
#include "Niveles.h"

void IniciarSeleccionPersonajes() {
    DibujarOpcionMiles(10, 10);
    DibujarOpcionMiguel(85, 10);
    DibujarOpcionPunk(160, 10);
    opMenu = 1;
    bool opciniciarnivel = true;
    bool opciniciarnivel2 = true;
    do {
		char tecla = ' ';
        do {
            DibujarPersonajesLetras(67, 1);
            DibujarOpcionMiles(10, 10);
            DibujarOpcionMiguel(85, 10);
            DibujarOpcionPunk(160, 10);
            DibujarX(10, 40); Posicion(18, 42); cout << "Presione X para Volver";
            DibujarZ(195, 40); Posicion(166, 42); cout << "Presione Z para seleccionar";
            if (kbhit()) {
                tecla = getch();
                if (tecla == 'a' || tecla == 'A') { opMenu--; if (opMenu < 1) opMenu = 3; }
                if (tecla == 'd' || tecla == 'D') { opMenu++; if (opMenu > 3) opMenu = 1; }
                if (tecla == 'z' || tecla == 'Z') {
                    AnimacionBorrar();
                    opFinal = opMenu;  // saber que opción eligió
                    opciniciarnivel = false;
                }
            }
            _sleep(10);
        } while (opciniciarnivel);
        switch (opFinal) {
        case 1:
            Nivel1();
            opciniciarnivel2 = false;
            break;
        case 2:
            Nivel2();
            opciniciarnivel2 = false;
            break;
        case 3:
            Nivel3();
            opciniciarnivel2 = false;
			break;
        }
    } while (opciniciarnivel2);
    AnimacionBorrar();
}