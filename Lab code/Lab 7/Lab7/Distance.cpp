#include<iostream>
#include "Distance.h"

using namespace std;

Distance::Distance() {
	inches = 0;
	feet = 0;
}

Distance::Distance(int ft, float inc) {

	inches = inc;
	feet = ft;

}

void Distance::inputDistance() {

	cout << "Enter distance in feet :";
	cin >> feet;

	cout << "Enter distance in inches : ";
	cin >> inches;

}

void Distance::printDistance() {

	cout << "Feet = " << feet << endl;
	cout << "Inches = " << inches << endl;

}

Distance::~Distance() {

	cout << "Distance deleted" << endl;
}