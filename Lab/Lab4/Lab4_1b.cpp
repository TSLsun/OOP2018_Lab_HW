#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double average(vector<int> a);
double standardDev(vector<int> a);

int main()
{
    vector<int> a;
    int input;
    cout << "Input positive integers: ";
    while(cin >> input && input >= 0)
    {
        a.push_back(input);
        
    }
//    for (auto& e:a)
//        cout<<e<<" ";
    cout << "The result:\n";
    cout << "Average = " << average(a) << "\n";
    cout << "Standard deviation = " << standardDev(a) << "\n";

    return 0;
}


double average(vector<int> a)
{
    double sum = 0;
    for (int i=0; i!=a.size(); i++)
        sum += a[i];
    return sum/a.size();
}

double standardDev(vector<int> a)
{
    double avg = average(a);
    double sum = 0;
    for (int i=0; i!=a.size(); i++)
    {
        sum += pow(a[i]-avg, 2);
    }

    return sqrt(sum/a.size());
}
