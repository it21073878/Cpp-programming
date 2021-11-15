#include "Puppy.h"

class GermanShepard : public Puppy
{
protected:
	char cage[20];
public:
	GermanShepard();
	GermanShepard(const char gCage[], int gpAge, int gpLifeSpan, const char gporg[], const char gpgen[], const char gptyp[], double gpWight, double gpHight);
	char* getcage();
	int getwight();
	char* getGender();
	~GermanShepard();
};

