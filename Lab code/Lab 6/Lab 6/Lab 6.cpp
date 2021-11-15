#include <iostream>
#include "Circle.h"
#include "RectangleX.h"
#include "Square.h"

using namespace std;
int main()
{
	double cirR , recL , recW , sqrL ,  bigrecW, bigsqrL , totalArea;

	Circle c0;
	RectangleX r0 , r1;
	Square s0;

	cout << "Enter radius of Circle : ";
	cin >> cirR;

	cout << "Enter Length of Rectangle : ";
	cin >> recL;
	cout << "Enter Width of Rectangle : ";
	cin >> recW;

	cout << "Enter Length of Square : ";
	cin >> sqrL ;

	cout << "Enter Length of Big Rectangle : ";
	cin >> bigsqrL ;
	cout << "Enter Width of Big Rectangle : ";
	cin >> bigrecW ;

	cout << "*********************************************" << endl << endl;;

	//Circle c1(r);
	//cout << "Area of the circle : " << c1.calArea() << endl;

	c0.setRadius(cirR);
	r0.setLength(recL);
	r0.setWidth(recW);
	s0.setlength(sqrL);
	r1.setLength(bigsqrL);
	r1.setWidth(bigrecW);

	cout << "*********************************************" << endl;
	cout << "Radius of the circle : " << c0.getRadius() << endl;
	cout << "Area of the circle   : " << c0.calArea() << endl << endl;;

	cout << "*********************************************" << endl;
	cout << "Length of the small Rectangle :  " << r0.getLength() << endl;
	cout << "Width of the small Rectangle  :  " << r0.getWidth()  << endl;
	cout << "Area of the small Rectangle   :  " << r0.calArea()   << endl << endl;;


	cout << "*********************************************" << endl;
	cout << "Length of the Square : " << s0.getlength() << endl;
	cout << "Area of the Square :  "  << s0.calArea()   << endl << endl;;


	cout << "*********************************************" << endl;
	cout << "Length of the big Rectangle :  " << r1.getLength() << endl;
	cout << "Width of the big Rectangle  :  " << r1.getWidth() << endl;
	cout << "Area of the big Rectangle   :  " << r1.calArea() << endl << endl;;


	totalArea = r1.calArea() - (c0.calArea() + s0.calArea() + r0.calArea()  );


	cout << "--------------------------------------" << endl;
	cout << "Area shown in green is : " << totalArea << endl;
	cout << "--------------------------------------" << endl;

	return 0;
}
