tp3.exe: main.o
	g++ -o tp3.exe main.o

main.o: main.cpp Point_template.hpp
	g++ -c main.cpp 
