#include "Vector2D.h"

Vector2D::Vector2D()
{
	x = y = 0;
}

Vector2D::Vector2D(const Vector2D& cpy)
{
	x = cpy(0);
	y = cpy(1);
}

Vector2D::Vector2D(double nX, double nY)
{
	x = nX;
	y = nY;
}

Vector2D Vector2D::operator=(Vector2D v2)
{
	x = v2(0);
	y = v2(1);
	return *this;
}

Vector2D Vector2D::operator+(Vector2D v2)
{
	//TODO: Complete
	return Vector2D();
}

Vector2D Vector2D::operator-(Vector2D v2)
{
	//TODO: Complete
	return Vector2D();
}

Vector2D Vector2D::operator*(double scl)
{
	//TODO: Complete
	return Vector2D();
}

double Vector2D::dot(Vector2D v2)
{
	//TODO: Complete
	return 0;
}

bool Vector2D::operator==(Vector2D v2)
{
	//TODO: Complete
	return false;
}

double Vector2D::magnitude()
{
	//TODO: Complete
	return 0;
}

Vector2D Vector2D::normalize() //trying to decide if it should normalize THIS vector or JUST return a normalized vector.
{
	//TODO: Complete
	return Vector2D();
}

double &Vector2D::operator()( int index)
{
	switch(index)
	{
	case 0:
		return x;
		break;
	case 1:
		return y;
		break;
	default:
		throw "Out of Range";
	}
}

double Vector2D::operator()( int index) const
{
	switch(index)
	{
	case 0:
		return x;
		break;
	case 1:
		return y;
		break;
	default:
		throw "Out of Range";
	}
}

std::ostream& operator<<(std::ostream& out,Vector2D v2)//overload the ostream operator for easy and readble printing
{
	out << "(" << v2(0) << "," << v2(1) << ")" ;
	return  out;
}