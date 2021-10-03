#include <cstring>
#include<iostream>
#include "GermanShepard.h"
using namespace std;

GermanShepard::GermanShepard()
{
	strcpy_s(cage, " ");
}

GermanShepard::GermanShepard(const char gCage[] , int gpAge , int gpLifeSpan , const char gporg[], const char gpgen[], const char gptyp[], double gpWight, double gpHight): Puppy ( gpAge,  gpLifeSpan,  gporg,  gpgen, gptyp,  gpWight,  gpHight)
{
	strcpy_s(cage, gCage);

}

char* GermanShepard::getcage()
{
	return cage ;
}

GermanShepard::~GermanShepard()
{
	cout << "German Shepard destructor called" << endl;
}
int GermanShepard::getwight() {
	return weight;
}

char* GermanShepard::getGender()
{
	return gender;
}
