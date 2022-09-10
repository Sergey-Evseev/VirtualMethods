#pragma once
#ifndef RADIUS_VECTOR_H
#define RADIUS_VECTOR_H
#include "point.h"
#include "math.h"
#include "object.h"


class radius_vector: public point //наследник базового класса point
{
public: 
	radius_vector(); //конструктор без аргументов
	radius_vector(float i_x, float i_y); //конструктор с аргументами
	float length(); //функция вычисляет длину радиус вектора
	void set(float n_x, float n_y);
	void showParameters() override;
};
#endif//RADIUS_VECTOR_H