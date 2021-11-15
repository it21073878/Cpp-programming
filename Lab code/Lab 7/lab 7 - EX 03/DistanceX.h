#pragma once
class DistanceX
{
private:
	int feet;
	float inches;
public:
	DistanceX();
	DistanceX(int ft, float inc);
	void inputDistance();
	void addDistance(DistanceX d1, DistanceX d2);
	void printDistance();

	~DistanceX();
};

