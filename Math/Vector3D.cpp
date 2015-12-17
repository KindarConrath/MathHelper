#include "Vector3D.h"

Vector3D::Vector3D()
{
	x = y = z = 0;
}

Vector3D::Vector3D(double nX, double nY, double nZ)
{
	x = nX;
	y = nY;
	z = nZ;
}

Vector3D::Vector3D(const Vector2D& vec)
{
	x = vec(0);
	y = vec(1);
	z = 0;
}

Vector3D::Vector3D(const Vector3D& vec)
{
	x = vec(0);
	y = vec(1);
	z = vec(2);
}

Vector3D Vector3D::operator=(Vector2D v2)
{
	x = v2(0);
	y = v2(1);
	z = 0;

	return *this;
}

Vector3D Vector3D::operator=(Vector3D v2)
{
	x = v2(0);
	y = v2(1);
	z = v2(2);

	return *this;
}

Vector3D Vector3D::operator+(Vector3D v2)
{
	//TODO: Complete
	return Vector3D();
}

Vector3D Vector3D::operator-(Vector3D v2)
{
	//TODO: Complete
	return Vector3D();
}

Vector3D Vector3D::operator*(Vector3D v2)
{
	//TODO: Complete
	return Vector3D();
}

Vector3D Vector3D::operator*(double scalar)
{
	//TODO: Complete
	return Vector3D();
}

double Vector3D::dot(Vector3D v2)
{
	//TODO: Complete
	return 0;
}

bool Vector3D::operator==(Vector3D v2)
{
	//TODO: Complete
	return false;
}

double Vector3D::magnitude()
{
	//TODO: Complete
	return 0;
}

Vector3D Vector3D::normalize()
{
	//TODO: Complete
	return Vector3D();
}

double &Vector3D::operator()( int index)
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
	default:
		throw "Out of Range";
	}
}

double Vector3D::operator()( int index) const
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
	default:
		throw "Out of Range";
	}
}

std::ostream& operator<<(std::ostream& out,Vector3D v2)//overload the ostream operator for easy and readble printing
{
	out << "(" << v2(0) << "," << v2(1) << "," << v2(2) << ")" ;
	return  out;
}