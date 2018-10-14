#include "PersonVector.h"
#include "Person.h"
#include <string>
#include <iostream>

void PersonVector::addPersons()
{
    int t;
    std::cout << "How many person(s) to add?";
    std::cin >> t;
    
    for (int i=1; i<=t; i++)
    {
        std::cout << i << " Person to add:";
        std::string name;
        int age;
        std::cin >> name >> age;
        Person p(name, age);
        this->pv.push_back(p); 
    }
}
void PersonVector::addPersons(int n)
{
    while(n--)
    {
        Person p;
        this->pv.push_back(p);
    }    
}
void PersonVector::displayPersons()
{
    std::cout << "Name\tAge\tGender\n";
    for (int i=0; i!=this->pv.size(); i++)
    {
        std::cout << pv[i].getName() << "\t" << pv[i].getAge() << "\t" << pv[i].getGender() <<  "\n";
    }
}
