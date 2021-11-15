#pragma once
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance(); // default constructor
	Distance(int ft, float inc); //overloade constructor
	void inputDistance();
	void printDistance();
	~Distance();
};

