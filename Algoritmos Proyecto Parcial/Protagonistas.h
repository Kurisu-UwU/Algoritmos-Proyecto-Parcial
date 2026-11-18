#pragma once
#include "string"

using namespace std;
using namespace System::Drawing;

enum Direccion { Arriba, Abajo, Derecha, Izquierda, Ninguno };

class Protagonista {
protected:
	int x, y;
	int idX, idY;
	int dx, dy;
	int ancho, alto;
	char direccion;
	float energia, ataque, vida, carga;
	string nombre;

public:
	Protagonista() { }

	Protagonista(int x1, int y1, int anch, int alt, float e1, float vx1, float vy1, float a1, float vi1, float car, string n1, char mira, int idx, int idy) {
		x = x1;
		y = y1;
		energia = e1;
		dx = vx1;
		dy = vy1;
		ataque = a1;
		vida = vi1;
		carga = car; 
		nombre = n1; 
		direccion = mira; 
		ancho = anch; 
		alto = alt;
		idX = idx;
		idY = idy;
	}

	virtual ~Protagonista() {};

	void SetPX(int x1) { x = x1; }  //setters
	void SetPY(int y1) { y = y1; }
	void SetEnergia(float e1) { energia = e1; }
	void SetVelocidadx(float vx1) { dx = vx1; }
	void SetVelocidady(float vy1) { dy = vy1; }
	void SetAtaque(float a1) { ataque = a1; }
	void SetVida(float vi1) { vida = vi1; }
	void SetCarga(float c1) { carga = c1; }
	void SetNombre(string n1) { nombre = n1; }
	void SetMirada(char mira) { direccion = mira; }

	int GetPX() { return x; }  // getters
	int GetPY() { return y; }
	int GetAncho() { return ancho; }
	int GetAlto() { return alto; }
	float GetEnergia() { return energia; }
	float GetVelocidadx() { return dx; }
	float GetVelocidady() { return dy; }
	float GetAtaque() { return ataque; }
	float GetVida() { return vida; }
	float GetCarga() { return carga; }
	string GetNombre() { return nombre; }
	char GetMirada() { return direccion; }


	void Dibujar(Graphics^ g, Bitmap^ bmp) {
		System::Drawing::Rectangle sectionshow = System::Drawing::Rectangle(idX * ancho, idY * alto, ancho, alto);
		System::Drawing::Rectangle zoom = System::Drawing::Rectangle(x, y, ancho * 1.0, alto * 1.0);
		g->DrawImage(bmp, zoom, sectionshow, GraphicsUnit::Pixel);
	}

	void Protagonista::move(Graphics^ g, char i) {
		switch (i) {
		case 'A':
			if (x > 0) {
				idY = 7;
				x -= dx;
				direccion = 'A';
			}
			break;
		case 'D':
			if (x + ancho * 1.0 < g->VisibleClipBounds.Width) {
				idY = 6;
				x += dx;
				direccion = 'D';
			}
			break;
		case 'W':
			if (y > 0) {
				idY = 5;
				y -= dy;
				direccion = 'W';
			}
			break;
		case 'S':
			if (y + alto * 1.0 < g->VisibleClipBounds.Height) {
				idY = 4;
				y += dy;
				direccion = 'S';
			}
			break;
		}
		idX++;
		if (idX > 15)idX = 0;
	}
};
