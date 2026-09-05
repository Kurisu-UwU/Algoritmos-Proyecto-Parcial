#pragma once
#include "AnimacionesGenerales.h"

void DibujarMenu() {
    int equiz = 170;
    int equiz2 = 0;
    ColorBlanco();
    if (opMenu == 1) { ColorAmarillo(); equiz2 = 10;
    }
    Posicion(equiz - equiz2, 6); cout << "                     __        __           ";
    Posicion(equiz - equiz2, 7); cout << "             | |  | / _`  /\\  |__)          ";
    Posicion(equiz - equiz2, 8); cout << "          \\__/ \\__/ \\__> /~~\\ |  \\          ";
    ColorBlanco();
    equiz2 = 0;
    if (opMenu == 2) { ColorAmarillo(); equiz2 = 10; 
    }
    Posicion(equiz - equiz2, 14); cout << "           __   __   __     __        ___  __          "; 
    Posicion(equiz - equiz2, 15); cout << "          /  \\ |__) /  ` | /  \\ |\\ | |__  /__`          ";
    Posicion(equiz - equiz2, 16); cout << "          \\__/ |    \\__, | \\__/ | \\| |___ .__/          ";
    ColorBlanco();
    equiz2 = 0;
    if (opMenu == 3) { ColorAmarillo(); equiz2 = 10;
    }
    Posicion(equiz - equiz2, 22); cout << "           __   ___  __   __   __                  ___  __           ";
    Posicion(equiz - equiz2, 23); cout << "          |__) |__  |__) /__` /  \\ |\\ |  /\\     | |__  /__`          ";
    Posicion(equiz - equiz2, 24); cout << "          |    |___ |  \\ .__/ \\__/ | \\| /~~\\ \\__/ |___ .__/          ";
    ColorBlanco();
    equiz2 = 0;
    if (opMenu == 4) { ColorAmarillo(); equiz2 = 10;
    }
    Posicion(equiz - equiz2, 30); cout << "           __   __   ___  __    ___  __   __          ";
    Posicion(equiz - equiz2, 31); cout << "          /  ` |__) |__  |  \\ |  |  /  \\ /__`          ";
    Posicion(equiz - equiz2, 32); cout << "          \\__, |  \\ |___ |__/ |  |  \\__/ .__/          ";
    ColorBlanco();
    equiz2 = 0;
    if (opMenu == 5) {
        ColorAmarillo(); equiz2 = 10;
    }
    Posicion(equiz - equiz2, 38); cout << "           __               __          ";
    Posicion(equiz - equiz2, 39); cout << "          /__`  /\\  |    | |__)          ";
    Posicion(equiz - equiz2, 40); cout << "          .__/ /~~\\ |___ | |  \\          ";
    ColorBlanco();
    // __   __   __     __        ___  __  
    ///  \ |__) /  ` | /  \ |\ | |__  /__` 
    //\__/ |    \__, | \__/ | \| |___ .__/    
//           __        __  
//   | |  | / _`  /\  |__) 
//\__/ \__/ \__> /~~\ |  \ 
// __   ___  __   __   __                  ___  __  
//|__) |__  |__) /__` /  \ |\ |  /\     | |__  /__` 
//|    |___ |  \ .__/ \__/ | \| /~~\ \__/ |___ .__/ 
// __   __   ___  __    ___  __   __  
///  ` |__) |__  |  \ |  |  /  \ /__` 
//\__, |  \ |___ |__/ |  |  \__/ .__/  
// __               __  
///__`  /\  |    | |__) 
//.__/ /~~\ |___ | |  \                       
}
void Dibujartitulo() {
    string mensaje = "holaaaaa";
    ColorMorado();
    Posicion(10, 8);  cout << " _____       _     _";
    Posicion(10, 9);  cout << "/  ___|     (_)   | |";
    Posicion(10, 10); cout << "\\ `--. _ __  _  __| | ___ _ __ _ __ ___   __ _ _ __";
    Posicion(10, 11); cout << " `--. \\ '_ \\| |/ _` |/ _ \\ '__| '_ ` _ \\ / _` | '_ \\";
    Posicion(10, 12); cout << "/\\__/ / |_) | | (_| |  __/ |  | | | | | | (_| | | | |";
    Posicion(10, 13); cout << "\\____/| .__/|_|\\__,_|\\___|_|  |_| |_| |_|\\__,_|_| |_|";
    Posicion(10, 14); cout << "      | |";
    Posicion(10, 15); cout << "      |_| ";
// _____       _     _                                 
///  ___|     (_)   | |                                
//\ `--. _ __  _  __| | ___ _ __ _ __ ___   __ _ _ __  
// `--. \ '_ \| |/ _` |/ _ \ '__| '_ ` _ \ / _` | '_ \ 
///\__/ / |_) | | (_| |  __/ |  | | | | | | (_| | | | |
//\____/| .__/|_|\__,_|\___|_|  |_| |_| |_|\__,_|_| |_|
//      | |                                            
//      |_|    
}
void DibujarWASD(int x, int y) {
    ColorAzul();
    Posicion(x, y);  cout << "      ____ ";
    Posicion(x, y+1);  cout << "     ||w ||";
    Posicion(x, y+2); cout << "     ||__||";
    Posicion(x, y+3); cout << "     |/__\\|";
    Posicion(x, y+4); cout << " ____ ____ ____";
    Posicion(x, y+5); cout << "||a |||s |||d ||";
    Posicion(x, y+6); cout << "||__|||__|||__||";
    Posicion(x, y+7); cout << "|/__\\|/__\\|/__\\|";
}
// ____           
//||w ||          
//||__||          
//|/__\|          
// ____ ____ ____ 
//||a |||s |||d ||
//||__|||__|||__||
//|/__\|/__\|/__\|