#include <iostream>
#include <vector>
#include <string>
using namespace std;

int findMin(const vector<int>& vec, int start);
void switchPos(vector<int>& vec, int pos1, int pos2);
void selectionSort(vector<int>& vec);
void printOut(string s, const vector<int>& vec);

int main()
{
    vector<int> v;
    int t;
    cout << "Please input the numbers you wish to sort, and stop with any alphabet: ";
    while(cin >> t) v.push_back(t);
    printOut("Original", v);
    selectionSort(v);
    printOut("Sorted", v); 
    return 0;
}

int findMin(const vector<int>& vec, int start)
{
    int minPos = start;
    int minValue = vec[minPos];
    for (int i=start; i!=vec.size(); i++)
    {
        if(vec[i] < minValue)
        {
            minPos = i;
            minValue = vec[i];
        }
    }
    return minPos;
}
void switchPos(vector<int>& vec, int pos1, int pos2)
{
    int tmp;
    tmp = vec[pos1];
    vec[pos1] = vec[pos2];
    vec[pos2] = tmp;
}
void selectionSort(vector<int>& vec)
{
    int cur = 0;
    while(cur != vec.size())
    {
        switchPos(vec, cur, findMin(vec,cur));
        cur++;
    } 

}
void printOut(string s, const vector<int>& vec)
{
    cout << s << ": ";
    for (auto& e: vec)
        cout << e << " ";
    cout << "\n";
}

