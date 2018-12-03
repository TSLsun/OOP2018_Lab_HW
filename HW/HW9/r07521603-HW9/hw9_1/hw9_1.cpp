#include <ctime>
#include <iostream>
#include <iterator>
#include <vector>
#include <deque>
#include <list>
#include <forward_list>
#include <string>
#include <iomanip>
using namespace std;
const int UPPER_LIMIT = 10000000;

/*push_back: vector, deque, list, string*/
/*insert: vector, deque, list, string*/
/*push_front: deque, list, forward_list*/


/*              Constructor   push_back   insert   push_front
 * vector            v            v          v         x 
 * deque             v            v          v         v
 * list              v            v          v         v
 * forawrd_list      v            x          x         v
 */

vector<double> test_for_vector(unsigned n=1)
{
    cout << "### Test for vector ###" << endl;
    clock_t t0;
    double t;
    double t_con_sum=0, t_back_sum=0, t_insert_sum=0; 
    for(size_t i=1; i<=n; i++)
    {
        if(i==1) cout << "1st run:\n";
        else if(i==2) cout << "2nd run:\n";
        else cout << i << "th run:\n";

        t0 = clock();
        vector<int> origion(UPPER_LIMIT,-1);
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Constructor time range: " << t << endl;
        t_con_sum += t;

        t0 = clock();
        vector<int> destination1;
        copy(origion.begin(), origion.end(), back_inserter(destination1));
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Back_insert time range: " << t << endl;
        t_back_sum += t;

        t0 = clock();
        vector<int> destination2;
        copy(origion.begin(), origion.end(), inserter(destination2, destination2.begin()));
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Insert      time range: " << t << endl;
        t_insert_sum += t;
    } 
    vector<double> avgTime = { t_con_sum/n, t_back_sum/n, t_insert_sum/n, -1 };
    cout << "\n" << "Average time for " << n << " run(s): ";
    for(auto e:avgTime)
        cout << e << " ";
    cout << "\n\n";
    return avgTime;
}

vector<double> test_for_deque(unsigned n=1)
{
    cout << "### Test for deque ###" << endl;
    clock_t t0;
    double t, t_con_sum=0, t_back_sum=0, t_insert_sum=0, t_front_sum=0; 
    for(size_t i=1; i<=n; i++)
    {
        if(i==1) cout << "1st run:\n";
        else if(i==2) cout << "2nd run:\n";
        else cout << i << "th run:\n";

        t0 = clock();
        deque<int> origion(UPPER_LIMIT,-1);
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Constructor  time range: " << t << endl;
        t_con_sum += t;

        t0 = clock();
        deque<int> destination1;
        copy(origion.begin(), origion.end(), back_inserter(destination1));
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Back_insert  time range: " << t << endl;
        t_back_sum += t;

        t0 = clock();
        deque<int> destination2;
        copy(origion.begin(), origion.end(), inserter(destination2, destination2.begin()));
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Insert       time range: " << t << endl;
        t_insert_sum += t;

        t0 = clock();
        deque<int> destination3;
        copy(origion.begin(), origion.end(), front_inserter(destination3));
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Front_insert time range: " << t << endl;
        t_front_sum += t;
    } 
    vector<double> avgTime = { t_con_sum/n, t_back_sum/n, t_insert_sum/n, t_front_sum/n };
    cout << "\n" << "Average time for " << n << " run(s): ";
    for(auto e:avgTime)
        cout << e << " ";
    cout << "\n\n";
    return avgTime;
}

vector<double> test_for_list(unsigned n=1)
{
    cout << "### Test for list ###" << endl;
    clock_t t0;
    double t, t_con_sum=0, t_back_sum=0, t_insert_sum=0, t_front_sum=0; 
    for(size_t i=1; i<=n; i++)
    {
        if(i==1) cout << "1st run:\n";
        else if(i==2) cout << "2nd run:\n";
        else cout << i << "th run:\n";

        t0 = clock();
        list<int> origion(UPPER_LIMIT,-1);
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Constructor  time range: " << t << endl;
        t_con_sum += t;

        t0 = clock();
        list<int> destination1;
        copy(origion.begin(), origion.end(), back_inserter(destination1));
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Back_insert  time range: " << t << endl;
        t_back_sum += t;

        t0 = clock();
        list<int> destination2;
        copy(origion.begin(), origion.end(), inserter(destination2, destination2.begin()));
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Insert       time range: " << t << endl;
        t_insert_sum += t;

        t0 = clock();
        list<int> destination3;
        copy(origion.begin(), origion.end(), front_inserter(destination3));
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Front_insert time range: " << t << endl;
        t_front_sum += t;
    } 
    vector<double> avgTime = { t_con_sum/n, t_back_sum/n, t_insert_sum/n, t_front_sum/n };
    cout << "\n" << "Average time for " << n << " run(s): ";
    for(auto e:avgTime)
        cout << e << " ";
    cout << "\n\n";
    return avgTime;
}

vector<double> test_for_forwardList(unsigned n=1)
{
    cout << "### Test for forward_list ###" << endl;
    clock_t t0;
    double t, t_con_sum=0, t_front_sum=0; 
    for(size_t i=1; i<=n; i++)
    {
        if(i==1) cout << "1st run:\n";
        else if(i==2) cout << "2nd run:\n";
        else cout << i << "th run:\n";

        t0 = clock();
        forward_list<int> origion(UPPER_LIMIT,-1);
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Constructor  time range: " << t << endl;
        t_con_sum += t;

        t0 = clock();
        forward_list<int> destination3;
        copy(origion.begin(), origion.end(), front_inserter(destination3));
        t = ( clock()-t0 )*1000.0/CLOCKS_PER_SEC;
        cout << "    Front_insert time range: " << t << endl;
        t_front_sum += t;
    } 
    vector<double> avgTime = { t_con_sum/n, -1, -1, t_front_sum/n };
    cout << "\n" << "Average time for " << n << " run(s): ";
    for(auto e:avgTime)
        cout << e << " ";
    cout << "\n\n";
    return avgTime;
}

int main(){
    cout << "UPPER_LIMIT: " << UPPER_LIMIT << endl;
    unsigned numOfRuns = 10;  
    cout << "run " << numOfRuns << " case(s) for each test...\n\n";
    
    vector< vector<double> > all = { test_for_vector(numOfRuns),
                                     test_for_deque(numOfRuns),
                                     test_for_list(numOfRuns),
                                     test_for_forwardList(numOfRuns) }; 

    vector<string> ctName = {"vector", "deque", "list", "forward_list"};
    vector<string> action = {"constructor", "push_back", "insert", "push_front"};

    cout << "### Comparison between sequential containers ###\n\n"; 
    cout << setw(12) << " ";
    for(size_t i=0; i!=action.size(); i++)
        cout << "|" << right << setw(12) << action[i];
    cout << endl;
    cout << setfill('-');
    cout << setw(12) << ""; 
    for(size_t i=0; i!=action.size(); i++)
        cout << "|" << setw(12) << "";
    cout << setfill(' ');
    cout << endl;
    for(size_t i=0; i!=ctName.size(); i++)
    {
        cout << left << setw(12) << ctName[i];
        for (size_t j=0; j!=action.size(); j++)
            cout << "|" << right << setw(12) << all[i][j]; 
        cout << endl;
    }
    return 0;
}
