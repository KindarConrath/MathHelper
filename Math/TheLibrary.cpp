#include <cmath>

#include "TheLibrary.h"

double degToRad(double degree)
{
	return (degree/180) * PI;
}

double radToDeg(double radian)
{
	return (radian/PI) * 180;
}