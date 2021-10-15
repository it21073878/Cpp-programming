#include "Booking.h"
#include "Selling.h"
#include "Seller.h"
#include "Buyer.h"
#include "Staff.h"
#include "Apartment.h"
#include "GuestUser.h"
#include "Payment.h"
#include "RegisteredCustomer.h"
#include "Report.h"

#include <iostream>
using namespace std;

int main()
{
    //---- Object creation ------
    RegisteredCustomer* rg = new RegisteredCustomer; // Object - Guest User class

    Seller* seller = new Seller("saman" , "saman560" , 560156 , "Saman Perera" ,"Kaluthara" , "sama@outlook.com" , "077856324" , 25634); // Object  - seller class

    Buyer* buyer = new Buyer ("pasidu", "pasi001", 635203, "Pasidu heshan", "kandy", "pasiya@gmail.com", "077892145", 639875); // Object - buyer class

    Apartment* apt = new Apartment(); // Object - Apartment class

    Selling* selling = new Selling(); // Object  - Selling class

    Booking* booking = new Booking(); // Object  - Booking class

    Staff* staff = new Staff(256301 , "Nimal disanayake" , "nimal@gmail.com" , "0784547894" , "Nimal00" , "nimal#221"); // Object  - Staff class

    Report* report = new Report(); // Object - Report class


    //----Method Calling------
    rg->login();
    rg->displayDetails();
   

    seller->login();
    seller->displaySellerDetails();

    buyer->login();
    buyer->displayBuyerDetails();

    apt->updateApartmentDetails();
    apt->checkAvailability();

    selling->addSelling();
    selling->displaySelPrice();

    booking->addBooking();
    booking->displayBookPrice();

    report->bookingDetailsReport();
    report->sellingDetailsReport();
    report->paymentDetailsReport();


    //----Delete Dynamic objects------
    delete rg;
    delete seller;
    delete buyer;
    delete apt;
    delete selling;
    delete booking;
    delete report;


    return 0;
}


