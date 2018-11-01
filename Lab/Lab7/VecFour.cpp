#include "VecFour.h"

VecFour::VecFour(double a, double b, double c, double d)
{
    v = std::vector<double>(4);
    v[0] = a;
    v[1] = b;
    v[2] = c;
    v[3] = d; 
}

VecFour::VecFour(const VecFour& rhs)
{
    *this = rhs;
}

VecFour& VecFour::operator=(const VecFour & rhs)
{
    if(this != &rhs)
        v = rhs.v;
    return *this;
}

//inline
std::ostream& operator << (std::ostream& strm, const VecFour& vf)
{
    strm << "(";
    for (int i=0; i!=4; i++)
    {
        if(i==3)
            strm << vf.v[i] << ")";
        else
            strm << vf.v[i] << ", ";
    }
    return strm;
}

//inline
std::istream& operator >> (std::istream& strm, VecFour& vf)
{
    std::cout << "Please input a vector: ";
    double tmp;
    for (int i=0; i!=4; i++)
    {
        strm >> tmp;
        vf.v[i] = tmp;
    }   
    return strm;
}

VecFour& operator*=(VecFour& lhs, const VecFour & rhs)
{
    for (int i=0; i!=4; i++)
        lhs.v[i] = lhs.v[i] * rhs.v[i];
    return lhs;
}

VecFour operator*(double num, const VecFour& vf)
{
    VecFour tmp;
    for (int i=0 ; i!=4; i++)
        tmp.v[i] = num * vf.v[i];
    return tmp;
}

bool operator<(const VecFour& vf1, const VecFour& vf2)
{
    double sum1=0;
    double sum2=0;
    
    
    for (int i =0; i!=4; i++)
    {
        sum1 += vf1.v[i]*vf1.v[i];
        sum2 += vf2.v[i]*vf2.v[i];
    }
    return sum1 < sum2;
}
