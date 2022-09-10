#include "radius_vector.h"

radius_vector::radius_vector()
{
	cout << "Constructor radius_vector" << endl;
}

radius_vector::radius_vector(float i_x, float i_y):
point(i_x, i_y)
{
	
}

float radius_vector::length()
{
	float l = sqrt(x*x + y * y);
	return l;
}

void radius_vector::set(float n_x, float n_y)
{   //����������� ������� set                             
	float l = sqrt(n_x * n_x + n_y * n_y); //��������� ����� �������
	if (l < 10) { //���� ����� ������ 10
		point::set(n_x, n_y); //��� ���������� �������� ������������ ������� 
		//�������� ��� radius ������ point
	}
	else {
		point::set(0, 0);
	}
}

void radius_vector::showParameters()
{
	cout << "Radius_vector parameters" << *this << endl;
}