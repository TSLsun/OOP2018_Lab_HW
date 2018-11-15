#include <iostream>
#include <vector>
#include <algorithm>
#include "Person.h"

using namespace std;

int main()
{
	vector<Person> pv;
	int i = 0;
	Person p;
	while(true)
	{
		cout << "Please input "<< i+1 << " Persons\' information (first weight then height): ";
		cin >> p;
        if(p.getHeight()<0 || p.getWeight()<0)
            break;
		pv.push_back(p);
		i++;
	}
	sort(pv.begin(), pv.end());
	// print out content: 
	cout << "Persons:";
	for (auto p : pv)
		cout << p;
	cout << endl;
    return 0;
}
