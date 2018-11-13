#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person
{
private:
    std::string fn;
    std::string ln;
public:
    Person() { }
    Person(const std::string& f, const std::string& n): fn(f), ln(n) { }    
    std::string firstname() const;
    std::string lastname() const;
};

inline std::string Person::firstname() const
{
    return fn;    
}
inline std::string Person::lastname() const
{
    return ln;    
}

std::ostream& operator << (std::ostream& s, const Person& p)
{
    s << "[" << p.firstname() << " " << p.lastname() << "]";
    return s;
}

#endif
