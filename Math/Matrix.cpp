#include "Matrix.h"

Matrix operator *(double scale, Matrix &v)
{
	return v * scale;
}

Vector3D operator *(Matrix &m, Vector3D &v)
{
	if ( m.getRow() != 3 || m.getCol() != 3 )
	{
		throw "Out of Range";
	}
	return Vector3D(m(0,0)*v(1)+m(0,1)*v(2)+ m(0,2)*v(2), m(1,0)*v(1)+m(1,1)*v(2)+ m(1,2)*v(3), m(2,0)*v(1)+m(2,1)*v(2)+ m(2,2)*v(3));
}

Matrix::Matrix()
{
	row = 1;
	col = 1;
	vec.resize(row * col);
	//TODO: Initialize to Identity
}

Matrix::Matrix(int size)
{
	row = size > 0 ? size : 1;
	col = size > 0 ? size : 1;
	vec.resize(size * size);
	//TODO: Initialize to Identity
}

Matrix::Matrix(int r, int c)
{
	row = r > 0 ? r : 1;
	col = c > 0 ? c : 1;
	vec.resize(r * c);
	//TODO: Initialize to Identity
}

Matrix::Matrix(const Vector2D& v)
{
	row = 2;
	col = 1;
	vec.resize(row * col);
	vec[0] = v(0);
	vec[1] = v(1);
}

Matrix::Matrix(const Vector3D& v)
{
	row = 3;
	col = 1;
	vec.resize(row * col);
	vec[0] = v(0);
	vec[1] = v(1);
	vec[2] = v(2);
}

Matrix::Matrix(const Vector3D& v, int dummy)
{
	row = 4;
	col = 1;
	vec.resize(row * col);
	vec[0] = v(0);
	vec[1] = v(1);
	vec[2] = v(2);
	vec[3] = 1;
}

Matrix::Matrix(double angle, const Vector3D& v)
{
	Vector3D work = v;
	angle = degToRad(angle);

	int size = 3;

	row = col = size;

	Matrix S(3,3);
	Matrix I(size);

	work = work.normalize();

	vec.resize(row * col);

	S(0,1) = -work(2);
	S(0,2) = work(1);
	S(1,0) = work(2);
	S(1,2) = -work(0);
	S(2,0) = -work(1);
	S(2,1) = work(0);

	*this = I + sin(angle)*S+(1-cos(angle))*S*S;
}

Matrix::Matrix(double angle, Axis axis)
{
	angle = degToRad(angle);
	row = col = 3;
	vec.resize(row * col);

	switch (axis)
	{
	case X_AXIS:
		vec[0] = 1;
		vec[1] = 0;
		vec[2] = 0;
		vec[3] = 0;
		vec[4] = cos(angle);
		vec[5] = -sin(angle);
		vec[6] = 0;
		vec[7] = sin(angle);
		vec[8] = cos(angle);
		break;
	case Y_AXIS:
		vec[0] = cos(angle);
		vec[1] = 0;
		vec[2] = sin(angle);
		vec[3] = 0;
		vec[4] = 1;
		vec[5] = 0;
		vec[6] = -sin(angle);
		vec[7] = 0;
		vec[8] = cos(angle);
		break;
	case Z_AXIS:
		vec[0] = cos(angle);
		vec[1] = -sin(angle);
		vec[2] = 0;
		vec[3] = sin(angle);
		vec[4] = cos(angle);
		vec[5] = 0;
		vec[6] = 0;
		vec[7] = 0;
		vec[8] = 1;
		break;
	default:
		break;
	}
}

Matrix::Matrix(double angle)
{
	angle = degToRad(angle);
	row = col = 2;
	vec.resize(row * row);
	vec[0] = cos(angle);
	vec[1] = -sin(angle);
	vec[2] = sin(angle);
	vec[3] = cos(angle);
}

Matrix::Matrix(const Matrix& m, Vector3D& v)
{
	row = col = 4;
	vec.resize(row * col);
	vec[0] = m(0,0);
	vec[1] = m(0,1);
	vec[2] = m(0,2);
	vec[3] = v(1);
	vec[4] = m(1,0);
	vec[5] = m(1,1);
	vec[6] = m(1,2);
	vec[7] = v(2);
	vec[8] = m(2,0);
	vec[9] = m(2,1);
	vec[10] = m(2,2);
	vec[11] = v(3);
	vec[12] = 0;
	vec[13] = 0;
	vec[14] = 0;
	vec[15] = 1;
}

Matrix Matrix::operator+(const Matrix& m2)
{
	//TODO: Complete
	return Matrix();
}

Matrix Matrix::operator-(const Matrix& m2)
{
	//TODO: Complete
	return Matrix();
}

Matrix Matrix::operator*(const Matrix& m2)
{
	//TODO: Complete
	return Matrix();
}

Matrix Matrix::operator*(double scale)
{
	Matrix res(row, col);
	for(int i=0; i < row; i++)
		for(int j = 0; j < col; j++)
			res(i, j) = scale * vec[i * col + j];
	return res;
}

int Matrix::getRow()
{
	return row;
}

int Matrix::getCol()
{
	return col;
}

double & Matrix::operator()( int r, int c)
{
	if ( r < 0 || r >= row || c < 0 || c >= col)
	{
		throw "Out of Range";
	}

	return vec[r * col + c];
}

double Matrix::operator()( int r, int c) const
{
	//if ( r < 0 || c < 0 || r * c > vec.size())
	if ( r < 0 || r >= row || c < 0 || c >= col)
	{
		throw "Out of Range";
	}

	return vec[r * col + c]; 
}

std::ostream & operator <<(std::ostream & out, Matrix & v)
{
	out.setf(std::ios_base::fixed, std::ios_base::floatfield);
	out.precision(4);

	for(int i=0; i<v.row; i++)
	{
		out <<" | ";
		for(int j = 0; j < v.col-1; j++)
		{
			out  << v.vec[i * v.col + j] << std::setw(10);
		}
		out << v.vec[i * v.col + v.col-1] <<" | "<< std::endl;
	}

	return out;
}
