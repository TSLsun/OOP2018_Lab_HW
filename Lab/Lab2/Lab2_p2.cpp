#include <iostream>

using namespace std;

int main()
{
    cout << "Please input the range of Celsius temperature values: ";
    int low, top;
    cin >> low >> top;

    cout << "Celsius Fahrenheit\n";

    for(int i=low; i<=top; i++)
    {
        cout << i << "\t" << i*9.0/5 + 32 << "\n";
    }


    return 0;
}
