tp3.exe: main.o
	g++ -o tp3.exe main.o

main.o: main.cpp
	g++ -c main.cpp
