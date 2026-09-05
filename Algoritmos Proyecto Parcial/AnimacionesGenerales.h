#pragma once
#include "Librerias.h"

void AnimacionBorrar() {
    for (int i = 120; i > 0; i = i - 6) {
        for (int j = 0; j < 29; j++) { Posicion(i - 6, j); cout << "|      "; }
        _sleep(1);}
    Console::Clear();
}