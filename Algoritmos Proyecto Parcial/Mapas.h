#pragma once
#include "clases.h"

void MoverNivel1(Protagonista* Miles, bool arriba, bool abajo, bool izquierda, bool derecha) {
    bool Nivelcompleto = false;
    //hola


    while (Nivelcompleto == false) {
        Miles->Borrar();
        Miles->Mover(arriba, abajo, izquierda, derecha);
    /*  for (int i = 1; i < 29; i++) {
            for (int j = 1; j < 99; j++) {
                if (((j == Miles->GetPX()) && (i == Miles->GetPY())) && (Nivel2_2[i][j] == 2)) {
                    Nivelcompleto = true;
                }
            }
        }
        */
        Miles->Dibujar();
        if (Nivel2_2[Miles->GetPX()+4][Miles->GetPY()]==2) {
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