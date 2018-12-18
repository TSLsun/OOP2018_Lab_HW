#ifndef RFRACTION_H
#define RFRACTION_H

#include "Fraction.h"
#include <iostream>
#include <string>
#include <cmath>

int gcd(int a, int b)
{
    a = std::abs(a); 
    while(a>0)
    {
        int tmp = b%a;
        b = a;
        a = tmp;
    }
    return b;
}

class RFraction: public Fraction
{
  public:
    RFraction() = default;
    RFraction(int n, int d)
    {
        int g = gcd(n,d);
        numer = n/g;
        denom = d/g; 
    }
    void setInput(int n, int d) override
    {
        int g = gcd(n,d);
        numer = n/g;
        denom = d/g;
    }
};


#endif
