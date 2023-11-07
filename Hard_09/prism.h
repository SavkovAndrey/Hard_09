#pragma once
#include <iostream>

using namespace std;

class Prism
{
private:

	double  volume;                            // ����� 
	double    height;                          // ������
	float    num_of_edge;                      // ����� ������
	double  long_of_side;                      // ������ ������
	double area;                               // ������� ���������
	const double PI = 3.141592653589793;       // ��
public:

	Prism();                                   // ����������� �� ���������
	Prism(float n, double a, double h);        // ����������� � �����������
	Prism(Prism& other);                       // ����������� ����������� 
	~Prism();                                  // ����������
	int getNum_of_edge();                      // ������ (����� ������)
 	double getHeight();                        // ������ (������)
	double getLong_of_side();                  // ������ (������ ������)
	double getArea();                          // ������ (������� ���������)
	double getVolume();                        // ������ (�����)
	void setNum_of_edge(float n);              // ������ (����� ������)
	void setHeight(double h);                  // ������ (������)
	void setLong_of_side(double a);            // ������ (������ ������)
	void setArea(double s);                    // ������ (������� ���������)
	void output();                             // ����� ���� ���������� � ������
};