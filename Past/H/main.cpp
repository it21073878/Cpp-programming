#include "Guest.h"
#include<iostream>

using namespace std;

int main()
{
	/*
	Guest g0;

	Guest g1 (1212 , "Jared", 4500 , 4);
	Guest g2(1122, "Ben", 3000, 3);
	Guest g3(1234, "Ruby", 5750, 2);
	*/

	Guest* g1 = new Guest(1212, "Jared", 4500, 4);
	Guest* g2 = new Guest(1122, "Ben", 3000, 3);
	Guest* g3 = new Guest(1234, "Ruby", 5750, 2);

	g1->displayGustDetails();
	g2->displayGustDetails();
	g3->displayGustDetails();
	
	delete g1;
	delete g2;
	delete g3;
	
	return 0;
}