#include <iostream>
#include "point.h";
#include "radius_vector.h";
using namespace std;


int main()
{
	object *ptr[2]; //массив указателей типа object
	ptr[0] = new point(5, 7);
	ptr[1] = new radius_vector(4, 8);
	ptr[1] = new point(6,7);

	ptr[0]->showParameters(); //вызываем из указателя функцию showParameters
	ptr[1]->showParameters(); //вызываем из обновленного указателя функцию showParameters
	ptr[2]->showParameters(); //вызов функции базового класса


	return 0;
}