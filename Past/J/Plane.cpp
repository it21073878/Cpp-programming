#include "Plane.h"
#include<cstring>
#include<iostream>
using namespace std;

void Plane::setPlaneDetails(int pID, const char pName[], const char det[]) {
	planeID = pID;
	strcpy_s(piolet, pName);
	strcpy_s(destination, det);

};

void Plane::displayPlaneDetails() {

	cout << "Plane ID : " << planeID << endl;
	cout << "Piolet : " << piolet << endl;
	cout << "Destination : " << destination << endl <<endl;

};

void Plane::getDestination(const char pio[]) {

	strcpy_s(piolet, pio);
};