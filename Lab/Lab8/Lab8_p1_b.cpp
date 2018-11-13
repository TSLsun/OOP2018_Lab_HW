#include <iostream>
#include "IntegerList.h"

using namespace std;

int main()
{
    IntegerList a(3);
    IntegerList b(5);
    IntegerList c(2, 6);
    print(cout, c.intersection(b).intersection(a)) << endl;
        
    return 0;
}
