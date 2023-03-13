#pragma once
#include<iostream>
#include<string>

using namespace std;

class Bloque
{
private:
	string nombre;
	string forma;
	int sentidoRotacion;
	int alto;
	int ancho;
	string color;
	float velocidad;
	int posicionX;
	int posicionY;

protected:
	static int cantidadBloques;

public:
	Bloque() { cantidadBloques++; }
	void mostrar() {
		cout << "Soy de la clase bloque" << endl;
	}
	virtual void rotar(float _angulo) = 0;

	int getCantidadBloques() { return cantidadBloques; }

protected:

};

