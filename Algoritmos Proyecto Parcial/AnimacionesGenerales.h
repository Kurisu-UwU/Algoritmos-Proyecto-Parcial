#pragma once
#include "Librerias.h"

void AnimacionBorrar() {
    ColorRojo();
    for (int i = 213; i > 7; i = i - 7) {
        for (int j = 0; j < 47; j++) { Posicion(i - 6, j); cout << "|       "; }
        _sleep(1);}
    Console::Clear();
}