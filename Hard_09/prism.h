#pragma once
#include <iostream>

using namespace std;

class Prism
{
private:

	double  volume;                            // ����� 
	double    height;                             // ������
	int    num_of_edge;                        // ����� ������
	double  long_of_side;                      // ������ ������
	double area;                               // ������� ���������
	const double PI = 3.141592653589793;       // ��
public:

	Prism();                                   // ����������� �� ���������
	Prism(int n, double a, double h);          // ����������� � �����������
	Prism(Prism& other);                       // ����������� ����������� 
	~Prism();                                  // ����������
	int getNun_of_edge();                      // ������ (����� ������)
 	double getHeight();                        // ������ (������)
	double getLong_of_side();                  // ������ (������ ������)
	double getArea();                          // ������ (������� ���������)
	double getVolume();                        // ������ (�����)
	void setNum_of_edge(int n);                // ������ (����� ������)
	void setHeight(double h);                  // ������ (������)
	void setLong_of_side(double a);            // ������ (������ ������)
	void setArea(double s);                    // ������ (������� ���������)
};