#include <iostream>
#include <map>

using namespace std;

int main()
{
    cout << "Please input some integers, and end with non-integer input:";
    int num;
    map <int,int> count;
    while(cin >> num)
    {
        count[num]++;
    }  
    
    for (auto it=count.cbegin(); it!=count.cend(); it++)
    {
        cout << (*it).first << " occurs " <<  (*it).second 
             << (((*it).second>1) ? " times" : " time") << endl;
    }
    
    int rm;
    cout << "What number do you want to remove? ";
    cin.clear();
    cin.ignore();

    cin >> rm;
    count.erase(rm);
    cout << "After erasing " << rm << ":\n";
    for (auto it=count.cbegin(); it!=count.cend(); it++)
    {
        cout << (*it).first << " occurs " <<  (*it).second 
             << (((*it).second>1) ? " times" : " time") << endl;
    }

    return 0;
}
