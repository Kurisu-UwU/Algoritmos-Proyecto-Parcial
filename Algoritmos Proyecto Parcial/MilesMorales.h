#pragma once
#include "string.h"

using namespace System::Drawing;

enum Direccion { Arriba, Abajo, Derecha, Izquierda, Ninguno };

class MilesMorales
{
private:
	int x, y;
	int dx, dy;
	int idX, idY;
	int width, height;
	char direction;
public:
	MilesMorales(int w, int h) {
		width = w;
		height = h;
		dx = dy = 15;
		x = y = 70;
		idX = idY = 0;
		direction = 'S';
	};
	~MilesMorales() {};
	void SetX(int x1) { x = x1; }
	void SetY(int y1) { y = y1; }
	void draw(Graphics^ g, Bitmap^ bmp) {
		System::Drawing::Rectangle sectionshow = System::Drawing::Rectangle(idX * width, idY * height, width, height);
		System::Drawing::Rectangle zoom = System::Drawing::Rectangle(x, y, width * 1.0, height * 1.0);
		g->DrawImage(bmp, zoom, sectionshow, GraphicsUnit::Pixel);
	}
	void move(Graphics^ g, int teclapulsada) {
		switch (teclapulsada) {
		case 2:
			if (x > 0) {
				idY = 1;
				x -= dx;
				direction = 'A';
			}
			break;
		case 3:
			if (x + width * 1.0 < g->VisibleClipBounds.Width) {
				idY = 2;
				x += dx;
				direction = 'D';
			}
			break;
		case 0:
			if (y > 0) {
				idY = 3;
				y -= dy;
				direction = 'W';
			}
			break;
		case 1:
			if (y + height * 1.0 < g->VisibleClipBounds.Height) {
				idY = 0;
				y += dy;
				direction = 'S';
			}
			break;
		default:
			break;
		}
		idX++;
		if (idX > 3)idX = 0;
	}
	char getDirection() { return direction; }
	int getX() { return x; }
	int getY() { return y; }
};

