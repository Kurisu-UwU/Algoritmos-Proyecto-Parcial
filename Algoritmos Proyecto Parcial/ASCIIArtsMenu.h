#pragma once
#include "Librerias.h"

void DibujarMenu() {
    int equiz = 150;
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
    Posicion(equiz - equiz2, 13); cout << "           __   __   __     __        ___  __          "; 
    Posicion(equiz - equiz2, 14); cout << "          /  \\ |__) /  ` | /  \\ |\\ | |__  /__`          ";
    Posicion(equiz - equiz2, 15); cout << "          \\__/ |    \\__, | \\__/ | \\| |___ .__/          ";
    ColorBlanco();
    equiz2 = 0;
    if (opMenu == 3) { ColorAmarillo(); equiz2 = 10;
    }
    Posicion(equiz - equiz2, 20); cout << "           __   ___  __   __   __                  ___  __           ";
    Posicion(equiz - equiz2, 21); cout << "          |__) |__  |__) /__` /  \\ |\\ |  /\\     | |__  /__`          ";
    Posicion(equiz - equiz2, 22); cout << "          |    |___ |  \\ .__/ \\__/ | \\| /~~\\ \\__/ |___ .__/          ";
    ColorBlanco();
    equiz2 = 0;
    if (opMenu == 4) { ColorAmarillo(); equiz2 = 10;
    }
    Posicion(equiz - equiz2, 27); cout << "           __   __   ___  __    ___  __   __          ";
    Posicion(equiz - equiz2, 28); cout << "          /  ` |__) |__  |  \\ |  |  /  \\ /__`          ";
    Posicion(equiz - equiz2, 29); cout << "          \\__, |  \\ |___ |__/ |  |  \\__/ .__/          ";
    ColorBlanco();
    equiz2 = 0;
    if (opMenu == 5) {
        ColorAmarillo(); equiz2 = 10;
    }
    Posicion(equiz - equiz2, 34); cout << "           __               __          ";
    Posicion(equiz - equiz2, 35); cout << "          /__`  /\\  |    | |__)          ";
    Posicion(equiz - equiz2, 36); cout << "          .__/ /~~\\ |___ | |  \\          ";
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
void DibujarOpcionMiles(int x, int y) {
    if (opMenu == 1) ColorAmarillo(); else ColorVerde();
    Posicion(x, y); y++; cout << "=========================================";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                    MILES MORALES      |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "=========================================";
}
void DibujarOpcionMiguel(int x, int y) {
    if (opMenu == 2) ColorAmarillo(); else ColorVerde();
    Posicion(x, y); y++; cout << "=========================================";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                    MILES MORALES      |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "=========================================";
}
void DibujarOpcionPunk(int x, int y) {
    if (opMenu == 3) ColorAmarillo(); else ColorVerde();
    Posicion(x, y); y++; cout << "=========================================";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|   _   _                 _             |";
    Posicion(x, y); y++; cout << "|  (_  |_) o  _| _  __   |_)   __  |    |";
    Posicion(x, y); y++; cout << "|   _) |   | (_|(/_ |    |  |_|| | |<   |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "|                                       |";
    Posicion(x, y); y++; cout << "=========================================";
    // _   _                 _          
    //(_  |_) o  _| _  __   |_)   __  | 
    // _) |   | (_|(/_ |    |  |_|| | |<             
}

void DibujarSpiderman( int x, int y) {
    Posicion(x, y); cout << "                   ,,,, ";
    Posicion(x, y + 1); cout << "             ,;) .';;;;',";
    Posicion(x, y + 2); cout << " ;;,,_,-.-.,;;'_,|I\\;;;/),,_";
    Posicion(x, y + 3); cout << "  `';;/:|:);{ ;;;|| \\;/ /;;;\\__";
    Posicion(x, y + 4); cout << "      L;/-';/ \\;;\\',/;\\/;;;.') \\";
    Posicion(x, y + 5); cout << "      .:`''` - \\;;'.__/;;;/  . _'-._";
    Posicion(x, y + 6); cout << "    .'/   \\     \\;;;;;;/.'_7:.  '). \\_";
    Posicion(x, y + 7); cout << "  .''/     | '._ );}{;//.'    '-:  '.,L";
    Posicion(x, y + 8); cout << ".'. /       \\  ( |;;;/_/         \\._./;\\   _,";
    Posicion(x, y + 9); cout << " . /        |\\ ( /;;/_/             ';;;\\,;;_,";
    Posicion(x, y + 10); cout << ". /         )__(/;;/_/                (;;'''''";
    Posicion(x, y + 11); cout << " /        _;:':;;;;:';-._             );";
    Posicion(x, y + 12); cout << "/        /   \\  `'`   --.'-._         \\/";
    Posicion(x, y + 13); cout << "       .'     '.  ,'         '-,";
    Posicion(x, y + 14); cout << "      /    /   r--,..__       '.\\";
    Posicion(x, y + 15); cout << "    .'    '  .'        '--._     ]";
    Posicion(x, y + 16); cout << "    (     :.(;>        _ .' '- ;/";
    Posicion(x, y + 17); cout << "    |      /:;(    ,_.';(   __.'";
    Posicion(x, y + 18); cout << "     '- -'' | ; : / (;;;; -'--'";
    Posicion(x, y + 19); cout << "           |;/      ;;(";
    Posicion(x, y + 20); cout << "           ''      /;;|";
    Posicion(x, y + 21); cout << "                   \\;;|";
    Posicion(x, y + 22); cout << "                    \\/";
}