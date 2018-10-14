#include <iostream>

using namespace std;


int main()
{
    cout << "Please input M : ";
    double limit;
    cin >> limit;
    double sum = 0;
    int i = 1;
    while (sum <= limit)
    {
        sum += 1.0 / i;
        i += 1;
    }
    for(int j = 1; j < i-1; j++)
    {
        cout << "1/" << j << "+";         
    }
    cout << "1/" << i-1 << "=" << sum << "\n\n";

    cout << "The smallest integer N=" << i-1 << "\n";

    return 0;
}
