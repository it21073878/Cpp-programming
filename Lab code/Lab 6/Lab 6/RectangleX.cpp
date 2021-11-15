#include "RectangleX.h"

void RectangleX::setLength(double le) {

	length = le;
}

void  RectangleX::setWidth(double wid) {

	width = wid;
}

double  RectangleX::getLength() {

	return length;
}

double RectangleX::getWidth() {

	return width;
}

double RectangleX::calArea() {

	return length * width;
}