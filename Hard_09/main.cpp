#include <iomanip>
#include <iostream>
#include "prism.h"
#include "function.h"
using namespace std;
//------------------------ TASK --------------------------------------------------
/*
������� ����� ������ : �����, ������, ���������� ������, ������ ������, ������� ���������.
����������� get - � set - ������ ��� ������ � ������� - ������� ������.
������������ �����(����) ������� � �������� ������. �������� ������� - ������ ������ �� ������� �����.
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
        case 1:                                          // ������� ��� ��������� ������
        {
            prisma.output();
            break;
        }

        case 2:                                          
        {
            cout << "����� ������: " << prisma.getNum_of_edge() << endl;
            break;
        }

        case 3:    
        {
            cout << "������ ������: " << prisma.getLong_of_side() << endl;
            break;
        }

        case 4:    
        {
            cout << "������: " << prisma.getHeight() << endl;
            break;
        }

        case 5:    
        {
            cout << "������� ���������: " << prisma.getArea() << endl;
            break;
        }

    
        case 6:    
        {
            cout << "�����: " << prisma.getVolume() << endl;
            break;
        }

        case 7:
        {
            float x;
            cout << "������� ����� ������: ";
            cin >> x;
            prisma.setNum_of_edge(x);
            cout << endl;
            break;
        }

        case 8:
        {
            float x;
            cout << "������� ������ ������: ";
            cin >> x;
            prisma.setLong_of_side(x);
            cout << endl;
            break;
        }
    
        case 9:
        {
            float x;
            cout << "������� ������: ";
            cin >> x;
            prisma.setHeight(x);
            cout << endl;
            break;
        }

        case 10:
        {
            float x;
            cout << "������� ������� ���������: ";
            cin >> x;
            prisma.setArea(x);
            cout << endl;
            break;
        }

        case 0:
        {
            cout << endl << "�� ����� �� ���������." << endl;
            system("pause");
            return 0;
            break;
        }
        }


    }




	system("pause");
	return 0;
}
