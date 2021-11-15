#include<iostream>
#include<iomanip>

struct Cir {
	float rad;
};

struct Rec {
	float length, width;
};

struct Sqr {
	float length;
};


float areaofCircle(Cir C );
float areaofRectangle(Rec R);
float areaofSquare(Sqr S);


using namespace std;

int main()
{
	struct Cir C1;
	struct Rec R1, R2;
	struct Sqr S1;
		
	float r1Area, r2Area, cArea, sArea , Tot;
	//GETTING INPUT 

	//(1) Circle
	cout << "Enter Radius of circle : ";
	cin >> C1.rad;
	
	//(2) Rectangle (inside)
	cout << "Enter Length of Rectangle : ";
	cin >> R1.length;

	cout << "Enter Width of Rectangle : ";
	cin >> R1.width;

	//(3) Square
	cout << "Enter Length of Square : ";
	cin >> S1.length;

	//(4) Rectangle (Outside Yard)
	cout << "Enter Length of Rectangle yard : ";
	cin >> R2.length;

	cout << "Enter Width of Rectangle yard : ";
	cin >> R2.width;

	//FUNCTION CALLING
	cArea  = areaofCircle(C1);
	r1Area = areaofRectangle(R1);
	r2Area = areaofRectangle(R2);
	sArea  = areaofSquare(S1);

	//CALCULATION

	Tot = r2Area - (cArea + r1Area + sArea);

	cout 
		<<"Total Area of Green coloured shape is : "
		<<setiosflags (ios::fixed) << setprecision(3) << Tot;


	return 0;
}

float areaofCircle(Cir C)
{
	return (22.0/7) * C.rad * C.rad;
}

float areaofRectangle(Rec R)
{
	return R.length * R.width;
}

float areaofSquare(Sqr S)
{
	return S.length * S.length;
}