#ifndef PERSON_H
#define PERSON_H

#include <iostream>

class Person
{
	friend std::istream& operator>> (std::istream& s, Person& p);
private:
	float weight;
	float height;
public:
	Person() { }
	Person(const float& w, const float& h): weight(w), height(h) { }
	float getWeight() const;
	float getHeight() const;
	bool operator< (const Person& j) const;
};

std::ostream& operator<< (std::ostream& strm, Person& p);

#endif
