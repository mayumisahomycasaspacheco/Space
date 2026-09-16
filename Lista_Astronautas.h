#pragma once
#include <iostream>
#include "Astronauta.h"
using namespace std;

class Lista_Astronautas
{
private:
	Astronauta** astronautas;
	int n;                    
public:
	Lista_Astronautas();
	~Lista_Astronautas();

	void agregar(Astronauta* nuevo);
	void insertar(Astronauta* nuevo, int posicion);
	void eliminar(int posicion);
	void modificar(int posicion, string pnombre, string pespecialidad);
	void mostrar();
	int getCantidad();
	Astronauta* getAstronauta(int posicion);
};

Lista_Astronautas::Lista_Astronautas()
{
	astronautas = nullptr;
	n = 0;
}

Lista_Astronautas::~Lista_Astronautas()
{
	for (int i = 0; i < n; i++)
	{
		delete astronautas[i];
	}
	if (astronautas != nullptr)
	{
		delete[] astronautas;
	}
}