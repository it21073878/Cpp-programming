#include "RegisteredCustomer.h"
#include "Apartment.h"
#define SIZE 5
class Buyer : public RegisteredCustomer
{
private:
    int noOfApartments;

    Apartment* buyApt[SIZE];

public:
    Buyer();
    Buyer(const char usName[], const char usPwd[], int id, const char name[], const char address[], const char email[], const char telno[],int pnoOfApartments);
    void addBuyingApartment(Apartment* pbuyApt);
    void login();
    void displayBuyerDetails();
    ~Buyer();
};