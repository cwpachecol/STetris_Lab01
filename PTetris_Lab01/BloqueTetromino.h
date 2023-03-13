#pragma once
#include "Bloque.h"
#include<vector>
#include<array>
using namespace std;

class BloqueTetromino :
    public Bloque
{
private:
	array<array<string, 4>, 4> apariencia;
	bool conRotacion;

public:
	BloqueTetromino();
	BloqueTetromino(int _x, int _y, int _ancho, int _alto, int _color);
	//~BloqueTetromino();

	void setConRotacion(bool _conRotacion) { conRotacion = _conRotacion; }
	bool getConRotacion() { return conRotacion; }
};

