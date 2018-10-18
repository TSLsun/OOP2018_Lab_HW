#include <iostream>
#include <string>
using namespace std;

struct IntArray
{
    int *ia;
    int n;
};

IntArray creatIntArray();
int findMax(const IntArray&);
void printIntArray(const IntArray&);
void deleteIntArray(IntArray&);

int main()
{
    IntArray intArray = creatIntArray();
    int i = findMax(intArray);
    cout << "Max value in integer array is " << intArray.ia[i] << endl;
    printIntArray(intArray);
    deleteIntArray(intArray);

    return 0;
}


IntArray creatIntArray()
{
    IntArray *a = new IntArray();
    cout << "How many integers do you want to input: ";
    cin >> a->n;
    a->ia = new int[a->n];
    cout << "Please input the integers: "; 
    for(int i=0; i!=a->n; i++)
    {
        cin >> a->ia[i];
    }
    return *a;
}
int findMax(const IntArray& a)
{
    int maxIdx = 0;
    int maxVal = a.ia[0];
    for (int i=0; i!=a.n; i++)
    {
        if(a.ia[i]>maxVal)
        {
            maxIdx = i;
            maxVal = a.ia[i];
        }
    }
    return maxIdx;
}
void printIntArray(const IntArray& a)
{
    cout << "Integer Array: ";
    for(int i=0; i!=a.n; i++)
    {
        cout << a.ia[i] << " ";
    }    
    cout << "\n";
}
void deleteIntArray(IntArray& a)
{
    delete[] a.ia;
}

