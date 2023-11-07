#include <iostream>
#include "prism.h"
using namespace std;

//-------------------------  ŒÕ—“–” “Œ– œŒ ”ÃŒÀ◊¿Õ»ﬁ

Prism::Prism()
{
	num_of_edge = 4;
	long_of_side = 1;
	height = 1;
	area = (num_of_edge * long_of_side * long_of_side) / (4 * tan((180 / num_of_edge) * PI / 180));
	volume = area * height;
}

//-------------------------  ŒÕ—“–” “Œ– — œ¿–¿Ã≈“–¿Ã»

Prism::Prism(int n, double a, double h) : num_of_edge(n), long_of_side(a), height(h)
{
	area = (num_of_edge * long_of_side * long_of_side) / (4 * tan((180 / num_of_edge) * PI / 180));
	volume = area * height;
}


//-------------------------  ŒÕ—“–” “Œ–  Œœ»–Œ¬¿Õ»ﬂ

Prism::Prism(Prism& other)
{
	this->num_of_edge = other.num_of_edge;
	this->long_of_side = other.long_of_side;
	this->height = other.height;
	this->area = other.area;
	this->volume = other.volume;
}

//------------------------- ƒ≈—“–” “Œ–

Prism::~Prism()
{

}

//------------------------- √≈““≈–€

int Prism::getNun_of_edge()
{
	return(num_of_edge);
}

double Prism::getHeight()
{
	return(height);
}

double Prism::getLong_of_side()
{
	return(long_of_side);
}

double Prism::getArea()
{
	return(area);
}

double Prism::getVolume()
{
	return(volume);
}

//------------------------- —≈““≈–€

