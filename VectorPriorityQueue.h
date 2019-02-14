//Lainey Schrag

#include <iostream>
#include <vector>
#include "Entry.h"
#ifndef VECTORPRIORITYQUEUE_H
#define VECTORPRIORITYQUEUE_H

class VectorPriorityQueue
{
    private:
        std::vector<Entry> queue;
        int size;
        bool sorted;
        void sortQueue(); //sorts queue using bubble sort

    public:
        VectorPriorityQueue();
        bool isEmpty(); //returns true if queue is empty
        bool enqueue(int p, std::string d); //enqueue for normal entry
        bool enqueue(Entry anEntry); //enqueue for operator overloading
        bool dequeue();
        Entry peekFront();
        VectorPriorityQueue& operator+(const Entry anEntry); //overloads + operator

};
#endif