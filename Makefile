all: main.o fns.o
	g++ main.o statistics.o -o run
main.o: main.cpp header.hpp
	g++ -c main.cpp
fns.o: functions.cpp header.hpp
	g++ -c functions.cpp
clean:
	*.o
	rm run