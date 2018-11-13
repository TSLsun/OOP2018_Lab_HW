#include <iostream>
#include "IntegerList.h"

using namespace std;

int main()
{
    IntegerList a;
    IntegerList b(5);
    print(cout, b) << endl;
    IntegerList c(2, 5);
    print(cout, c) << endl;
        
    return 0;
}
