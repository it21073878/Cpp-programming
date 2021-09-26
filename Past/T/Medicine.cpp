#include "Medicine.h"
#include<cstring>
#include <iostream>
#include<iomanip>
using namespace std;


void Medicine::setMedicineDetails(int id, const char name[], const char sick[], float dos) {

	medicineID = id;
	strcpy_s(medicineName, name);
	strcpy_s(sickness, sick);
	dose = dos;

};

void Medicine::displayMedicineDetails() {
	cout << "Medicine ID = " << medicineID << endl;
	cout << "Medicine Name = " << medicineName << endl;
	cout << "sickness =" << sickness << endl;
	cout << setiosflags(ios::fixed) << setprecision(2) << "Dose = " << dose << endl << endl;

};


void Medicine::setDose(float ndos) {
	dose = ndos;
};