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
public:
	void mostrar() {
		cout << "Soy de la clase bloque" << endl;
	}
	virtual void rotar(float _angulo) = 0;
protected:

};

