#pragma once
#include "Niveles.h"

void ConsolayOjetos() {
    Console::SetWindowSize(213, 48);
    Console::SetBufferSize(213, 48);
    Console::LargestWindowWidth;
    Console::LargestWindowHeight;
    Console::CursorVisible = false;
}
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
            DibujarOpcionMiles(10, 10);
            DibujarOpcionMiguel(85, 10);
            DibujarOpcionPunk(160, 10);
            if (kbhit()) {
                tecla = getch();
                if (tecla == 'a' || tecla == 'A') {
                    opMenu--;
                    if (opMenu < 1) opMenu = 3;
                }
                if (tecla == 'd' || tecla == 'D') {
                    opMenu++;
                    if (opMenu > 3) opMenu = 1;
                }
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