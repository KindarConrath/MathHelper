////////////////////////////////////////////////////////////////////
// 3 Dimensional Vector Mathematix Library                        //
// Part of Games Math library                                     //
// Authors: KindarConrath                                        //
////////////////////////////////////////////////////////////////////

#ifndef VECTOR3D_H
#define VECTOR3D_H

#include "Vector2D.h"

#include <iostream>

class Vector3D
{
public:
	Vector3D();
	Vector3D(const Vector2D& cpy);
	Vector3D(const Vector3D& cpy);
	Vector3D(double x, double y, double z);

	Vector3D operator=(Vector2D v2);
	Vector3D operator=(Vector3D v2);
	Vector3D operator+(Vector3D v2);
	Vector3D operator-(Vector3D v2);
	Vector3D operator*(Vector3D v2);
	Vector3D operator*(double scalar);

	double dot(Vector3D v2);
	bool operator==(Vector3D v2);

	double magnitude();
	Vector3D normalize(); //trying to decide if it should normalize THIS vector or JUST return a normalized vector.

	double &operator()( int ); //retuns lvaule
	double operator()( int ) const; //returns rvalue

private:
	double x, y, z;
}; 

std::ostream& operator<<(std::ostream& out, Vector3D v2); //global operator overloading

#endif // !VECTOR3D_H
