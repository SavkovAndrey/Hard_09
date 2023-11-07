#include <iostream>
#include "prism.h"
using namespace std;

//------------------------- КОНСТРУКТОР ПО УМОЛЧАНИЮ

Prism::Prism()
{
	num_of_edge = 4;
	long_of_side = 1;
	height = 1;
	area = (num_of_edge * long_of_side * long_of_side) / (4 * tan((180 / num_of_edge) * PI / 180));
	volume = area * height;
}

//------------------------- КОНСТРУКТОР С ПАРАМЕТРАМИ

Prism::Prism(float n, double a, double h) : num_of_edge(n), long_of_side(a), height(h)
{
	area = (num_of_edge * long_of_side * long_of_side) / (4 * tan((180 / num_of_edge) * PI / 180));
	volume = area * height;
}


//------------------------- КОНСТРУКТОР КОПИРОВАНИЯ

Prism::Prism(Prism& other)
{
	this->num_of_edge = other.num_of_edge;
	this->long_of_side = other.long_of_side;
	this->height = other.height;
	this->area = other.area;
	this->volume = other.volume;
}

//------------------------- ДЕСТРУКТОР

Prism::~Prism()
{

}

//------------------------- ГЕТТЕРЫ

int Prism::getNum_of_edge()
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

//------------------------- СЕТТЕРЫ

void Prism::setNum_of_edge(float n)
{
	this->num_of_edge = n;
	area = (num_of_edge * long_of_side * long_of_side) / (4 * tan((180 / num_of_edge) * PI / 180));
	volume = area * height;
}

void Prism::setHeight(double h)
{
	this->height = h;
	volume = area * height;
}

void Prism::setLong_of_side(double a)
{
	this->long_of_side = a;
	area = (num_of_edge * long_of_side * long_of_side) / (4 * tan((180 / num_of_edge) * PI / 180));
	volume = area * height;
}

void Prism::setArea(double s)
{
	this->area = s;
	volume = area * height;
	// число граней оставляем неизменным , меняем длины сторон под новую площадь
	long_of_side = sqrt((s * (4 * tan((180 / num_of_edge) * PI / 180))) / num_of_edge);
}
	
	//------------------------- ПРОЧИЕ МЕТОДЫ

void Prism::output()
{
	cout << endl << "Число сторон: " << num_of_edge << endl << "Длинна сторон: " << long_of_side
		<< endl << "Высота: " << height << endl << "Площадь основания: " << area << endl << "Объём: " << volume << endl;
}

