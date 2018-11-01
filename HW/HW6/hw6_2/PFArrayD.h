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
    PFArrayD(): cap(50)
    {
        std::cout << "PFArrayD()\n"; 
        arr = new double[cap];
        std::cout << "Allocate " << cap << " doubles\n";
    }
    PFArrayD(unsigned cap): cap(cap)
    {
        std::cout << "PFArrayD(unsigned)\n";
        arr = new double[cap];
        std::cout << "Allocate " << cap << " doubles\n";
    }
    // copy constructor
    PFArrayD(const PFArrayD& rhs)
    {
        std::cout << "PFArrayD(const PFArrayD&)\n";
        this->used =  rhs.used;
        this->cap = rhs.cap;
        arr = new double[cap];
        std::cout << "Allocate " << cap << " doubles\n";
        for (int i=0; i!=this->used; i++)
        {
            arr[i] = rhs.arr[i];
        }        
    }
    // assignment operator
    PFArrayD& operator=(const PFArrayD & rhs)
    {
        std::cout << "operator = (const PFArrayD&)\n";
        if(this != &rhs)
        {    
            delete[] arr;
            std::cout << "Release " << cap << " doubles\n";
            this->used =  rhs.used;
            this->cap = rhs.cap;
            arr = new double[cap];
            std::cout << "Allocate " << cap << " doubles\n";
            for (int i=0; i!=this->used; i++)
            {
                arr[i] = rhs.arr[i];
            }        
        } 
        return *this;
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
