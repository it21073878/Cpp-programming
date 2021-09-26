	/*  Name - Senasinghe .T.U.
		IT number -  IT21073878
		SLIIT Malabe Group WD.07.01 */

//VERSION F
//main program

#include"Patient.h"
#include <iostream>
using namespace std;


int main()
{
	Patient p1, p2; //objects

	p1.setPatientDetails(1001, "Nimal");
	p1.setdoctorCharge(1500);
	p1.sethospitalCharge(500);

	p2.setPatientDetails(1002, "Sunil");
	p2.setdoctorCharge(1700);
	p2.sethospitalCharge(500);


	p1.displayPatientDetails();
	p2.displayPatientDetails();


	return 0;
	//end of main program
}

