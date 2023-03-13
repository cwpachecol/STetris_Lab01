#include <iostream>
#include "Escenario.h"
#include "Bloque.h"
#include "BloqueAvanzado.h"
#include "BloqueConvencional.h"

using namespace std;



int main() {
	//Bloque objetoBloque;

	//objetoBloque.mostrar();
	BloqueAvanzado objetoBloqueAvanzado;
	objetoBloqueAvanzado.rotar(10.5f);

	BloqueConvencional objetoBloqueConvencional;
	objetoBloqueConvencional.rotar(90.3f);

	cout << "Hola bienvenido al mundo de Tetris." << endl;

	Escenario escenarioInicial;

	cout << "El nombre del tablero que tiene este escenario es:" << escenarioInicial.getTablero().getNombre() << endl;
	cout << "El nombre del escenario es:" << escenarioInicial.getNombre() << endl;
	escenarioInicial.setNombre("Inicia la historia tetris");
	
	cout << "El nombre del escenario es:" << escenarioInicial.getNombre() << endl;

}