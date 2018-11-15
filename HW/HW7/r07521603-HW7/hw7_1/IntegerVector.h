#ifndef INTEGERVECTOR_H
#define INTEGERVECTOR_H

#include <iostream>
#include <vector>
class IntegerVector
{

public:
    
    IntegerVector() { std::cout<<"I am a default constructor.\n"; }
    IntegerVector(unsigned nelems);
    IntegerVector(unsigned start, unsigned end);
    IntegerVector(const IntegerVector& a);
    std::vector<int> getIntV();
	IntegerVector intersection(const IntegerVector& a);	

private:
        
    std::vector<int> intV;
    
};

std::ostream& print(std::ostream&, IntegerVector);

#endif
