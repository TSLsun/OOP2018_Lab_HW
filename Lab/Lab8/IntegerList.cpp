#include "IntegerList.h"

IntegerList::IntegerList(unsigned nelems)
{
    for(int i=0; i!=nelems; i++)
        ll.push_back(i);
}
IntegerList::IntegerList(unsigned start, unsigned end)
{
    for(int i=start; i!=end; i++)
        ll.push_back(i);
}
std::ostream& print(std::ostream& strm, IntegerList intL)
{
    strm << "The elements in the IntegerList are:";
    for (auto i=intL.ll.cbegin(); i!=intL.ll.cend(); i++)
    {
        strm << " " << *i;
    }
    return strm;
}


IntegerList IntegerList::intersection(const IntegerList& a)
{
    IntegerList n;
    std::list<int> intersect;
    for (auto it=this->ll.cbegin(); it!=this->ll.cend(); it++)
    {
        for (auto it_a=a.ll.cbegin(); it_a!=a.ll.cend(); it_a++)
            if(*it == *it_a) 
            {
                intersect.push_back(*it);    
                break;
            }
    }
    n.ll = intersect;
    std::cout << "Intersection elements are:";
    for(auto e: n.ll) 
        std::cout << " " << e;
    std::cout << "\n";
    return n;
}
