#include "FuncionesDelMain.h"

int main() {
    srand(time(0));
    ConsolayOjetos();
    LasersMenu* laser1;
    laser1 = new LasersMenu();
    LasersMenu* laser2;
    laser2 = new LasersMenu();
    LasersMenu* laser3;
    laser3 = new LasersMenu();
    do //para mantener el menu en pantalla
    {
        int random;
        random = rand() % 4;
        enCarga = true;
        DibujarMenu();
        ColorMorado();
        DibujarWASD(180,39);
        Dibujartitulo();
		laser1->Borrar();
		laser2->Borrar();
		laser3->Borrar();
		laser1->Mover();
		laser3->Mover();
		laser2->Mover();
        laser1->Dibujar();
		laser2->Dibujar();
		laser3->Dibujar();
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
        _sleep(10);
    } while (enCarga);
    switch (opFinal) {
	case 1:
        IniciarSeleccionPersonajes();
        break;
	}
    delete laser1;
    delete laser2;
    delete laser3;
	_getch();
	return 0;
}