#include "Square.h"

void Square::setlength(double len) {

	length = len;
}

double Square::getlength() {

	return length;
}

double Square::calArea() {

	return length * length;
}