#include <iostream>
#include <map>

using namespace std;

class Person {
  private:
    string fn;
    string ln;
  public:
    Person() {}
    Person(const string& f, const string& n): fn(f), ln(n){}
    string firstname() const;
	string lastname() const;    
	
};

bool operator< (const Person& p1, const Person& p2)
{
    if(p1.lastname() != p2.lastname())
        return p1.lastname() < p2.lastname();
    else
        return p1.firstname() < p2.firstname();        
}

inline string Person::firstname() const
{
	return fn;
}
inline string Person::lastname() const
{
	return ln;
}
ostream& operator<< (ostream& s, const Person& p)
{
	s << "[" << p.firstname() << " " << p.lastname() << "]";
	return s;
}

int main()
{
	// create some persons
	Person p1("nicolai","josuttis");
	Person p2("ulli","josuttis");
	Person p3("anica","josuttis");
	Person p4("lucas","josuttis");
	Person p5("lucas","otto");
	Person p6("lucas","arm");
	Person p7("anica","holle");
	
	// insert person into collection coll
	map<Person, int> coll;
	coll[p1]++;
	coll[p2]++;
	coll[p3]++;
	coll[p4]++;
	coll[p5]++;
	coll[p6]++;
	coll[p7]++;
	
	// print elements
	cout << "map includes:" << endl;
	map<Person, int>::iterator pos;
	for (pos = coll.begin(); pos != coll.end(); ++pos)
	{
		cout << pos->first << ", " << pos->second << endl;
	}

    return 0;
}
