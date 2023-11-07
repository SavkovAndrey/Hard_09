#include <iomanip>
#include <iostream>
#include "prism.h"
using namespace std;
//------------------------ TASK --------------------------------------------------
/*
Описать класс призма : объём, высота, количество граней, длинна сторон, площадь основания.
Реализовать get - и set - методы для работы с элемент - данными класса.
Организовать выбор(меню) входные и выходные данные. Защитить элемент - данные призмы от внешних кодов.
V = S * h;

*/
//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	
	Prism prisma(5, 3, 6);

	cout << endl << prisma.getNun_of_edge() << endl << prisma.getLong_of_side()
		<< endl << prisma.getHeight() << endl << prisma.getArea() << endl << prisma.getVolume() << endl;








	system("pause");
	return 0;
}
