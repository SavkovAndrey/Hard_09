#include <iostream>
#include "prism.h"
using namespace std;

//------------------------- ����������� �� ���������

Prism::Prism()
{
	num_of_edge = 4;
	long_of_side = 1;
	height = 1;
	area = (num_of_edge * long_of_side * long_of_side) / (4 * tan((180 / num_of_edge) * PI / 180));
	volume = area * height;
}

//------------------------- ����������� � �����������

Prism::Prism(float n, double a, double h) : num_of_edge(n), long_of_side(a), height(h)
{
	area = (num_of_edge * long_of_side * long_of_side) / (4 * tan((180 / num_of_edge) * PI / 180));
	volume = area * height;
}


//------------------------- ����������� �����������

Prism::Prism(Prism& other)
{
	this->num_of_edge = other.num_of_edge;
	this->long_of_side = other.long_of_side;
	this->height = other.height;
	this->area = other.area;
	this->volume = other.volume;
}

//------------------------- ����������

Prism::~Prism()
{

}

//------------------------- �������

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

//------------------------- �������

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
	// ����� ������ ��������� ���������� , ������ ����� ������ ��� ����� �������
	long_of_side = sqrt((s * (4 * tan((180 / num_of_edge) * PI / 180))) / num_of_edge);
}
	
	//------------------------- ������ ������

void Prism::output()
{
	cout << endl << "����� ������: " << num_of_edge << endl << "������ ������: " << long_of_side
		<< endl << "������: " << height << endl << "������� ���������: " << area << endl << "�����: " << volume << endl;
}

