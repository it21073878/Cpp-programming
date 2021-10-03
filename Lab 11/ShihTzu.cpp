#include<cstring>
#include<iostream>
#include "ShihTzu.h"
using namespace std;

ShihTzu::ShihTzu()
{
	strcpy_s(country, " ");
}

ShihTzu::ShihTzu(const char sCountry[], int gpAge, int gpLifeSpan, const char gporg[], const char gpgen[], const char gptyp[], double gpWight, double gpHight) : Puppy(gpAge, gpLifeSpan, gporg, gpgen, gptyp, gpWight, gpHight)
{
	strcpy_s(country, sCountry);
}

char* ShihTzu::getCountry()
{
	return country;
}

char* ShihTzu::getGender()
{
	return gender;
}

double ShihTzu::getWight()
{
	return weight;
}

ShihTzu::~ShihTzu()
{
	cout << "ShihTzu destructor called" << endl;
}
