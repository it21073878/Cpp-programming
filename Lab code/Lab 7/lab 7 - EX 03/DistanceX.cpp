#include<iostream>
#include "DistanceX.h"

using namespace std;

DistanceX::DistanceX() {
	inches = 0;
	feet = 0;
}

DistanceX::DistanceX(int ft, float inc) {

	inches = inc;
	feet = ft;

}

void DistanceX::inputDistance() {

	cout << "Feet = ";
	cin >> feet;
	cout << "Inches = ";
	cin >> inches;

}
void DistanceX::addDistance(DistanceX d1, DistanceX d2) {

	inches = d2.inches + d1.inches;
	if (inches >= 12.0) 
	{
		inches = inches - 12.0;
		feet++;
	}

	feet = feet + (d2.feet + d1.feet) ;

}


void DistanceX::printDistance() {

	cout << "Feet = " << feet << endl;
	cout << "Inches = " << inches << endl;

}

DistanceX::~DistanceX() {

	cout << "Distance deleted" << endl;
}