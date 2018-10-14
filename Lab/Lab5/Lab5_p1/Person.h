#ifndef PERSON_H
#define PERSON_H
#include <string>

class Person
{
private:
    int age;
    std::string name;

public:
    Person(std::string s, int a): name(s), age(a) { }
    Person(){}

    std::string getName();
    int getAge();
};

#endif
