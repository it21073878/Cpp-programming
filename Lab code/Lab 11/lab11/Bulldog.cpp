#include<iostream>
#include<cstring>
#include "Bulldog.h"

using namespace std;

Bulldog::Bulldog()
{
	strcpy_s(orginalOwner, " ");
}

Bulldog::Bulldog(const char bOwner[], int gpAge, int gpLifeSpan, const char gporg[], const char gpgen[], const char gptyp[], double gpWight, double gpHight) : Puppy(gpAge, gpLifeSpan, gporg, gpgen, gptyp, gpWight, gpHight)
{
	strcpy_s(orginalOwner, bOwner);
}

char* Bulldog::getOwner()
{
	return orginalOwner;
}

char* Bulldog::getGender()
{
	return gender;
}

double Bulldog::getWight()
{
	return weight;
}

Bulldog::~Bulldog()
{
	cout << "Bulldog destructor called" << endl;
}
