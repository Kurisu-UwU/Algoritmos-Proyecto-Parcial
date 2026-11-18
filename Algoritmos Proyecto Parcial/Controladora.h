#pragma once
#include <vector>
#include "MilesMorales.h"
#include "MiguelOhara.h"
#include "SpiderPunk.h"
#include "Entidades.h"
#include "PersonajesSecundarios.h"
#include <vector>

using namespace std;
class Controladora {
private:
	vector<Protagonista*>prota;
	vector<PersonajeSecundario*>entity;
public:
	Controladora() {}
	~Controladora() {}

	void addBullet() {
	}
	void drawEveryThing(Graphics^ g, Bitmap^ bmpEnemy, Bitmap^ bmpBullet) {
		for (int i = 0; i < entity.size(); i++)
		{
			entity[i]->Dibujar(g, bmpBullet);
		}
	}
	void moveEveryThing(Graphics^ g) {
		for (int i = 0; i < entity.size(); i++)
		{
			entity[i]->Mover(g);
		}
	}
	void deleteInvisible() {
		for (size_t i = 0; i < entity.size(); i++) {
			entity[i]->SetEX(100); entity[i]->SetEY(100);
			entity.erase(entity.begin() + i);
		}
	}
	/*int collision(Graphics^ g) {  // SIN USAR DE MOMENTO, ERA PARA LAS COLISIONES
		//verificar
		for (int i = 0; i < entity.size(); i++)
		{
			if (entity[i]->GetEX() <= 0 || entity[i]->GetAncho() >= g->VisibleClipBounds.Width ||
				entity[i]->GetEY() <= 0 || entity[i]->GetAlto() >= g->VisibleClipBounds.Height) {
				entity[i]->SetVisibilidad(false);
				return 0;
			}
		}
		// colision bullet vs enemy
		for (int i = 0; i < ash.size(); i++)
		{
			for (int j = 0; j < entity.size(); j++)
			{
				if (ash[i]->getRectangle().IntersectsWith(entity[j]->getRectangle())) {
					ash[i]->setVisibility(false);
					entity[j]->SetVisibilidad(false);
					return 1;
				}
			}
		}
		return 2;
	}*/
};
