#include "Puppy.h"
class GoldenRetriever : public Puppy
{
protected:
	char name[20];
public:
	GoldenRetriever();
	GoldenRetriever(const char gName[], int gpAge, int gpLifeSpan, const char gporg[], const char gpgen[], const char gptyp[], double gpWight, double gpHight);
	char* getName();
	char* getGender();
	double getWight();
	~GoldenRetriever();

};

