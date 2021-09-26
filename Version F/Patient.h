	/*  Name - Senasinghe .T.U.
		IT number -  IT21073878
		SLIIT Malabe Group WD.07.01 */

// Class declarration

class Patient
{
private: //private data of the class
	int appointmentID;
	char patientName[20];
	double doctorCharge;
	double hospitalCharge;

public: // public data of the class

	void setPatientDetails(int id , const char name[] );
	void displayPatientDetails();
	void setdoctorCharge( double docCharg);
	void sethospitalCharge( double hosCharg );
	double calculateTotalPayment();


}; //end of creating class


