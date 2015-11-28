main: io.o main.o
	g++ -o main main.o io.o

main.o: main.cpp io.h
	g++ -c main.cpp

io.o: io.cpp
	g++ -c io.cpp