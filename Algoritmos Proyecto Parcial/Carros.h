#pragma once
#include "Proyectiles.h"
#include "ASCIIArtsNiveles.h"
class Carros : public Proyectiles {
private:
	short tipo;
	bool vivo;
public:
	Carros();
	~Carros();
	void Mover();

	void SetVivo(bool viv) { vivo = viv; }
	void SetTipo(short tip) { tipo = tip; }

	void Dibujar();
	void Borrar();

	bool PresionarCarros(int);

	bool GetVivo() { return vivo; }
	short GetTipo() { return tipo; }
};
Carros::Carros() : Proyectiles() { x = 10; y = 10; vivo = false; tipo = 0; }
Carros::~Carros() {}

bool Carros::PresionarCarros(int x2) {
	SoundPlayer^ pum; // Claude IA  // el ^ "hat" es un tipo de puntero/vector del CRL.net / no necesita de un delete[]
	SoundPlayer^ pam;
	String^ rutapum = "Sonidos/pum.wav";
	String^ rutapam = "Sonidos/pam.wav";
	try { pum = gcnew SoundPlayer(rutapum); pum->Load(); } // (...) Atrapa cualquier tipo de excepción
	catch (...) { pum = nullptr; } // si falta el archivo, no rompe el juego
	try { pam = gcnew SoundPlayer(rutapam); pam->Load(); }
	catch (...) { pam = nullptr; }
	SoundPlayer^ pu = pum;
	SoundPlayer^ pa = pam;
	switch (tipo) {
	case 0: if ((tecla == 'Z' || tecla == 'z') && tipo == 0) {
		if (pu != nullptr) { pu->Play(); }
		else { SystemSounds::Beep->Play(); }; return true;
	}
		  else { return false; } break;
	case 1: if ((tecla == 'X' || tecla == 'x') && tipo == 1) {
		if (pa != nullptr) { pa->Play(); }
		else { SystemSounds::Beep->Play(); }; return true;
	}
		  else { return false; } break;
	default: break;
	}
}
void Carros::Dibujar() {
	if (tipo == 0) { BColorAzul(); }
	else { BColorRojo(); }
	Posicion(x, y); cout << "    ";
	Posicion(x, y + 1); cout << "    ";
	BColorNegro();
}
void Carros::Borrar() {
	Posicion(x, y); cout << "    ";
	Posicion(x, y + 1); cout << "    ";
}