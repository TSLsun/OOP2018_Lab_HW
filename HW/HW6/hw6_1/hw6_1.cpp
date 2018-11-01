#include "PFArrayD.h" 
#include <iostream>

using namespace std;

void testPFArrayD(); //Conducts one test of the class PFArrayD.

int main()
{
    cout << "This program tests the class PFArrayD.\n";
    char ans;
    do
    {
        testPFArrayD();
        cout << "Test again? (y/n) ";
        cin >> ans;
    } while ((ans == 'y') || (ans == 'Y'));

    return 0;
}

void testPFArrayD()
{
    int cap;
    cout << "Enter capacity of this partially filled array: ";
    cin >> cap;
    PFArrayD pfa1(cap);
    cout << "Capacity for pfa1: " << pfa1.getCapacity() << endl;
    cout << "Elements used in pfa1: " << pfa1.getNumberUsed() << endl;
    cout << "Enter up to " << cap << " nonnegative numbers.\n";
    cout << "Place a negative number at the end.\n";
   
    double next;
    cin >> next;
    while ((next >= 0) && (!pfa1.full()))
    {
        pfa1.addElement(next);
        cin >> next;
    }

    cout << "Capacity for pfa1: " << pfa1.getCapacity() << endl;
    cout << "Elements used in pfa1: " << pfa1.getNumberUsed() << endl;
    print(cout, pfa1);
   
    pfa1.emptyArray();
    cout << "Capacity for pfa1: " << pfa1.getCapacity() << endl; 
    cout << "Elements used in pfa1: " << pfa1.getNumberUsed() <<endl;
}
