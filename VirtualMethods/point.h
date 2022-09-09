#pragma once
#ifndef POINT_H
#define POINT_H
#include <iostream>
#include "object.h"

class point: public object //����������� �� �������� ������ object 
	   {
	   protected: 
		   float x;
		   float y;
	   public:
		   point(); //����������� �� ���������
		   point(float i_x, float i_y); //����������� � �����������
		   ~point(); //���������� 
		   void set(float n_x, float n_y); //������ ����������
		   float getX(); //������� 
		   float getY();
		   point operator + (point p2); //���������� ��������� +
		   bool operator==(point p2); //���������� ��������� �����
		   void showMyAddress();
		   point operator++(); //���������� ��������� ���������� ��� ���������
		   point operator++(int); //��������� �� �������� ��������
		   friend ostream& operator<<(ostream &os, point p);
		   friend istream& operator<<(istream &is, point &p);
		   //�������� ����� friend ��������� ������� "�������� <<" ����������������� � ��������� ������� ������ (private, protected)
		   //ostream � istream ������� ������ - ������ �����-������   
		};

#endif //POINT-H