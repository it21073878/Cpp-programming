//main file
#include "Cat.h"
#include <iostream>
using namespace std;


int main()
{
    char owne[20];

    Cat c1, c2, c3;

    c1.CatDetails(1, "Tiny", "Amali");
    c2.CatDetails(2, "Chinta", "Sarath");
    c3.CatDetails(3, "Toby", "Nisal");
    
    cout << "Input bread of cat 1 :";
    cin >> owne;
    c1.setOwner(owne);

    cout << "Input bread of cat 2 :";
    cin >> owne;
    c2.setOwner(owne);

    cout << "Input bread of cat 3 :";
    cin >> owne;
    c3.setOwner(owne);

    c1.displayCatDetails();
    c2.displayCatDetails();
    c3.displayCatDetails();

    return 0;
    //end
}

