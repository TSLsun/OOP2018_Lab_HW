#include <iostream>
#include "RandomArray.h"

int main()
{
    RandomArray::setSeed();
    int n=5;
    RandomArray ra(n);

    while( n > 0 )
    {
        ra.loadArray();
        std::cout << "How many elements do you want in your array? ";
        std::cin >> n;
        //ra.freeArray();
        ra.setSize(n);    
    }
    
    return 0;
}
