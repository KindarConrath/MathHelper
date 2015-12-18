////////////////////////////////////////////////////////////////////
// Quaternion Mathematix Library                                  //
// Part of Games Math library                                     //
// Authors: KindarConrath                                        //
////////////////////////////////////////////////////////////////////

#ifndef QUATERNION_H
#define QUATERNION_H

#include "Vector3D.h"

class Quaternion
{
public:
	Quaternion();
	Quaternion(const Vector2D& cpy);
	Quaternion(const Vector3D& cpy);
	Quaternion(const Quaternion& cpy);
	Quaternion(double x, double y, double z, double w = 0);		//Trying to decide if I want W at the start or end (if at start I can't give it a default value)

	Quaternion operator=(Quaternion q2);
	Quaternion operator+(Quaternion q2);
	Quaternion operator-(Quaternion q2);
	Quaternion operator*(Quaternion q2);
	Quaternion operator*(double scalar);

	bool operator==(Quaternion q2);

	Quaternion normalize(); //trying to decide if it should normalize THIS vector or JUST return a normalized Quaternion.

	//TODO: w = 0 or w = 3
	double &operator()( int ); //retuns lvaule
	double operator()( int ) const; //returns rvalue
private:
	double w, x, y, z;
	double angle;
};  

std::ostream& operator<<(std::ostream& out, Quaternion q2); //global operator overloading

#endif // !QUATERNION_H
