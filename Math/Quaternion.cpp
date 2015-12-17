#include "Quaternion.h"

Quaternion::Quaternion()
{
	x = y = z = w = 0;
}

Quaternion::Quaternion(const Vector2D& cpy)
{
	x = cpy(0);
	y = cpy(1);
	z = w = 0;
}

Quaternion::Quaternion(const Vector3D& cpy)
{
	x = cpy(0);
	y = cpy(1);
	z = cpy(2);
	w = 0;
}

Quaternion::Quaternion(const Quaternion& cpy)
{
	x = cpy(0);
	y = cpy(1);
	z = cpy(2);
	w = cpy(3);
}

Quaternion::Quaternion(double nX, double nY, double nZ, double nW)		//Trying to decide if I want W at the start or end (if at start I can't give it a default value)
{
	x = nX;
	y = nY;
	z = nZ;
	w = nW;
}

Quaternion Quaternion::operator=(Quaternion q2)
{
	x = q2(0);
	y = q2(1);
	z = q2(2);
	w = q2(3);
	return *this;
}

Quaternion Quaternion::operator+(Quaternion q2)
{
	//TODO: Compete
	return Quaternion();
}

Quaternion Quaternion::operator-(Quaternion q2)
{
	//TODO: Compete
	return Quaternion();
}

Quaternion Quaternion::operator*(Quaternion q2)
{
	//TODO: Compete
	return Quaternion();
}

Quaternion Quaternion::operator*(double scalar)
{
	//TODO: Compete
	return Quaternion();
}

bool Quaternion::operator==(Quaternion q2)
{
	//TODO: Compete
	return false;
}

Quaternion Quaternion::normalize() //trying to decide if it should normalize THIS vector or JUST return a normalized Quaternion.
{
	//TODO: Compete
	return Quaternion();
}

double &Quaternion::operator()( int index)
{
	switch(index)
	{
	case 0:
		return x;
		break;
	case 1:
		return y;
		break;
	case 2:
		return z;
		break;
	case 3:
		return w;
		break;
	default:
		throw "Out of Range";
	}
}

double Quaternion::operator()( int index) const
{
	switch(index)
	{
	case 0:
		return x;
		break;
	case 1:
		return y;
		break;
	case 2:
		return z;
		break;
	case 3:
		return w;
		break;
	default:
		throw "Out of Range";
	}
}

std::ostream& operator<<(std::ostream& out,Quaternion q2)//overload the ostream operator for easy and readble printing
{
	out << "(" << q2(0) << "," << q2(1) << "," << q2(2) << "," << q2(3) << ")";
	return  out;
}