#include "Apartment.h"
#define SIZE 5
class Staff
{
private:
	int staffID;
	char staffName[20];
	char staffEmail[20];
	char staffNumber[10];
	char staffUsername[20];
	char staffPassword[20];

	Apartment* apt[SIZE];

public:
	Staff();
	Staff(int pstaffID, const char pstaffName[], const char pstaffEmail[], const char pstaffNumber[], const char pstaffUsername[], const char pstaffPassword[]);
	void login(const char stfUsername, const char stfPsword );
	void manage( Apartment* papt);
	~Staff();

};

