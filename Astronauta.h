#pragma once
#include <iostream>
using namespace std;

class Astronauta
{
private:
	//Atributos
	string nombre;
	string especialidad;
public:
	//Constructor
	Astronauta(string pnombre, string pespecialidad);
	//Destructor
	~Astronauta();

	//Metodos

	//Get
	string getnombre();
	string getespecialidad();

	//Set
	void setnombre(string pnombre);
	void setespecialidad(string pespecialidad);
};

//Inplementación

Astronauta::Astronauta(string pnombre, string pespecialidad)
{
	nombre = pnombre;
	especialidad = pespecialidad;
}

string Astronauta::getnombre()
{
	return nombre;
}

string Astronauta::getespecialidad()
{
	return especialidad;
}

void Astronauta::setnombre(string pnombre)
{
	nombre = pnombre;
}

void Astronauta::setespecialidad(string pespecialidad)
{
	especialidad = pespecialidad;
}