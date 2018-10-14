#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double average(int a[], size_t size);
double standardDev(int a[], size_t size);

int main()
{
    int a[8] = {3, 10, 40, 5, 12, 7, 22, 39};
    int size = 8;
    cout << "The result:\n";
    cout << "Average = " << average(a, size) << "\n";
    cout << "Standard deviation = " << standardDev(a, size) << "\n";

    return 0;
}


double average(int a[], size_t size)
{
    double sum = 0;
    for (int i=0; i<size; i++)
        sum += a[i];
    return sum/size;
}

double standardDev(int a[], size_t size)
{
    double avg = average(a, size);
    double sum = 0;
    for (int i=0; i<size; i++)
    {
        sum += pow(a[i]-avg, 2);
    }

    return sqrt(sum/size);
}
