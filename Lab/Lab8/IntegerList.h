#ifndef INTEGERLIST_H
#define INTEGERLIST_H
#include <iostream>
#include <list>
class IntegerList
{
friend std::ostream& print(std::ostream&, IntegerList);
private:
    std::list<int> ll;
public:
    IntegerList(){std::cout<<"I am a default constructor.\n";}    
    IntegerList(unsigned);
    IntegerList(unsigned, unsigned);
    IntegerList intersection(const IntegerList&);
};

std::ostream& print(std::ostream&, IntegerList);

#endif
