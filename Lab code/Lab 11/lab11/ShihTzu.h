#include "Puppy.h"
class ShihTzu : public Puppy
{
protected:
	char country[20];
public:
	ShihTzu();
	ShihTzu(const char sCountry[], int gpAge, int gpLifeSpan, const char gporg[], const char gpgen[], const char gptyp[], double gpWight, double gpHight);
	char* getCountry();
	char* getGender();
	double getWight();
	~ShihTzu();

};

