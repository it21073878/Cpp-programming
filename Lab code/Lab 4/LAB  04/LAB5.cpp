#include<iostream>
#include<iomanip>
#include "shapeArea.h"


using namespace std;
int main()
{
	struct cir c1;
	struct rec r1, r2;
	struct sqr s1;

	float r1Area, r2Area, cArea, sArea, Tot;
	//GETTING INPUT 

	//(1) Circle
	cout << "Enter Radius of circle : ";
	cin >> c1.rad;

	//(2) Rectangle (inside)
	cout << "Enter Length of Rectangle : ";
	cin >> r1.length;

	cout << "Enter Width of Rectangle : ";
	cin >> r1.width;

	//(3) Square
	cout << "Enter Length of Square : ";
	cin >> s1.length;

	//(4) Rectangle (Outside Yard)
	cout << "Enter Length of Rectangle yard : ";
	cin >> r2.length;

	cout << "Enter Width of Rectangle yard : ";
	cin >> r2.width;

	//FUNCTION CALLING
	cArea = areaofCircle(c1);
	r1Area = areaofRectangle(r1);
	r2Area = areaofRectangle(r2);
	sArea = areaofSquare(s1);

	//CALCULATION

	Tot = r2Area - (cArea + r1Area + sArea);

	cout
		<< "Total Area of Green coloured shape is : "
		<< setiosflags(ios::fixed) << setprecision(3) << Tot;


	return 0;
}