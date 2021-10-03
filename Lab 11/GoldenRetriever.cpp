#include<cstring>
#include<iostream>
#include "GoldenRetriever.h"
using namespace std;

GoldenRetriever::GoldenRetriever()
{
	strcpy_s(name, " ");
}

GoldenRetriever::GoldenRetriever(const char gName[], int gpAge, int gpLifeSpan, const char gporg[], const char gpgen[], const char gptyp[], double gpWight, double gpHight) : Puppy(gpAge, gpLifeSpan, gporg, gpgen, gptyp, gpWight, gpHight)
{
	strcpy_s(name, gName);
}

char* GoldenRetriever::getName()
{
	return name;
}

char* GoldenRetriever::getGender()
{
	return gender;
}

double GoldenRetriever::getWight()
{
	return weight;
}

GoldenRetriever::~GoldenRetriever()
{
	cout << "Golden Retriever destructor called" << endl;
}
