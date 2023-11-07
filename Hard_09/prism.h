#pragma once
#include <iostream>

using namespace std;

class Prism
{
private:

	double  volume;                            // объем 
	int    height;                             // высота
	int    num_of_edge;                        // число граней
	double  long_of_side;                      // длинна сторон
	double area;                               // площадь основания
	const double PI = 3.141592653589793;       // Пи
public:

	Prism();                                   // КОНСТРУКТОР по умолчанию
	Prism(int n, double a, double h);          // КОНСТРУКТОР с параметрами
	Prism(Prism& other);                       // КОНСТРУКТОР копирования 
	~Prism();                                  // ДЕСТРУКТОР
	

	


};