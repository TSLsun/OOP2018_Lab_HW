#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cout << "Enter an integer (! to quit):";
    while(cin >> s && s != "!")
    {
        long long length = s.length();
        for (int i = length; i>=0; i=i-3)
        {
            if(i==4 && s[0]=='-') continue;
            if(i>3)
            {
                s.insert(i-3, ",");
            }

        }
        cout << "The integer with comma is " << s << endl;
        cout << "Enter an integer (! to quit):";  
    }

    return 0;
}
