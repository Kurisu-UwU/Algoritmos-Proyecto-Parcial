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
    DibujarOpcionMiles(10,10,true);
    DibujarOpcionMiguel(85, 10, true);
    DibujarOpcionPunk(160,10,true);
}