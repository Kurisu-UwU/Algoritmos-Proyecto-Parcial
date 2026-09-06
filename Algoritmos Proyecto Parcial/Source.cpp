#include "ASCIIArts.h"

int main() {
    srand(time(0));

    Console::SetWindowSize(213,48);
    Console::SetBufferSize(213, 48);
    Console::LargestWindowWidth;
    Console::LargestWindowHeight;
    Console::CursorVisible = false;
    do //para mantener el menu en pantalla
    {
        enCarga = true;
        DibujarMenu();
        ColorMorado();
        DibujarWASD(180,39);
        Dibujartitulo();
        if (kbhit())
        {
            char tecla = getch();
            if (tecla == 'w' || tecla == 'W')
            {
                opMenu--;
                if (opMenu < 1) opMenu = 5;
            }
            if (tecla == 's' || tecla == 'S')
            {
                opMenu++;
                if (opMenu > 5) opMenu = 1;
            }
            if (tecla == 'z' || tecla == 'Z')
            {
                AnimacionBorrar();
                opFinal = opMenu;  // saber que opción eligió
                enCarga = false;
            }
        }
    } while (enCarga);
	_getch();
	return 0;
}