all: main.o fns.o
	g++ main.o fns.o -o run
main.o: main.cpp header.hpp
	g++ -c main.cpp
fns.o: functions.cpp header.hpp
	g++ -c functions.cpp
clean:
	*.o
	rm run