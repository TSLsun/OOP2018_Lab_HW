#ifndef PFDARRAY_H
#define PFDARRAY_H

#include <iostream>

class PFArrayD
{
friend std::ostream& print(std::ostream&, const PFArrayD &); 
private: 
    double* arr;
    unsigned used=0;
    unsigned cap;
public:
    PFArrayD(unsigned cap): cap(cap)
    {
        std::cout << "PFArrayD(unsigned)\n";
        arr = new double[cap];
        std::cout << "Allocate" << cap << "doubles\n";
    }
    ~PFArrayD()
    {
        std::cout << "~PFArrayD()\n";
        delete[] arr;
        std::cout << "Release " << cap << " doubles\n";
    }
    unsigned getCapacity();
    unsigned getNumberUsed();
    void addElement(double);
    void emptyArray();
    bool full();
};

std::ostream& print(std::ostream&, const PFArrayD &);
#endif
