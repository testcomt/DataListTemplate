#ifndef DATA_LIST_H
#define DATA_LIST_H

#include <iostream>
#include <stdlib.h>

using namespace std; 

template<class Type>

class DataList {
 // Type * element_;
  int array_size_;
  void Swap(int mark_1,int mark_2);
  int MinKey(int low, int high);

  public:
    Type * element_;
    DataList(int size=10): array_size_(size), element_(new Type [size]){}
    ~DataList(){delete [] element_;}
    void Sort();
    friend ostream& operator << (ostream& out_stream, DataList <Type> & out_list);
    friend istream& operator >> (istream& in_stream, DataList <Type> & in_list);
    
};


#endif
