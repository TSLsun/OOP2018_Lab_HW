#include <iostream>
#include "Person.h"
#include <algorithm>
#include <deque>

using namespace std;

bool personCompare(Person p1, Person p2)
{
    if(p1.lastname() != p2.lastname())
        return p1.lastname() < p2.lastname();
    else
        return p1.firstname() < p2.firstname();
}

int main()
{
    deque<Person> pDeq={
        Person("nicolai", "josuttis"), Person("ulli", "josuttis"), Person("anica", "josuttis"), Person("lucas", "josuttis"),
        Person("lucas", "otto"), Person("lucas", "arm"), Person("anica", "holle")
    };
    cout << "deque before sort():\n";
    for (auto it=pDeq.cbegin(); it!=pDeq.cend(); it++)
        cout << *it << endl; 

    sort(pDeq.begin(), pDeq.end(), personCompare );

    cout << "deque after sort():\n";
    for (auto it=pDeq.cbegin(); it!=pDeq.cend(); it++)
        cout << *it << endl; 

    return 0;
}
