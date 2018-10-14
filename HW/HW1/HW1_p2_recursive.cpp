#include <iostream>

long Fib(long n)
{
    if(n<0) return -1;
    else
    {
        if(n==0) return 0;
        else if(n==1) return 1;
        else
        {
            return Fib(n-1) + Fib(n-2);
        }
    }
}



int main()
{
    std::cout << "Please input the n number: ";
    long n;
    std::cin >> n;
    std::cout << "The Fibonacci num is: " << Fib(n) << std::endl;

    return 0;
}
