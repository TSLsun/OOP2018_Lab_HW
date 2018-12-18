#include <set>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    set<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
    
    cout << "Primes: ";
    for (auto it = primes.begin(); it!=primes.end(); it++)
        cout << *it << " ";
    cout << "\n";

    bool done = false;
    while(!done){

        cout << "Give input int smaller than or equal to 101 to test whether prime: ";
        int n;
        cin >> n;
        if (n > 101) 
        {
            cout << "wrong input!\n";
            continue;
        }
        if (primes.find(n) == primes.end())
            cout << "The input value " << n << " is NOT a prime!\n";
        else 
            cout << "The input value " << n << " is a prime!\n";

        cout << "Continue input (0 to quit)? ";
        int sign;
        cin >> sign;
        done = (sign==0) ? true : false;
    }
    return 0;
}
