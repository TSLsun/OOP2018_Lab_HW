#include "IntegerVector.h"

IntegerVector::IntegerVector(unsigned nelems)
{
    for (unsigned i=0; i != nelems; i++)
        intV.push_back(i);
}
IntegerVector::IntegerVector(unsigned start, unsigned end)
{
    for (unsigned i=start; i != end; i++)
        intV.push_back(i);
}

IntegerVector::IntegerVector(const IntegerVector& a)
{
    this->intV.assign(a.intV.cbegin(), a.intV.cend());
}

std::vector<int> IntegerVector::getIntV()
{
    return this->intV;
}

IntegerVector IntegerVector::intersection(const IntegerVector& a)	
{
	IntegerVector intersectVec(a);
   
    auto it = intersectVec.intV.begin();  
    while (it!=intersectVec.intV.end())
    {
        bool exist=false; 
        for (size_t i=0; i!=this->intV.size(); i++)
        {
            if(*it == this->intV[i])
                exist = true;
        }
        if(exist)
            it++;
        else
        {
            it = intersectVec.intV.erase(it);
        }
    }  

    std::cout << "Intersection elements are: "; 
    for (size_t i=0; i!=intersectVec.intV.size(); i++)
    {
        std::cout << intersectVec.intV[i] << " ";
    }
    std::cout << std::endl;
    return intersectVec;		
}


std::ostream& print(std::ostream& strm, IntegerVector iv)
{
    strm << "The elements in the IntegerVector are: ";
    for (size_t i=0; i!=iv.getIntV().size(); i++)
    {
        strm << iv.getIntV()[i] << " ";
    }
    strm << std::endl;
    return strm;
}
