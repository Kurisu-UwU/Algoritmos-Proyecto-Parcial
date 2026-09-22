#pragma once
#include "Mapas.h"
#include "TextoAnimadoDialogosETC.h"

void Nivel1() {
	DibujarMilesMoralesGrandeTitulo(10, 10);
	int a=0;
	do {
		a++;
		TextMilesIntro(a);
		_sleep(100);
	} while (a < 2);
}
void Nivel2() {
	bool arriba = true, abajo = true, izquierda = true, derecha = true;
	DibujarMiguelOharaGrandeTitulo(10, 10);
	int a = 0;
	do {
		a++;
		TextMiguelIntro(a);
	} while (a < 2);
	AnimacionBorrar();

	Protagonista* Miles = new Protagonista(10, 10, 100, 1, 10, 100, 1, "Miles Morales", 1,1, 3);
	MoverNivel1(Miles, arriba, abajo, izquierda, derecha);
	delete Miles;
}
void Nivel3() {
	int a = 0;
	do {
		a++;
		TextPunkIntro(a);
	} while (a < 2);
	
	AnimacionBorrar();

	Protagonista* punk = new Protagonista(10,10,100,1,10,100, 2,"Punk",2,1,3);
	Proyectiles* proyectil; //Inicialización de proyectiles para la clase enemigos
	int cantenemigos = 4;
	Enemigos** enemigo = new Enemigos * [cantenemigos];  // inicialización automática de los enemigos en la función nivel /// PD no se inicializa de igual manera dentro de una clase
	Niveles* nivel2 = new Niveles();
	for (int i = 0; i < cantenemigos; i++) {
		enemigo[i] = new Enemigos(10, 7, 1, 5, 1, 1, 1, "Enemigo1", true, 1);
	} 
	enemigo[0]->SetEX(10);  //Atributos de los enemigos
	enemigo[1]->SetEX(20);
	enemigo[2]->SetEX(30);
	enemigo[3]->SetEX(40);
	enemigo[0]->SetEY(7);
	enemigo[1]->SetEY(10);
	enemigo[2]->SetEY(15);
	enemigo[3]->SetEY(20);
	enemigo[0]->SetVelocidadTempo(1);
	enemigo[1]->SetVelocidadTempo(2);
	enemigo[2]->SetVelocidadTempo(3);
	enemigo[3]->SetVelocidadTempo(4);
	enemigo[0]->SetVida(5);
	enemigo[1]->SetVida(5);
	enemigo[2]->SetVida(5);
	enemigo[3]->SetVida(5);
	punk->Generarhabilidades();
	
	Enemigos* enemigo1 = new Enemigos(10, 7, 1, 5, 1, 1, 1, "Enemigo1", true, 1);
	tecla = 'j';
	do {  //Parte 1
		if (_kbhit()) {
			tecla = getch();
		}
		for (int i = 0; i < cantenemigos; i++) {
			nivel2->EnemigoAcercaProta(enemigo[i],punk);
			nivel2->EnemigoMuere(enemigo[i]);	
		}
		DibujarPanelDeControl();
		punk->Borrar();
		punk->Mover(true, true, true, true);
		punk->Dibujar();
		Posicion(0, 42); cout << "Vida: " << enemigo[1]->GetVida();
		if (tecla == 'q' || tecla == 'Q') {
			Posicion(0, 30); cout << "Habilidad Q activada";
				for (int i = 0; i < cantenemigos; i++) {
				nivel2->AtacarEnemigos(enemigo[i], punk);
				
			}
			punk->ControladorTiempoHabilidades(0);  
		}
		punk->DibujarHabilidades();
		_sleep(1);
		if (!enemigo[0]->GetVivo() && !enemigo[1]->GetVivo() && !enemigo[2]->GetVivo() && !enemigo[3]->GetVivo()) {
			booleanoGeneralParaNiveles = false;
		}
		tecla = 'j';
	} while (booleanoGeneralParaNiveles);
	for (int i = 0; i < cantenemigos; i++) {
		delete enemigo[i];
	}
	delete[]enemigo;
}
void NivelPrueba() {
	int a = 0;
	NivelBatalla* nivelbatalla3;
	nivelbatalla3 = new NivelBatalla(); /// Prueba
	Proyectiles* proyectil;
	Enemigos* enemigos1;
	enemigos1 = new Enemigos();
	do {
		a++;
		TextPunkIntro(a);
	} while (a < 2);
	AnimacionBorrar();
	do {
		if (_kbhit()) {//detecta si se ha pulsado una tecla
			char tecla = getch(); //captura la tecla pulsada
			enemigos1->GenerarProyectil(tecla);
		}
		if (enemigos1->GetCantDeProyectiles() > 0) {
			enemigos1->MostrarProyectil();
		}
		_sleep(1);
	} while (1);
}