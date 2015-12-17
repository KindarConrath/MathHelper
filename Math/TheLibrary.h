#ifndef THELIBRARY_H
#define THELIBRARY_H

#define PI acos((long double) -1)

enum Axis
{
	X_AXIS = 0,
	Y_AXIS = 1,
	Z_AXIS = 2
};

double degToRad(double deg);
double radToDeg(double rad);

#endif // !THELIBRARY_H
