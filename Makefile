Project: main.o VectorPriorityQueue.cpp Entry.cpp
	g++ -g -std=c++11 -Wall main.o VectorPriorityQueue.o Entry.o -o Project

main.o: main.cpp Entry.h VectorPriorityQueue.h
	g++ -g -std=c++11 -Wall -c main.cpp

VectorPriorityQueue.o: VectorPriorityQueue.h VectorPriorityQueue.cpp
	g++ -g -std=c++11 -Wall -c VectorPriorityQueue.cpp

Entry.o: Entry.h Entry.cpp
	g++ -g -std=c++11 -Wall -c Entry.cpp

clean: 
	rm *.o Project
