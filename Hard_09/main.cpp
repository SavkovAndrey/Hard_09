#include <iomanip>
#include <iostream>
#include "prism.h"
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

	cout << endl << prisma.getNun_of_edge() << endl << prisma.getLong_of_side()
		<< endl << prisma.getHeight() << endl << prisma.getArea() << endl << prisma.getVolume() << endl;








	system("pause");
	return 0;
}
