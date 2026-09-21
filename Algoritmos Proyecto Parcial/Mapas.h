#pragma once
#include "NivelesClase.h"

void MoverNivel1(Protagonista* Miles, bool arriba, bool abajo, bool izquierda, bool derecha) {
    bool Nivelcompleto = false;
    //hola


    while (Nivelcompleto == false) {
        Miles->Borrar();
        Miles->Mover(arriba, abajo, izquierda, derecha);

        Miles->Dibujar();
        if (Nivel2_2[Miles->GetPY()][Miles->GetPX()]==2) {
            Nivelcompleto = true;
		}
        if (Nivel2_2[Miles->GetPY()][Miles->GetPX() + 1] == 1) {
            derecha = false;
        }
        else {
            derecha = true;
        }
        if (Nivel2_2[Miles->GetPY()][Miles->GetPX() - 1] == 1) {
            izquierda = false;
        }
        else {
            izquierda = true;
        }
        if (Nivel2_2[Miles->GetPY() - 1][Miles->GetPX()] == 1) {
            arriba = false;
        }
        else {
            arriba = true;
        }
        if (Nivel2_2[Miles->GetPY() + 1][Miles->GetPX()] == 1) {
            abajo = false;
        }
        else {
            abajo = true;
        }
        _sleep(1);
    }
}