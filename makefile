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
	





