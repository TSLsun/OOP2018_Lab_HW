#include <map>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef std::pair<string, int> myPair;

int main()
{
    map<string, int> games;
    bool done = false;
    while (!done)
    {
        string name;
        int price;
        cout << "Game name: ";
        cin >> name;
        if(games.find(name)!=games.end())
        {
            cout << "Already has this game!\n";
            continue;
        }
            cout << "What is " << name << "'s price? ";  
        cin >> price;
        games[name] = price;
        cout << "Continue add game (y/n)? ";
        char c;
        cin >> c;
        if(c=='y')
            continue;
        else
            done = true;
    }
    vector<myPair> sortedMap(games.begin(), games.end());
    sort(sortedMap.begin(), sortedMap.end(),
         [](const myPair& l, const myPair& r){return l.second < r.second;});
    for(auto& e: sortedMap)
        cout << "Game " << e.first << " costs " << e.second << endl;
    return 0;
}
