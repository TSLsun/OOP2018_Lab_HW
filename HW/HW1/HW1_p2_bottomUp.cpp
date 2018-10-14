#include <iostream>

long F[3];

long Fib(long n)
{
    if(n==0) return 0;
    else if(n==1) return 1;
    else
    {
        F[0] = 0;
        F[1] = 1;
        for (long i=2; i<=n; i++)
        {
            F[2] = F[0] + F[1];
            F[0] = F[1];
            F[1] = F[2];
        }
        return F[2];
    }
}
 
int main()
{
    std::ios::sync_with_stdio(false);
//    std::cin.tie(0);

    std::cout << "Please input the n number: ";
    long n;
    std::cin >> n;
    if (n<0) 
        std::cout << "The Fibonacci number is: -1\n";
    else 
        std::cout << "The Fibonacci number is: " << Fib(n) << std::endl;



    return 0;
}
