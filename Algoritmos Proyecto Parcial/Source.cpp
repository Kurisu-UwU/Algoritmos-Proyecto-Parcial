#include "ASCIIArts.h"

/*void SetConsoleSize(int width, int height)
{
    try
    {
        int maxW = Console::LargestWindowWidth;
        int maxH = Console::LargestWindowHeight;
        if (width > maxW) width = maxW;
        if (height > maxH) height = maxH;

        // Asegurar que el buffer sea al menos del tamaño de la ventana
        Console::SetBufferSize(width, height);
        Console::SetWindowSize(width, height);
    }
    catch (Exception^)
    {
        // Fallback nativo si falla (uso de WinAPI)
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        COORD bufferSize = { (SHORT)width, (SHORT)height };
        SetConsoleScreenBufferSize(hOut, bufferSize);

        SMALL_RECT windowSize = { 0, 0, (SHORT)(width - 1), (SHORT)(height - 1) };
        SetConsoleWindowInfo(hOut, TRUE, &windowSize);
    }
}*/

int main() {
    //SetConsoleSize(200, 100);
    //HANDLE wHnd = GetStdHandle(STD_OUTPUT_HANDLE);
    //SMALL_RECT windowSize = { 0, 0, 200, 200 };
    //COORD bufferSize = { 200, 200 };
   // SetConsoleScreenBufferSize(wHnd, bufferSize);
    //SetConsoleWindowInfo(wHnd, TRUE, &windowSize);

    Console::SetWindowSize(239,61);
    Console::SetBufferSize(239, 61);
    Console::CursorVisible = false;
    do //para mantener el menu en pantalla
    {
        enCarga = true;
        DibujarMenu();
        ColorMorado();
        DibujarWASD(190,50);
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
            if (tecla == 'z' || tecla == 'Z' || tecla == 13)
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