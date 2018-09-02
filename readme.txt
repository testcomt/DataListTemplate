g++编译C++ file：
taideMacBook-Air:DataListTemplate taixiaomei$ make
g++ -c select_sort.cpp
g++ -o main main.o select_sort.o
Undefined symbols for architecture x86_64:
  "operator<<(std::__1::basic_ostream<char, std::__1::char_traits<char> >&, DataList<int>&)", referenced from:
      _main in main.o
  "operator>>(std::__1::basic_istream<char, std::__1::char_traits<char> >&, DataList<int>&)", referenced from:
      _main in main.o
ld: symbol(s) not found for architecture x86_64
clang: error: linker command failed with exit code 1 (use -v to see invocation)
make: *** [main] Error 1


4. C++：什么时候用.H, 什么时候用.cpp? DataListTemplate中，main.cpp只包含data_list.h,就不可以

1.6节 模板：例子中，类定义放在头文件data_list.h中，类服务的实现放在头文件selecttm.h中，再加一个使用类的文件main.cpp，那么如何制作make文件？

cc=g++
exe=main
obj=main.o select_sort.o
$(exe):$(obj)
	$(cc) -o $(exe) $(obj)
$(obj):data_list.h
main.o:main.cpp
	$(cc) -c main.cpp
select_sort.o:select_sort.cpp
	$(cc) -c select_sort.cpp
clean:
	rm -fr *.o $(exe)

