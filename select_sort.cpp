//#ifndef SELECT_SORT_CPP 
//#define SELECT_SORT_CPP
#include <stdio.h>
#include "data_list.h"

template <class Type> void DataList <Type> ::Swap (int mark_1,int mark_2){ 
  Type temp = element_[mark_1]; 
  element_[mark_1]=element_[mark_2];
  element_[mark_2]=temp;
}

template<class Type> int DataList <Type> ::MinKey(int low, int high){
  int min = low;
  for (int k=low+1; k<high; k++){
    if(element_[k]<element_[min])
      min = k;
  }
  return min;
} 

template <class Type> ostream& operator << (ostream& out_stream, DataList <Type> out_list){
  //输出重载操作符的实现：输出流对象为out_stream，输出对象为out_list
  out_stream << "Array Contents: \n";
  for(int i =0; i< out_list.array_size_; i++)
    out_stream << out_list.element_[i] << "";
  out_stream << endl;

  out_stream << "array_size_ is "<< out_list.array_size_ << endl;

  return out_stream;
}

template <class Type> istream& operator >> (istream& in_stream, DataList <Type> in_list){
  //输入重载操作符的实现：输入流对象为in_stream,输入对象为in_list
  cout << "Enter Array Current Size: ";
  in_stream>>in_list.array_size_;

  cout << "Enter Array Elements: ";
  for (int i = 0; i<in_list.array_size_; i++){
    cout << "Element "<< i << "is: ";     
    in_stream >>in_list.element_[i];
  }
  return in_stream;
}


template <class Type> void DataList <Type> ::Sort(){
  for (int i = 0; i<array_size_; i++){
    int j = MinKey(i, array_size_);
    if (j!=i) 
      Swap(i,j);
  }
}

  
//#endif
