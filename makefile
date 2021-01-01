CC=g++
CXXFLAGS= -g -Wall -std=c++11 

all : sorting

sorting: sorting.o 
	 $(CC) -o sorting 

sorting.o : sorting.cc 
      $(CC) -c $(CXXFLAGS) sorting.cc

clean:
	rm -f sorting.o sorting.exe
  