#pragma once
class Puppy
{
protected:
	char origine[20];
	char gender[20];
	char type[20];
	int age , lifeSpane;
	double weight;
	double hight;

public:
	Puppy();
	Puppy(int pAge , int pLifeSP , const char org[], const char gen[], const char typ[], double pWight, double pHight);
	int getAge();
	~Puppy();
};

