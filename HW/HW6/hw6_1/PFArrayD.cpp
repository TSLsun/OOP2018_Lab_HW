#include "PFArrayD.h"

unsigned PFArrayD::getCapacity()
{ 
    return this->cap;
}
unsigned PFArrayD::getNumberUsed()
{
    return this->used;
}
void PFArrayD::addElement(double e)
{
    arr[used] = e;
    used += 1;
}
void PFArrayD::emptyArray()
{
    delete[] arr;
    arr = new double[cap];
    used = 0;
}

bool PFArrayD::full()
{
    return used >= cap;
}

std::ostream& print(std::ostream& strm, const PFArrayD& pfa)
{
    strm << "Element in array: ";
    for (int i=0; i!=pfa.used; i++)
    {
        strm << pfa.arr[i] << " ";
    }
    strm << "\n";
    return strm;
}
