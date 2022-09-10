#pragma once
#ifndef POINT_H
#define POINT_H
#include <iostream>
#include "object.h"

class point: public object //наследуется от базового класса object 
	   {
	   protected: 
		   float x;
		   float y;
	   public: //все методы могут быть использованы для производного класса radius_vector
		   point(); //конструктор без параметров
		   point(float i_x, float i_y); //конструктор с параметрами
		   ~point(); //деструктор 
		   void set(float n_x, float n_y); //сеттер параметров
		   float getX(); //геттеры 
		   float getY();
		   point operator + (point p2); //перегрузка оператора +
		   bool operator==(point p2); //перегрузка оператора равно
		   void showMyAddress();
		   point operator++(); //перегрузка оператора инкремента без параметра
		   point operator++(int); //инкремент на заданное значение
		   friend ostream& operator<<(ostream &os, point p);
		   friend istream& operator>>(istream &is, point &p);
		   //ключевое слово friend позволяет функции "оператор <<" взаимодействовать 
		   //с закрытыми членами класса (private, protected)
		   //ostream и istream базовые классы - потоки ввода-вывода  
		   void showParameters() override;
		};

#endif //POINT-H