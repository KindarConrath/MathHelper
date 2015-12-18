////////////////////////////////////////////////////////////////////
// 2 Dimensional Vector Mathematix Library                        //
// Part of Games Math library                                     //
// Authors: KindarConrath                                        //
////////////////////////////////////////////////////////////////////

#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>

class Vector2D
{
public:
	Vector2D();
	Vector2D(const Vector2D& cpy);
	Vector2D(double x, double y);

	Vector2D operator=(Vector2D v2);
	Vector2D operator+(Vector2D v2);
	Vector2D operator-(Vector2D v2);
	Vector2D operator*(double scl);

	double dot(Vector2D v2);
	bool operator==(Vector2D v2);

	double magnitude();
	Vector2D normalize(); //trying to decide if it should normalize THIS vector or JUST return a normalized vector.

	double &operator()( int ); //retuns lvaule
	double operator()( int ) const; //returns rvalue
private:
	double x, y;
};  

std::ostream& operator<<(std::ostream& out, Vector2D v2); //global operator overloading

#endif // !VECTOR2D_H
