#include "Protagonistas.h"

class MiguelOhara : public Protagonista {
private:
public:
	MiguelOhara() {}
	MiguelOhara(int x1, int y1, int anch, int alt, float e1, float vx1, float vy1, float a1, float vi1, float car, string n1, char mira, int idx, int idy) : Protagonista() {
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
	};
	~MiguelOhara() {}

};