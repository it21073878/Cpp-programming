	/*  Name - Senasinghe .T.U.
		IT number -  IT21073878
		SLIIT Malabe Group WD.07.01 */

//class implementation

#include "Patient.h"
#include<cstring>
#include <iostream>

using namespace std;

//Set Patient Details Function
void Patient::setPatientDetails(int id, const char name[])
{
	appointmentID = id;
	strcpy(patientName, name);
}

//print details 
void Patient::displayPatientDetails()
{
	cout << "AppointmentID = " << appointmentID << endl;
	cout << "Patient Name = " << patientName << endl;
	cout << "Total Payment = " << calculateTotalPayment() << endl <<endl;

}
//Set DoctorCharge Function
void Patient::setdoctorCharge(double docCharg)
{
	doctorCharge = docCharg;
}

// set hospital Charge Function
void Patient::sethospitalCharge(double hosCharg)
{
	hospitalCharge = hosCharg;
}

// Calculating Total Payment 
double Patient::calculateTotalPayment()
{
	return doctorCharge + hospitalCharge;
}
