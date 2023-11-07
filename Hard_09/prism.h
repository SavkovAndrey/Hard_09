#pragma once
#include <iostream>

using namespace std;

class Prism
{
private:

	double  volume;                            // объем 
	double    height;                             // высота
	int    num_of_edge;                        // число граней
	double  long_of_side;                      // длинна сторон
	double area;                               // площадь основания
	const double PI = 3.141592653589793;       // Пи
public:

	Prism();                                   // КОНСТРУКТОР по умолчанию
	Prism(int n, double a, double h);          // КОНСТРУКТОР с параметрами
	Prism(Prism& other);                       // КОНСТРУКТОР копирования 
	~Prism();                                  // ДЕСТРУКТОР
	int getNun_of_edge();                      // Геттер (число сторон)
 	double getHeight();                        // Геттер (высота)
	double getLong_of_side();                  // Геттер (длинна сторон)
	double getArea();                          // Геттер (площадь основания)
	double getVolume();                        // Геттер (объем)
	void setNum_of_edge(int n);                // Сеттер (число сторон)
	void setHeight(double h);                  // Сеттер (высота)
	void setLong_of_side(double a);            // Сеттер (длинна сторон)
	void setArea(double s);                    // Сеттер (площадь основания)
};