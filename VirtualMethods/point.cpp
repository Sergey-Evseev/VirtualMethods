#include "point.h"


//��� ���������� �������������, ��������

point::point() :
	x(0), //�� ��������� ���������� ���������������� ������
	y(0)
{
	cout << "Constructor point " << endl;
}

point::point(float i_x, float i_y): x(i_x), y(i_y)
{
	cout << "Constructor point with arguments" << endl;
}

point::~point()
{
	cout << "Destructor" << endl;
}

void point::set(float n_x, float n_y)
{
	if (abs(n_x) < 10) //������� ��������� x � y �� �������������� � ��������� �� -10 �� 10
	x = n_x;
	else x = 0; //���� �������� ������� �� ������� ���������, �� ���������� ������������� �������� 0
	
	if (abs(n_y) < 10)
		y = n_y;
	else
		y = 0;
}

float point::getX()
{
	return x;
}

float point::getY()
{
	return y;
}


void point::showParameters()
{

}

void point::showMyAddress()
{
	cout << "Internal address " << this << endl;
}

point point::operator++()
{
	x++;
	y++;
	return *this;
}

point point::operator++(int)
{
	point tmp;
	tmp = *this;
	x++;
	y++;
	return tmp();
}

ostream & operator<<(ostream & os, point p)
{
	os << p.x << "," << p.y;
	return os;
}

istream & operator>>(istream &is, point &p)
{
	is >> p.x >> p.y;
	return is;
}

void point::showParameters() {
	cout << "Point parameters " << *this << endl;
}
	