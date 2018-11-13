#include <iostream>
#include <list>

using namespace std;


int main()
{
    cout << "Please input the number, N: ";
    unsigned N;
    cin >> N;
    
    list<unsigned> numList;
    for (unsigned i=2; i<=N; i++)
        numList.push_back(i);

    cout << "Original data:\n";
    for (auto e:numList)
        cout << e << " ";
    cout << endl;

    auto it = numList.begin();
    while(it != numList.end())
    {
        auto erase_it = it;
        erase_it++;
        while(erase_it != numList.end())
        {
            if( (*erase_it) % (*it) == 0)
                erase_it = numList.erase(erase_it);
            else 
                erase_it++;
        } 

        cout << "After erasing with the base \"" << *it << "\":" << endl;
        for(auto i = numList.cbegin(); i!=numList.cend(); i++)
            cout << *i << " ";
        cout << endl;
       
        it++;        
    }
    cout << "The primes within " << N << " are listed in the following:\n";
    for(auto i = numList.cbegin(); i!=numList.cend(); i++)
        cout << *i << " ";
    cout << endl;

    return 0;
}
