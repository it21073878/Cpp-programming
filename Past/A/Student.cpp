#include "Student.h"
#include <cstring>

// Class methods definition 

void Student::setStudentDetails(int sID, const char sName[]) {

	studentID = sID;
	strcpy_s(studentName, sName);

};

void Student::setMarksOOC(double mooc) {
	marksOOC = mooc;
};

void Student::setMarksSPM(double mspm) {
	marksSPM = mspm;
};

void Student::setMarksISDM(double misdm) {
	marksISDM = misdm;
};

double Student::getMarksOOC() {

	return marksOOC;
};

double Student::getMarksSPM() {

	return marksSPM;
};

double Student::getMarksISDM() {

	return  marksISDM;
};