#pragma once
#include <iostream>
using namespace std;

class Astronauta
{
private:
	string nombre;
	string especialidad;
public:
	Astronauta(string pnombre, string pespecialidad);
	~Astronauta();

	string getnombre();
	string getespecialidad();

	void setnombre(string pnombre);
	void setespecialidad(string pespecialidad);
};

Astronauta::Astronauta(string pnombre, string pespecialidad)
{
	nombre = pnombre;
	especialidad = pespecialidad;
}

Astronauta::~Astronauta()
{
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