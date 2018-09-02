//#include "data_list.h"
#include "select_sort.cpp"

using namespace std;

const int SIZE = 10;

int main(){
  DataList <int> test_list (SIZE);
  cin >> test_list;

  
  for (int i = 0; i<SIZE; i++){
    cout << "Element "<< i << "is: ";     
    cin >>test_list.element_[i];
  }

 // cout << "List before sorting: "<<test_list<<endl;
  test_list.Sort();
  //cout << "List after sorting: "<<test_list<<endl;
  for(int i =0; i<SIZE;i++)
    cout << test_list.element_[i] << "";
  cout << endl;
  return 0;
}
