#include "Cat.h"
#include<cstring>
#include <iostream>

using namespace std;

void Cat::CatDetails(int id, const char name[], const char breed[])
{
	setID = id;
	strcpy_s(catName, name);
	strcpy_s(catBreed, breed);
}

void Cat::displayCatDetails()
{
	cout << "Cat ID = " << setID << endl;
	cout << "CatName =" << catName << endl;
	cout << "cat Breed = " << catBreed << endl << endl;
	cout << "Owner = " << owner << endl;
}

void Cat::setOwner(const char own[])
{
	strcpy_s(owner, own);
}
