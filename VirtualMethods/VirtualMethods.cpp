#include <iostream>
#include "point.h";
#include "radius_vector.h";
using namespace std;


int main()
{
	object *ptr[2]; //������ ���������� ���� object
	ptr[0] = new point(5, 7);
	ptr[1] = new radius_vector(4, 8);
	ptr[1] = new point(6,7);

	ptr[0]->showParameters(); //�������� �� ��������� ������� showParameters
	ptr[1]->showParameters(); //�������� �� ������������ ��������� ������� showParameters
	ptr[2]->showParameters(); //����� ������� �������� ������


	return 0;
}