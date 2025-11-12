hello:hello.o main.o
	g++ -o hello hello.o main.o

hello.o :hello.cpp
	g++ -o hello.o -c hello.cpp -W -Wamm -ansi -pedantic

main.o : main.cpp hello.h
	g++ -o main.o -c main.cpp -W -Wall -ansi -pedantic 
