#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
    cout << "Please input a sequence of words:\n";
    istream_iterator<string> in_iter(cin);
    istream_iterator<string> eof;
    vector<string> vec(in_iter, eof);

    list<string> coll;
    copy_if(vec.begin(), vec.end(), back_inserter(coll), [](string s){ return s[0]=='g' || s[0]=='o'; } ); 
    
    list<string> u_coll;
    for (auto it = coll.begin(); it!=coll.end(); it++)
    {
        bool exist = false;
        for (auto e: u_coll)
            if(*it == e)
            {
                exist = true;
                break;
            }
        if(!exist)
           u_coll.push_back(*it);
    }
    ofstream file("go.txt");
    ostream_iterator<string> out_it(file, "\n");
    copy(u_coll.begin(), u_coll.end(), out_it); 
    
    cout << "The words with a leading character 'g' and 'o' are now written in a file.\n"; 

    return 0;
}
