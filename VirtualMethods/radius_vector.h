#pragma once
#ifndef RADIUS_VECTOOR_H
#define RADIUS_VECTOR_H
#include "point.h"
#include "math.h"
#include "object.h"


class radius_vector: public point //наследник базового класса point
{
public: 
	radius_vector();
	radius_vector(float i_x, float i_y);
	float length();
	void set(float n_x, float n_y);
};
#endif//RADIUS_VECTOR_H
