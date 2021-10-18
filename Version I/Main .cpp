#include "Item.h"
#include <iostream>

using namespace std;

int main()
{
    int quaty;

   
    cout << "Input quantity for item 1 : ";
    cin >> quaty;
    Item it1(1001, 100.5, 5, 10);
    it1.displayItem(it1.calPrice(quaty));



    cout << "Input quantity for item 2 : ";
    cin >> quaty;
    Item it2(2045, 215.80, 10, 20);
    it2.displayItem(it2.calPrice(quaty));



    cout << "Input quantity for item 3 : ";
    cin >> quaty;
    Item it3(1569, 45.00, 7, 15);
    it3.displayItem(it3.calPrice(quaty));

 

}

