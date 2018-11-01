#ifndef VECFOUR_H
#define VECFOUR_H

#include <vector>
#include <iostream>

class VecFour
{
friend std::ostream& operator << (std::ostream& strm, const VecFour& vf);
friend std::istream& operator >> (std::istream& strm, VecFour& vf);
friend VecFour operator*(double, const VecFour&);     // 2.5 * a
friend VecFour& operator*=(VecFour&, const VecFour&);     // c *= a
friend bool operator<(const VecFour& vf1, const VecFour& vf2);
private:
    std::vector<double> v;

public: 
    VecFour(){ v = std::vector<double>(4);}
    VecFour(double,double,double,double);    
    VecFour(const VecFour&);
    VecFour& operator=(const VecFour &);
   // VecFour& operator*(const VecFour &);    // a * c
};

std::ostream& operator << (std::ostream& strm, const VecFour& vf);
std::istream& operator >> (std::istream& strm, VecFour& vf);
VecFour operator*(double, const VecFour&);     // 2.5 * a
VecFour& operator*=(VecFour&, const VecFour&);     // c *= a
bool operator<(const VecFour& vf1, const VecFour& vf2);
    

#endif
