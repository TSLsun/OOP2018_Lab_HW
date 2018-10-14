#include "Person.h"
#include <string>
#include <ctime>
#include <cstdlib>

std::string Person::getName()
{
    return this->name;
}

int Person::getAge()
{
    return this->age;
}

bool Person::getGender()
{
    return this->gender;
}

Person::Person()
{
    static bool seeded = false;
    if(!seeded)
    {
        srand(time(0));
        seeded = true;
    }
    this->age = rand() % 100;
    this->gender = rand() % 2;
    this->name = this->gender ? "John" : "Jane"; 
    
}
