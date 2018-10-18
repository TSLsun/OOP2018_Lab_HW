#include <iostream>
#include <memory>

using namespace std;

int main(){
  srand(0);
  
  std::shared_ptr<int> my_array( new int[1000000000] );
  
  for(int i = 0; i < 1000000000; ++i)
      my_array.get()[i] = rand()%100;
  
  int j;
  cout << "Check point 1 (go check memory usage), give int: ";
  cin >> j; 
  
  std::shared_ptr<int> my_array2(new int[10]);
  
  my_array = my_array2; // works to free the large array
  //my_array.reset();

  cout << "check point 2 (go check memory usage), give int: ";
  cin >> j; 

  return 0;
}