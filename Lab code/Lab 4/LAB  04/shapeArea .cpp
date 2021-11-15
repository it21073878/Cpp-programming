#include<iostream>
#include<iomanip>
#include "shapeArea.h"

float areaofCircle(cir C)
{
	return (22.0 / 7) * C.rad * C.rad;
}

float areaofRectangle(rec R)
{
	return R.length * R.width;
}

float areaofSquare(sqr S)
{
	return S.length * S.length;
}
