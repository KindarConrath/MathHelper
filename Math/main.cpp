#include <iostream>

#include "Matrix.h"
#include "Vector2D.h"
#include "Vector3D.h"
#include "Quaternion.h"
#include "TheLibrary.h"

using namespace std;

//THIS IS ONLY A TEMPORARY CONSOLE TESTER UNTIL THE GUI IS BUILT

int main()
{
	Vector2D myVec2D(2,3);
	Vector3D myVec(2,3,4);
	Quaternion myQuat(2,3,4,0);
	Matrix myMatrix(3,3);
	myMatrix(0,0) = 2;
	myMatrix(0,1) = 3;
	myMatrix(0,2) = 4;
	cout<< myQuat << endl;
	cout<< myVec << endl;
	cout<< myVec2D << endl;
	cout<< myMatrix << endl;
	cout << "Hello World" << endl;
	system("pause");
	return 0;
}