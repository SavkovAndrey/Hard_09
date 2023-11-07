#include <iomanip>
#include <iostream>
#include "prism.h"
#include "function.h"
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

	






    while (true)
    {
        menu();
        int n;
        cin >> n;

        switch (n)
        {
        case 1:                                          // Вывести все параметры призмы
        {
            prisma.output();
            break;
        }

        case 2:                                          
        {
            cout << "Число сторон: " << prisma.getNum_of_edge() << endl;
            break;
        }

        case 3:    
        {
            cout << "Длинна сторон: " << prisma.getLong_of_side() << endl;
            break;
        }

        case 4:    
        {
            cout << "Высота: " << prisma.getHeight() << endl;
            break;
        }

        case 5:    
        {
            cout << "Площадь основания: " << prisma.getArea() << endl;
            break;
        }

    
        case 6:    
        {
            cout << "Объем: " << prisma.getVolume() << endl;
            break;
        }

        case 7:
        {
            float x;
            cout << "Задайте число сторон: ";
            cin >> x;
            prisma.setNum_of_edge(x);
            cout << endl;
            break;
        }

        case 8:
        {
            float x;
            cout << "Задайте длинну сторон: ";
            cin >> x;
            prisma.setLong_of_side(x);
            cout << endl;
            break;
        }
    
        case 9:
        {
            float x;
            cout << "Задайте высоту: ";
            cin >> x;
            prisma.setHeight(x);
            cout << endl;
            break;
        }

        case 10:
        {
            float x;
            cout << "Задайте площадь основания: ";
            cin >> x;
            prisma.setArea(x);
            cout << endl;
            break;
        }

        case 0:
        {
            cout << endl << "Вы вышли из программы." << endl;
            system("pause");
            return 0;
            break;
        }
        }


    }




	system("pause");
	return 0;
}
