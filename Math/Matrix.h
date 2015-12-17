#ifndef MATRIX_H
#define MATRIX_H

#include <vector>

#include <iostream>
#include <iomanip>

#include "Quaternion.h"
#include "TheLibrary.h"

class Matrix
{
friend Matrix operator *(double scale, Matrix &v);
friend Vector3D operator *(Matrix &m, Vector3D &v);

friend std::ostream & operator <<(std::ostream & out, Matrix & v);

public:
	Matrix();
	Matrix(int size);
	Matrix(int r, int c);
	Matrix(const Vector2D& v);	//2D Vector
	Matrix(const Vector3D& v);	//3D Vector
	Matrix(const Vector3D& v, int dummy); //3D Vector in 4x1 for Homogenous vector multiplication
	Matrix(double angle, const Vector3D& v); //Rotational matrix with axis of rotation
	Matrix(double angle, Axis axis); //Defined axis
	Matrix(double angle); //2d Rotation Matrix
	Matrix(const Matrix& m, Vector3D& v); //Homogenous Matrix

	Matrix operator+(const Matrix& m2);
	Matrix operator-(const Matrix& m2);
	Matrix operator*(const Matrix& m2);

	Matrix operator*(const double scale);

	int getRow();
	int getCol();

	double &operator()( int row, int col); //returns lvalue
	double operator()( int row, int col) const;  //returns rvalue
private:
	int row, col;
	std::vector <double> vec;
};

#endif // !MATRIX_H