#pragma once
#include "Librerias.h"

void AnimacionBorrar() {
    for (int i = 213; i > 6; i = i - 6) {
        for (int j = 0; j < 47; j++) { Posicion(i - 6, j); cout << "|      "; }
        _sleep(1);}
    Console::Clear();
}