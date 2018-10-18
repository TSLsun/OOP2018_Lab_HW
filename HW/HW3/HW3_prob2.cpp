#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    ifstream fin;
    fin.open("input.txt");
    vector<string> lines;
    string line;
    while(getline(fin,line))
    {
        lines.push_back(line);
    }
    
    cout << "The first paragraph of the input file is:\n\n";
    
    for (auto line: lines)
    {
        cout << line << "\n";
        // cout << line.length() << "\n";
        // if(line.empty()|| line == "\n" || line == " ")
        
        if(line.empty() || line == "\n" || line == " ")
            break;

        // 查了ascii碼 發現是Enter鍵(13) 上面那行似乎沒用...
        bool findEnter = false;
        if (line.length()<=1)
        {  
            for (auto& e: line)
               if (int(e)==13)
               {
                   findEnter = true;
                   break;
               }
        }
        if(findEnter) break;
    }

    fin.close();
    return 0;
}
