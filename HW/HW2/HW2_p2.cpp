#include <iostream>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;


double dist (double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}

int main ()
{
    srand(time(NULL));
    const double PI = 3.1415926535897932384626;
    // cout << "Use a const double to prescribe the value PI=" << setprecision(9) << PI << "\n";
    cout << "Use a const double to prescribe the value PI=3.14159265\n"; 
    cout << "Enter the number of throw: "; 
    int num;
    cin >> num;
    int count = 0;
    for (int i = 0; i!= num; i++)
    {
        if(dist((double)rand()/(RAND_MAX)*2 - 1, (double)rand()/(RAND_MAX)*2 - 1, 0, 0) < 1)
            count++;
    }
    double predictPI = (double)count/num * 4;
    double err = abs((predictPI - PI) / PI) * 100;
    cout << "PI = " << predictPI << "\t" << "error%= " << err << "\n";

    return 0;
}
