#pragma once
#include "ASCIIArtsNiveles.h"
#include "Proyectiles.h"
#include "NPCs.h"
class PersonajeSecundario
{
protected:
	int ex, ey, anchura, altura;
	float cantidaddeataque, cantidaddevida, velocidad, velocidadtempo, velocidadataque;
	string tipo;
	bool vivo;
	Proyectiles** listaP;// Permite almacenar varios proyectiles.
	int cantdeproyectiles;
	Proyectiles* obproye;// Puntero utilizado para crear un nuevo proyectil.
	float tempo = 0;
public:
	PersonajeSecundario();
	PersonajeSecundario(int, int, int, int, float, float, float,float,float, string, bool, float);
	virtual ~PersonajeSecundario();

	virtual void Dibujar();
	virtual void Borrar();
	//coloca y cambia los datos de los enemigos los set
	void SetEX(int x1) { ex = x1; }
	void SetEY(int y1) { ey = y1; }
	void SetAtaque(float a1) { cantidaddeataque = a1; }
	void SetVida(float v1) { cantidaddevida = v1; }
	void SetVelocidad(float v1) { velocidad = v1; }
	void SetTipo(string t1) { tipo = t1; }
	void SetVivo(bool vi) { vivo = vi; }
	void SetVelocidadTempo(float v1) { velocidadtempo = v1; }
	void SetTempo(float temp) { tempo = temp; }
	void SetAlto(int alt) { altura = alt; }
	void SetAncho(int anch) { anchura = anch; }
	//obtiene y devuelve los datos de los enemigos los get
	virtual int GetEX() { return ex; }
	virtual int GetEY() { return ey; }
	float GetAtaque() { return cantidaddeataque; }
	float GetVida() { return cantidaddevida; }
	float GetVelocidad() { return velocidad; }
	float GetVelocidadTempo() { return velocidadtempo; }
	string GetTipo() { return tipo; }
	bool GetVivo() { return vivo; }
	int GetCantDeProyectiles() {return cantdeproyectiles;}
	float GetTempo() { return tempo; }
	int GetAlto() { return altura; }
	int GetAncho() { return anchura; }

	void GenerarProyectil(char);
	void MostrarProyectil();
	//virtual void PerseguirProta(int, int, bool, bool, bool, bool) {}
	virtual void PerseguirProta(int px, int py, bool W, bool A, bool S, bool D) {}
	/*virtual void PerseguirProta(int px, int py, bool W, bool A, bool S, bool D) {  // Implementación de la lógica para perseguir al protagonista
		if (tempo > 20 / velocidadtempo) {
			if (px > ex && D) { ex += velocidad * 2; } // Mover hacia la derecha
			else if (px < ex && A) { ex -= velocidad * 2; } // Mover hacia la izquierda
			if (py > ey && S) { ey += velocidad; } // Mover hacia abajo
			else if (py < ey && W) { ey -= velocidad; }// Mover hacia arriba
			tempo = 0; // Reiniciar el temporizador
		}
		tempo++;
	}*/
	//virtual void ColisionesObjetos(int ox, int oy, int ancho, int alto)
	void AtacarProtagonista(int, int);
};
PersonajeSecundario::PersonajeSecundario() {
	ex = 0; ey = 0;
	cantdeproyectiles = 0;
	listaP = nullptr;
	velocidad = 1;
	velocidadtempo = 1;
}
PersonajeSecundario::PersonajeSecundario(int x1, int y1, int ancho, int alto, float a1, float v1, float vel1,float vel1temp, float velatk, string t1, bool vi, float temp) {
	ex = x1; ey = y1;
	anchura = ancho;
	altura = alto;
	cantidaddeataque = a1;
	cantidaddevida = v1;
	velocidad = vel1;
	velocidadtempo = vel1temp;
	velocidadataque = velatk;
	tipo = t1;
	vivo = vi;
	cantdeproyectiles = 0;
	listaP = nullptr;
	tempo = temp;
}
PersonajeSecundario::~PersonajeSecundario() {if (listaP != nullptr) delete[]listaP;}
void PersonajeSecundario::Dibujar() {DibujarEnemigo(ex, ey);}
void PersonajeSecundario::Borrar() {BorrarEnemigo(ex, ey);}
void PersonajeSecundario::GenerarProyectil(char tecla) {
	if (cantidaddevida <= 0) {
		if (tecla == 'L' || tecla == 'l') {
			obproye = new Proyectiles();
			Proyectiles** proy = new Proyectiles * [cantdeproyectiles + 1]; //crea una nueva pelota
			for (int i = 0; i < cantdeproyectiles; i++) { proy[i] = listaP[i]; }
			proy[cantdeproyectiles] = obproye;
			cantdeproyectiles++;
			if (listaP != nullptr) { delete[]listaP; }
			listaP = proy;
		}
	}
}
void PersonajeSecundario::MostrarProyectil() {
	for (int i = 0; i < cantdeproyectiles; i++) {
		listaP[i]->Borrar();
		listaP[i]->Mover();
		listaP[i]->Dibujar();
	}
}
/*void PersonajeSecundario::PerseguirProta(int px, int py, bool W, bool A, bool S, bool D) {  // Implementación de la lógica para perseguir al protagonista
		if (tempo > 20 / velocidadtempo) {
			if (px > ex && D) { ex += velocidad * 2; } // Mover hacia la derecha
			else if (px < ex && A) { ex -= velocidad * 2; } // Mover hacia la izquierda
			if (py > ey && S) { ey += velocidad; } // Mover hacia abajo
			else if (py < ey && W) { ey -= velocidad; }// Mover hacia arriba
			tempo = 0; // Reiniciar el temporizador
		}
		tempo++;
}*/
//void Enemigos::AtacarProtagonista(Protagonista* prota) { // Implementación de la lógica para atacar al protagonista
//}