#include<iostream>
#include<iomanip>

struct circle {
	float rad;
};

struct rec {
	float length;
	float width;
};

struct squ {
	float length;
};

void circleArea(circle C , float &cArea);
void recArea(rec R, float &rArea);
void seqArea(squ S, float& sArea);
void recpera(rec& R, float& pera);
void cost(float &pric, float &pera);

using namespace std;

int main()
{
	struct circle c1;
	struct rec r1, r2;
	struct squ s1 ;

	float cArea = 0;
	float rArea = 0;
	float sArea = 0;
	float tot , para , price ;

	// 1) CALCULATING AREA OF CIRCLE 
	cout << "Enter Radius Value of Circle : ";
	cin >> c1.rad;
	circleArea(c1, cArea);


	//2) CALCULATING AREA OF SQUARE 
	cout << "Enter length of square : ";
	cin >> s1.length;
	seqArea(s1, sArea);


	// 3) CALCULATING AREA OF RECTANGLE(Bulding area) 
	cout << "Enter length of rectangle bulding : ";
	cin >> r1.length;
	cout << "Enter width of rectangle bulding : ";
	cin >> r1.width;
	recArea(r1, rArea);

	//geting sum 
	tot = cArea + rArea + sArea;

	// 3) CALCULATING AREA OF RECTANGLE(Outside )
	cout << "Enter length of rectangle Outside yard : ";
	cin >> r2.length;
	cout << "Enter width of rectangle Outside yard : ";
	cin >> r2.width;
	recArea(r2, rArea);

	//FINAL OUTPUT
	tot = rArea - tot;
	
	cout << "Total area of grass is : "
		<< tot;

	recpera(r2, para);
	cost(price, para);

	cout << "Total cost for fence : "
		<< price;

	return 0;
}



void circleArea(circle C, float &cArea)
{
	cArea = (22.0 / 7) * C.rad * C.rad; 
}



void recArea(rec R, float& rArea)
{
	rArea = R.length * R.width;
}



void seqArea(squ S, float& sArea)
{
	sArea = S.length * S.length;
}

void recpera(rec &R, float &pera)
{
	/*cout << "Enter Length : ";
	cin >> R.length;

	cout << "Enter width : ";
	cin >> R.width;
	*/

	pera = R.length * 2 + (R.width * 2);
}

void cost(float &pric, float &pera)
{
	cout << "Enter  the cost per unit(in meters) : ";
	cin >> pric;

	pric = pric * pera;

}
