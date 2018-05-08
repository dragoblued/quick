all: main 
main: quick.o
	g++ quick.o -o quick
quick.o: quick.cpp
	g++ -c quick.cpp
clean: 
	rm quick *.o


