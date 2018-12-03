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
    cout << "Enter a few word: ";
    istream_iterator<string> in_iter(cin);
    istream_iterator<string> eof;
    vector<string> vec(in_iter, eof);
    cout << "Output the words in a seperate line with an ending !:\n";
    ostream_iterator<string> out(cout, "!\n");
    copy(vec.begin(), vec.end(), out); 

    list<string> coll;
    copy(vec.begin(), vec.end(), front_inserter(coll)); 
    
    cout << "reversing text to a list container:\n"; 
    for(auto e:coll)
       cout << e << " ";
    cout << endl; 
    
    ofstream file("reverse.txt");
    ostream_iterator<string> out_it(file, " ");
    copy(coll.begin(), coll.end(), out_it); 
    
    cout << "list container writing to file: reverse.txt\n"; 

    return 0;
}
