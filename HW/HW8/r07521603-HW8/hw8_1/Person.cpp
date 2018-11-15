#include "Person.h"

float Person::getWeight() const
{
    return weight; 
}
float Person::getHeight() const
{
    return height;
}
bool Person::operator< (const Person& j) const
{
    if(this->height != j.height)
        return this->height < j.height;
    else 
        return this->weight < j.weight;
}
std::istream& operator>> (std::istream& strm, Person& p)
{
    strm >> p.weight >> p.height; 
    return strm;
}

std::ostream& operator<< (std::ostream& strm, Person& p)
{
	strm << "[" << p.getWeight() << ", " << p.getHeight() << "]"; 
    return strm;
}
