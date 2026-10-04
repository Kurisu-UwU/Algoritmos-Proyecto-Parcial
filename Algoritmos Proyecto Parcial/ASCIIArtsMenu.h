#pragma once
#include "Librerias.h"
#include "ASCIIArtsNiveles.h"

void DibujarMenu() {
    int equiz = 150;
    int equiz2 = 0;
    ColorBlanco();
    if (opMenu == 1) { ColorAmarillo(); equiz2 = 10; }
    Posicion(equiz - equiz2, 6); cout << "                     __        __           ";
    Posicion(equiz - equiz2, 7); cout << "             | |  | / _`  /\\  |__)          ";
    Posicion(equiz - equiz2, 8); cout << "          \\__/ \\__/ \\__> /~~\\ |  \\          ";
    ColorBlanco();
    equiz2 = 0;
    if (opMenu == 2) { ColorAmarillo(); equiz2 = 10; }
    Posicion(equiz - equiz2, 13); cout << "           __   __   ___  __    ___  __   __          ";
    Posicion(equiz - equiz2, 14); cout << "          /  ` |__) |__  |  \\ |  |  /  \\ /__`          ";
    Posicion(equiz - equiz2, 15); cout << "          \\__, |  \\ |___ |__/ |  |  \\__/ .__/          ";
    ColorBlanco();
    equiz2 = 0;
    if (opMenu == 3) { ColorAmarillo(); equiz2 = 10; }
    Posicion(equiz - equiz2, 20); cout << "           __               __          ";
    Posicion(equiz - equiz2, 21); cout << "          /__`  /\\  |    | |__)          ";
    Posicion(equiz - equiz2, 22); cout << "          .__/ /~~\\ |___ | |  \\          ";
    ColorBlanco();
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
}
void DibujarSpiderman( int x, int y) {
    Posicion(x, y);      cout << "                   ,,,, ";
    Posicion(x, y + 1);  cout << "             ,;) .';;;;',";
    Posicion(x, y + 2);  cout << " ;;,,_,-.-.,;;'_,|I\\;;;/),,_";
    Posicion(x, y + 3);  cout << "  `';;/:|:);{ ;;;|| \\;/ /;;;\\__";
    Posicion(x, y + 4);  cout << "      L;/-';/ \\;;\\',/;\\/;;;.') \\";
    Posicion(x, y + 5);  cout << "      .:`''` - \\;;'.__/;;;/  . _'-._";
    Posicion(x, y + 6);  cout << "    .'/   \\     \\;;;;;;/.'_7:.  '). \\_";
    Posicion(x, y + 7);  cout << "  .''/     | '._ );}{;//.'    '-:  '.,L";
    Posicion(x, y + 8);  cout << ".'. /       \\  ( |;;;/_/         \\._./;\\   _,";
    Posicion(x, y + 9);  cout << " . /        |\\ ( /;;/_/             ';;;\\,;;_,";
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
void Victoria(int x, int y) {
    Posicion(x, y); 	cout << " _   _ _      _             _";
    Posicion(x, y + 1);	cout << "| | | (_)    | |           (_)";
    Posicion(x, y + 2); cout << "| | | |_  ___| |_ ___  _ __ _  __ _";
    Posicion(x, y + 3); cout << "| | | | |/ __| __/ _ \\| '__| |/ _` |";
    Posicion(x, y + 4); cout << "\\ \\_/ / | (__| || (_) | |  | | (_| |";
    Posicion(x, y + 5); cout << " \\___/|_|\\___|\\__\\___/|_|  |_|\\__,_|";
}
void DibujarVictoria() {
    bool elwhile1 = true;
    bool uwu = true;
    Victoria(100, 18);
    do {
        if (_kbhit()) {
            tecla = _getch();
            if (tecla == 'Z' || tecla == 'z') elwhile1 = false;
            if (tecla == 'X' || tecla == 'x') uwu = false;
        }
    } while (uwu && elwhile1);
}
void Derrota(int x, int y) {
    Posicion(x, y); 	cout << "______                    _";
    Posicion(x, y + 1);	cout << "|  _  \\                  | |";
    Posicion(x, y + 2); cout << "| | | |___ _ __ _ __ ___ | |_ __ _";
    Posicion(x, y + 3); cout << "| | | / _ \\ '__| '__/ _ \\| __/ _` |";
    Posicion(x, y + 4); cout << "| |/ /  __/ |  | | | (_) | || (_| |";
    Posicion(x, y + 5); cout << "|___/ \\___|_|  |_|  \\___/ \\__\\__,_|";
}
void Voctoria2(int x, int y){
Posicion(x, y); 	cout << "     __      ___      _             _       ";
Posicion(x, y + 1);	cout << "     \\ \\    / (_)    | |           (_)      ";
Posicion(x, y + 2); cout << "      \\ \\  / / _  ___| |_ ___  _ __ _  __ _ ";
Posicion(x, y + 3); cout << "       \\ \\/ / | |/ __| __/ _ \\| '__| |/ _` |";
Posicion(x, y + 4); cout << "        \\  /  | | (__| || (_) | |  | | (_| |";
Posicion(x, y + 5); cout << "         \\/   |_|\\___|\\__\\___/|_|  |_|\\__,_|";
}
void DibujarDerrota() {
    bool elwhile1 = true;
    bool uwu = true;
    Derrota(100, 18);
    do {
        if (_kbhit()) {
            tecla = _getch();
            if (tecla == 'Z' || tecla == 'z') elwhile1 = false;
            if (tecla == 'X' || tecla == 'x') uwu = false;
        }
    } while (uwu && elwhile1);
}
void DibujarVictoria2() {
    bool elwhile1 = true;
    bool uwu = true;
    Victoria(100, 18);
    do {
        if (_kbhit()) {
            tecla = _getch();
            if (tecla == 'Z' || tecla == 'z') elwhile1 = false;
            if (tecla == 'X' || tecla == 'x') uwu = false;
        }
    } while (uwu && elwhile1);
}
void DibujarPersonajesLetras(int x, int y) {
    ColorAzul();
    Posicion(x, y);     cout << " _____                                                       _";
    Posicion(x, y + 1); cout << "|  __ \\                                                     (_)";
    Posicion(x, y + 2); cout << "| |__) |   ___    _ __    ___     ___     _ __      __ _     _     ___    ___";
    Posicion(x, y + 3); cout << "|  ___/   / _ \\  | '__|  / __|   / _ \\   | '_ \\    / _` |   | |   / _ \\  / __|";
    Posicion(x, y + 4); cout << "| |      |  __/  | |     \\__ \\  | (_) |  | | | |  | (_| |   | |  |  __/  \\__ \\";
    Posicion(x, y + 5); cout << "|_|       \\___|  |_|     |___/   \\___/   |_| |_|   \\__,_|   | |   \\___|  |___/";
    Posicion(x, y + 6); cout << "                                                           _/ |";
    Posicion(x, y + 7); cout << "                                                          |__/";
}
void DibujarDerrotaTambores() {
    Console::Clear();
    do {
        if (tempanimaciontitulo == 20) {
            ColorAzul(); tempanimaciontitulo = 0;
        }
        if (tempanimaciontitulo == 10) {
            ColorVerde();
        }
        Posicion(10, 10);     cout << " ______    _ _              _                  _   _ _       ";
        Posicion(10, 11);     cout << "|  ____|  | | |            | |                | | (_) |      ";
        Posicion(10, 12);     cout << "| |__ __ _| | |_ __ _    __| | ___    ___  ___| |_ _| | ___  ";
        Posicion(10, 13);     cout << "|  __/ _` | | __/ _` |  / _` |/ _ \\  / _ \\/ __| __| | |/ _ \\ ";
        Posicion(10, 14);     cout << "| | | (_| | | || (_| | | (_| |  __/ |  __/\\__ \\ |_| | | (_) |";
        Posicion(10, 15);     cout << "|_|  \\__,_|_|\\__\\__,_|  \\__,_|\\___|  \\___||___/\\__|_|_|\\___/ ";

        Posicion(10, 17);     cout << " _____       _    __       _        _             _                                     ";
        Posicion(10, 18);     cout << "|_   _|     | |  /_/      | |      | |           | |                                    ";
        Posicion(10, 19);     cout << "  | |  _ __ | |_ ___ _ __ | |_ __ _| | ___     __| | ___    _ __  _   _  _____   _____  ";
        Posicion(10, 20);     cout << "  | | | '_ \\| __/ _ \\ '_ \\| __/ _` | |/ _ \\   / _` |/ _ \\  | '_ \\| | | |/ _ \\ \\ / / _ \\ ";
        Posicion(10, 21);     cout << " _| |_| | | | ||  __/ | | | || (_| | | (_) | | (_| |  __/  | | | | |_| |  __/\\ V / (_) |";
        Posicion(10, 22);     cout << "|_____|_| |_|\\__\\___|_| |_|\\__\\__,_|_|\\___/   \\__,_|\\___|  |_| |_|\\__,_|\\___| \\_/ \\___/ ";
        tempanimaciontitulo++;
        _sleep(10);
    } while (!_kbhit());
}

void DibujarAraña(int x, int y) {
    Posicion(x, y); ColorRojoOscuro(); cout << "           ;               ,           "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "         ,;                 '.         "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "        ;:                   :;        "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "       ::                     ::       "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "       ::                     ::       "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "       ':                     :        "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "        :.                    :        "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "     ;' ::                   ::  '     "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "    .'  ';                   ;'  '.    "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "   ::    :;                 ;:    ::   "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "   ;      :;.             ,;:     ::   "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "   :;      :;:           ,;\"      ::   "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "   ::.      ':;  ..,.;  ;:'     ,.;:   "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "    \"'\"...   '::, :::::; : .; .; \"\"'    "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "        '\"\"\"....; :::::; , ; .; \"\"\"         "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "    .:::.....'\"':::::::'\",...;::::;.   "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "   ;:' '\"\"'\"\";.,;:::::;.'\"\"\"\"\"\"  ':;   "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "  ::'         ;::;:::;::..         :;  "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << " ::         ,;:::::::::::;:..       :: "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << " ;'     ,;;:;::::::::::::::;\"; ..    ':."; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "::     ;:\"  ::::::\"\"\"'::::::  \":     ::"; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << " :.    ::   ::::::;  :::::::   :     ; "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "  ;    ::   :::::::  :::::::   :    ;  "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "   '   ::   ::::::....:::::'  ,:   '   "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "    '  ::    :::::::::::::\"   ::       "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "       ::     ':::::::::\"'    ::       "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "       ':       \"\"\"\"\"\"\"'      ::       "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "        ::                   ;:        "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "        ':;                 ;:\"        "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "          ';              ,;'          "; y++;
    Posicion(x, y); ColorRojoOscuro(); cout << "            \"'           '\"            "; y++;
}void DibujarCreditos() {
    Posicion(10, 10); cout << "Creado por: ";

    Posicion(10, 12); cout << " - Christian Santiago Helldorff González";
    Posicion(10, 13); cout << " - Freddy Alexander Villantoy Pasiche ";
    Posicion(10, 14); cout << " - Deivid Piero Sequeiros Lancho";

	Posicion(10, 17); cout << "Docente: ";

    Posicion(10, 19); cout << " - Luis Alberto Raymundo Chacaltana";

    _sleep(100);
    tecla = teclageneralbasura;
    bool estewhile = true;
    do {
        if(_kbhit()) {
            tecla = _getch();
            estewhile = false;
            if (tecla == 'x' || tecla == 'X') {
                estewhile = false;
            }
		}
    } while (estewhile);
    AnimacionBorrar();
}
void DibujarVictoriaMiles() {
	Console::Clear();
    _sleep(2000);
    do {
        if (tempanimaciontitulo == 20) {
            ColorAzul(); tempanimaciontitulo = 0;
        }
        if (tempanimaciontitulo == 10) {
            ColorVerde();
        }
        Posicion(10, 10);     cout << "      _                               _            ";
        Posicion(10, 11);     cout << "     | |                             | |                 ";
        Posicion(10, 12);     cout << "     | |     ___   __ _ _ __ __ _ ___| |_ ___                 ";
        Posicion(10, 13);     cout << "     | |    / _ \\ / _` | '__/ _` / __| __/ _ \\                ";
        Posicion(10, 14);     cout << "     | |___| (_) | (_| | | | (_| \\__ \\ ||  __/                ";
        Posicion(10, 15);     cout << "     |______\\___/ \\__, |_|__\\__,_|___/\\__\\___|                ";
        Posicion(10, 16);     cout << "                   __/ |  ____|                               ";
        Posicion(10, 17);     cout << "                  |___/| |__   ___  ___ __ _ _ __   __ _ _ __ ";
        Posicion(10, 18);     cout << "                       |  __| / __|/ __/ _` | '_ \\ / _` | '__|";
        Posicion(10, 19);     cout << "                       | |____\\__ \\ (_| (_| | |_) | (_| | |   ";
        Posicion(10, 20);     cout << "                       |______|___/\\___\\__,_| .__/ \\__,_|_|   ";
        Posicion(10, 21);     cout << "                                            | |               ";
        Posicion(10, 22);     cout << "                                            |_|  ";
        tempanimaciontitulo++;
        _sleep(10);
    } while (!_kbhit());
}
void DibujarSpidermanAranaFreddy(int x, int y) {
    Posicion(x, y);      cout << "     *  *          #  #     ";
    Posicion(x, y + 1);  cout << "    # .#*          #. *#    ";
    Posicion(x, y + 2);  cout << "   ## ##           *#  ##   ";
    Posicion(x, y + 3);  cout << "  .# ##            *#*  ##.  ";
    Posicion(x, y + 4);  cout << "  ## ## ## : :: : ####  ##  ";
    Posicion(x, y + 5);  cout << " .#   ######*##*######  *#. ";
    Posicion(x, y + 6);  cout << " *###*#*############*#*###* ";
    Posicion(x, y + 7);  cout << "  **. .##*########*##. .**  ";
    Posicion(x, y + 8);  cout << "    *##**##########**##*    ";
    Posicion(x, y + 9);  cout << "**###.  ###*####*###  .###**";
    Posicion(x, y + 10); cout << "##*     ## *####* ##     *##";
    Posicion(x, y + 11); cout << "##      ##  *##*  ##      ##";
    Posicion(x, y + 12); cout << "*#.     ##   ##   ##     .#*";
    Posicion(x, y + 13); cout << ".#*     *#        #*     *#.";
    Posicion(x, y + 14); cout << " *#     .#        #.     #* ";
    Posicion(x, y + 15); cout << "  #*     #        #     *#  ";
    Posicion(x, y + 16); cout << "  .#     #*      *#     #.  ";
    Posicion(x, y + 17); cout << "   .*    .#      #.    *.   ";
    Posicion(x, y + 18); cout << "          **    **          ";
    Posicion(x, y + 19); cout << "           *.  .*           ";
}