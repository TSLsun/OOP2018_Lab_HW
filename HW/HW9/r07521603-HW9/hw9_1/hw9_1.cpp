#include <ctime>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;


int main(){
    //const int UPPER_LIMIT = 10000000;
    cout << "HELLO\n";
    const int UPPER_LIMIT = 100000;
	clock_t t1, e1, t2, e2, t3, e3;
	t1 = clock();
	vector<int> origion(UPPER_LIMIT,-1);
	vector<int> destination1;
	vector<int> destination2;
	e1 = clock();
	cout << "first time range: " << (e1 - t1)*1000.0/CLOCKS_PER_SEC << endl;
	t2 = clock();
	copy(origion.begin(), origion.end(), back_inserter(destination1));
	e2 = clock();
	cout << "first time range: " << (e2 - t2)*1000.0/CLOCKS_PER_SEC << endl;
	t3 = clock();
	copy(origion.begin(), origion.end(), inserter(destination2, destination2.begin()));
	e3 = clock();
	cout << "first time range: " << (e3 - t3)*1000.0/CLOCKS_PER_SEC << endl;
}
