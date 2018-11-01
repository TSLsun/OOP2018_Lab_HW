#include "PFArrayD.h" 
#include <iostream>

using namespace std;

int main()
{
    PFArrayD pfa1;
    pfa1.addElement(1.0);
    pfa1.addElement(2.0);
    cout << "Capacity for pfa1: " << pfa1.getCapacity() << endl;
    cout << "Elements used in pfa1: " << pfa1.getNumberUsed() << endl;
    PFArrayD pfa2(30);
    pfa2.addElement(3.0);
    cout << "Capacity for pfa2: " << pfa2.getCapacity() << endl;
    cout << "Elements used in pfa2: " << pfa2.getNumberUsed() << endl;
    PFArrayD pfa3 = pfa2;
    cout << "Capacity for pfa3: " << pfa3.getCapacity() << endl;
    cout << "Elements used in pfa3: " << pfa3.getNumberUsed() << endl;
    pfa3 = pfa1;
    cout << "Capacity for pfa3: " << pfa3.getCapacity() << endl;
    cout << "Elements used in pfa3: " << pfa3.getNumberUsed() << endl;
    print(cout, pfa3);
    return 0;
}
