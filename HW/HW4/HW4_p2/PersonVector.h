#ifndef PERSONVECTOR_H
#define PERSONVECTOR_H 

#include <string>
#include <vector>
#include "Person.h"

class PersonVector
{
private:
    std::vector<Person> pv;
public:
    void addPersons();
    void addPersons(int n);
    void displayPersons();
};


#endif
