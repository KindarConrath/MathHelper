////////////////////////////////////////////////////////////////////
// Matrix Mathematix Library                                      //
// Part of Games Math library                                     //
// Authors: KindarConrath                                        //
////////////////////////////////////////////////////////////////////

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
	Matrix(int r, int c);
	Matrix(Vector2D& v);	//2D Vector
	Matrix(Vector3D& v);	//3D Vector
	Matrix(Vector3D& v, int dummy); //3D Vector in 4x1 for Homogenous vector multiplication
	Matrix(double angle, Vector3D& v); //Rotational matrix with axis of rotation
	//Matrix(double angle, Axis axis); //Defined axis
	Matrix(double angle); //2d Rotation Matrix
	Matrix(Matrix& m, Vector3D& v); //Homogenous Matrix

	Matrix operator+(Matrix& m2);
	Matrix operator-(Matrix& m2);
	Matrix operator*(Matrix& m2);

	Matrix operator*(double scale);

	int getRow();
	int getCol();

	double &operator()( int row, int col); //returns lvalue
	double operator()( int row, int col) const ;  //returns rvalue
private:
	int row, col;
	std::vector <double> vec;
};

//Didn't really know where to put these, as I can't put them in "TheLibrary" because then it would need to include Quaternion and Matrix, and Cyclical dependancies are a no.
Quaternion matrixToQuaternion(Matrix m);
Matrix QuaternionToMatrix(Quaternion q);

#endif // !MATRIX_H