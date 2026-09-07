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
    DibujarOpcionMiles(10, 10, true);
    DibujarOpcionMiguel(85, 10, true);
    DibujarOpcionPunk(160, 10, true);
    opMenu = 1;
    bool opciniciarnivel = true;
    bool opciniciarnivel2 = true;
    do {
        do {
            if (kbhit()) {
                char tecla = getch();
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
            break;
        case 2:
            Nivel2();
			break;
        case 3: 
            Nivel3();
			break;
        }
    } while (opciniciarnivel2);
}