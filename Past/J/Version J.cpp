#include "Plane.h"
#include<iostream>
using namespace std;

int main()
{
    char name[20];
    Plane p1, p2, p3, p4;

    p1.setPlaneDetails(1, "John", "USA");
    p2.setPlaneDetails(2, "Georage", "UK");
    p3.setPlaneDetails(3, "Hentry", "USA");
    p4.setPlaneDetails(4, "Ronald", "UAE");

    cout << "Input new pilot of plane 1 : ";
    cin >> name;
    p1.getDestination(name);

    cout << "Input new pilot of plane 2 : ";
    cin >> name;
    p2.getDestination(name);

    cout << "Input new pilot of plane 2 : ";
    cin >> name;
    p3.getDestination(name);

    cout << "Input new pilot of plane 3 : ";
    cin >> name;
    p4.getDestination(name);


    p1.displayPlaneDetails();
    p2.displayPlaneDetails();
    p3.displayPlaneDetails();
    p4.displayPlaneDetails();

    return 0;
}

