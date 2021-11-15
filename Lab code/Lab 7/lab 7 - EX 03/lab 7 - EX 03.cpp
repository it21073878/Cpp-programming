#include <iostream>
#include "DistanceX.h"
using namespace std;

int main()
{
    //EXERCISE 01

    DistanceX dist1 , dist3;

    dist1.inputDistance();

    DistanceX dist2(11, 6.25);

    dist3.addDistance(dist1 , dist2);

    

    dist1.printDistance();
    dist2.printDistance();
    dist3.printDistance();


    return 0;
}

