#include <iostream>
#include <cstdlib>


using namespace std;

int main()
{
    int n;
    int low, top;
    cout << "Please give how many random numbers you want: ";
    cin >> n;
    cout << "Please give the lower and upper bounds: ";    
    cin >> low >> top;

    while(n--)
    {
        cout << rand() % (top - low + 1) + low << " ";
    }
    cout << "\n";
    return 0;
}
