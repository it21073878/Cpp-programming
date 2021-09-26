#include"event.h"
#include<iostream>

#include<cstring>

using namespace std;

int main()
{
    char locat[20];

    Event* e1 = new Event();
    Event* e2 = new Event();
    Event* e3 = new Event();

    string location;

    e1->setEventDetails(1, "party", "red", "Nugegoda");
    e2->setEventDetails(2, "wedding", "purple", "Maharagama");
    e3->setEventDetails(3, "party", "pink", "Malabe");

    cout << "Input new location of event 1 : ";
    cin >> locat;
    e1->setEventLocation(locat);

    cout << "Input new location of event 2 : ";
    cin >> locat;
    e2->setEventLocation(locat);

    cout << "Input new location of event 3 : ";
    cin >> locat;
    e3->setEventLocation(locat);


    e1->displayEventDetails();
    e2->displayEventDetails();
    e3->displayEventDetails();

    delete e1;
    delete e2;
    delete e3;


	return 0;
}