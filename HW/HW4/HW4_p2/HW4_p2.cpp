#include <iostream>
#include "PersonVector.h"

int main()
{
    int n;
    std::cout << "How many people to generate? ";
    std::cin >> n;
    PersonVector pv;
    pv.addPersons(n);
    pv.displayPersons();

    return 0;
}
