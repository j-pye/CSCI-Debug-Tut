all: main.o LinkedList.o
	g++ -Wall -g main.o LinkedList.o -o debugOne
main.o: main.cpp LinkedList.h
	g++ -c -g main.cpp
LinkedList.o: LinkedList.h LinkedList.cpp
	g++ -c -g LinkedList.cpp
.PHONY clean:
clean:
	-@rm -f *.o debugOne 2>/dev/null
