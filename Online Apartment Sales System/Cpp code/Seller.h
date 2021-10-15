#include "RegisteredCustomer.h"
#include "Apartment.h"
#define SIZE 5
class Seller :public RegisteredCustomer
{
private:
    int noOfApartments;

    Apartment* sellApt[SIZE];

public:
    Seller();
    Seller(const char usName[], const char usPwd[], int id, const char name[], const char address[], const char email[], const char telno[], int pnoOfApartments);
    void addSellingApartment(Apartment* psellApt);
    void login();
    void displaySellerDetails();
    ~Seller();
};

