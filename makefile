main: main.o calculator.o
	g++ -o main main.o calculator.o
main.o: main.cpp 
	g++ -c main.cpp
calculator.o: calculator.cpp calculator.h
	g++ -c calculator.cpp
