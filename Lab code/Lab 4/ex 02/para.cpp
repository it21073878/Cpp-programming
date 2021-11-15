#include<iostream>
#include<iomanip>
#include"para.h"

using namespace std;

void circleArea(circle C, float& cArea)
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

void recpera(rec& R, float& pera)
{
	pera = R.length * 2 + (R.width * 2);
}

void cost(float& pric, float& pera)
{
	cout << "Enter  the cost per unit(in meters) : ";
	cin >> pric;

	pric = pric * pera;

}