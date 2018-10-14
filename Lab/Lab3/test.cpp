#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main( )
{
    cout << "Ctrl D to break while loop...\n";
    string s;
    vector<string> text;
    while (cin >> s)
        text.push_back(s);
    for(auto e:text)
        if(e.size() > 4) cout << e << endl;

    return 0;
}
