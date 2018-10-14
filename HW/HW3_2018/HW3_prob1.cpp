#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cctype>
#include <map>

using namespace std;

int main()
{
    string textName;
    cout << "Please input the file name.\n";
    cout  << "input here: ";
    cin >> textName;
    ifstream fin;
    fin.open(textName);
    while (!fin)
    {
        cout << "Open file error!\n";
        cout << "Please enter again: ";
        cin >> textName;
        fin.open(textName);
    } 
 
    cout << "File was opened correctly\n";
    
    vector <string> words;
    string word;
    while(fin >> word)
        words.push_back(word);
    
    // clean out the punctuation
    unsigned cnt_punc = 0;
    for (auto& word : words)
    {
       for (int i=0, len = word.length(); i != len; i++)
       {
          if(ispunct(word[i]))
          {
             cnt_punc++;
             word.erase(i--,1);
             len = word.length();
          }
          else
              word[i] = tolower(word[i]);
       }
    }
    // erase all empty words from vector
    for (int i=0, size = words.size(); i != size; i++)
    {
        if(words[i].length()==0)
        {
            words.erase(words.begin() + i);
            i--;
            size = words.size();
        }                      
    }
    cout << "Words: ";
    for (auto& e : words)
        cout << e << " ";
    cout << "\n";

    cout << "Total punctuation: " << cnt_punc << "\n";
    cout << "Total words:" << words.size() << "\n";
    cout << "\n";
    
    map<string, unsigned> word_count;   
    for (auto& e: words)
    {
        ++word_count[e];
    }
    unsigned maxCnt = 0;
    string maxCntWord = "";
    for(auto it = word_count.cbegin(); it != word_count.cend(); it++)
    {
        if(it->second > maxCnt)
        {
            maxCnt = it->second;
            maxCntWord = it->first;
        }
    }

    cout << "Word with greatest occurrence: " << maxCntWord  << "\n";
    cout << "Total count: " << maxCnt << "\n";
    
    fin.close();


    return 0;
}

