#pragma once
#include <iostream>

using namespace std;

class Prism
{
private:

	double  volume;                            // ����� 
	int    height;                             // ������
	int    num_of_edge;                        // ����� ������
	double  long_of_side;                      // ������ ������
	double area;                               // ������� ���������
	const double PI = 3.141592653589793;       // ��
public:

	Prism();                                   // ����������� �� ���������
	Prism(int n, double a, double h);          // ����������� � �����������
	Prism(Prism& other);                       // ����������� ����������� 
	~Prism();                                  // ����������
	

	


};