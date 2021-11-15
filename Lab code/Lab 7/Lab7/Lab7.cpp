#include <iostream>
#include "Distance.h"
using namespace std;

int main()
{
    //EXERCISE 01

    Distance dis1;

    dis1.printDistance();

    Distance dis2(11, 6.25);
    dis2.printDistance();


    //EXRECISE 02


    Distance *dist1 = new Distance();
    dist1 -> printDistance();

    Distance* dist2 = new Distance(11 , 6.25);
    dist2->printDistance();

    delete dist1;
    delete dist2;


    return 0;
}

