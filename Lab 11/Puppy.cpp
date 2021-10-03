#include<cstring>
#include<iostream>
#include "Puppy.h"
using namespace std;

Puppy::Puppy()
{
}

Puppy::Puppy(int pAge, int pLifeSP , const char org[], const char gen[], const char typ[], double pWight, double pHight)
{
	age = pAge;
	lifeSpane = pLifeSP;
	strcpy_s(origine, org);
	strcpy_s(gender, gen);
	strcpy_s(type, typ);
	weight = pWight;
	hight = pHight;

}

int Puppy::getAge()
{
	return age;
}

/*void Puppy::setDetails(char org[], char gen[], char typ[], double pWight, double pHight)
{
	strcpy(origine, org);
	strcpy(gender, gen);
	strcpy(type, typ);
	weight = pWight;
	hight = pHight;
}*/

Puppy::~Puppy()
{
	cout << "Puppy destructor called" << endl;
}
