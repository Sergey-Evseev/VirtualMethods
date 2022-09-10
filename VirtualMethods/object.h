#pragma once
#ifndef OBJECT_H //if not defined
#define OBJECT_H
#include <iostream>
using namespace std;

class object //������� �����
{
protected:
	unsigned int id;
	static unsigned int total;

public:
	object();
	unsigned int getID();
	static unsigned int getTotal();

	virtual void showParameters() = 0;
};
#endif //����� ��������� ������������

