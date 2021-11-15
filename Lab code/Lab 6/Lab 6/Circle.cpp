#include "Circle.h"
#include<iostream>

using namespace std;

/*Circle::Circle() {
	radius = 0;
}

Circle::Circle(double rad) {

	float radi;

	radius = rad;

	radi = getRadius();
	cout << "Radius of the circle : " << radius << endl;
}*/

void Circle::setRadius(double r){
	 radius = r;

}

double Circle::getRadius() {
	
	return radius;
}

double Circle::calArea() {
	return (22 / 7.0) * radius * radius;
}