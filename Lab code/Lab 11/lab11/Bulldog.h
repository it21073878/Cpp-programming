#include "Puppy.h"
class Bulldog : public Puppy
{
protected:
	char orginalOwner[20];
public:
	Bulldog();
	Bulldog(const char bOwner[], int gpAge, int gpLifeSpan, const char gporg[], const char gpgen[], const char gptyp[], double gpWight, double gpHight);
	char* getOwner();
	char* getGender();
	double getWight();
	~Bulldog();
};

