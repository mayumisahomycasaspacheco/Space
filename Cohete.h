#pragma once
#include <iostream>
using namespace std;

class Cohete
{
private:
	string nombre;
	int x, y;
	int dx, dy;
public:
	Cohete(string pnombre, int px, int py, int pdx, int pdy);
	~Cohete();

	string getnombre();
	int getx();
	int gety();
	int getdx();
	int getdy();

	void setnombre(string pnombre);
	void setx(int px);
	void sety(int py);
	void setdx(int pdx);
	void setdy(int pdy);
};

Cohete::Cohete(string pnombre, int px, int py, int pdx, int pdy)
{
	nombre = pnombre;
	x = px;
	y = py;
	dx = pdx;
	dy = pdy;
}

Cohete::~Cohete()
{
}

string Cohete::getnombre()
{
	return nombre;
}

int Cohete::getx()
{
	return x;
}

int Cohete::gety()
{
	return y;
}

int Cohete::getdx()
{
	return dx;
}

int Cohete::getdy()
{
	return dy;
}

void Cohete::setnombre(string pnombre)
{
	nombre = pnombre;
}

void Cohete::setx(int px)
{
	x = px;
}

void Cohete::sety(int py)
{
	y = py;
}

void Cohete::setdx(int pdx)
{
	dx = pdx;
}

void Cohete::setdy(int pdy)
{
	dy = pdy;
}