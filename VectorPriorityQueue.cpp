//Lainey Schrag

#include <iostream>
#include <vector>
#include "VectorPriorityQueue.h"

VectorPriorityQueue::VectorPriorityQueue()
{
    size = 0;
    sorted = false;
}

void VectorPriorityQueue::sortQueue()
{
//Bubble Sort
//I decided to use bubble sort since it was the sort method I was most comfortable in implementing
//I know that it isn't the fastest sort, but with the small amount of data I am handling for this
//project it is sufficiently fast.

    Entry temp;
    for(int i = 0; i < size; i++)
    {
        for (int j = 0; j < size -1; j++)
        {
            if (queue[i+1].getPriority() > queue[i].getPriority())
            {
                temp = queue[i];
                queue[i] = queue[i+1];
                queue[i+1] = temp;
            }
        }
    }
}

bool VectorPriorityQueue::isEmpty()
{
    if (size == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool VectorPriorityQueue::enqueue(int p, std::string d) //enqueue for all additions not using overloaded + operator
{
    Entry newEntry(p,d);
    queue.push_back(newEntry);
    sorted = false;
    size++;
    return true;
}

bool VectorPriorityQueue::enqueue(Entry anEntry) //enqueue for adding with overloaded + operator
{
    queue.push_back(anEntry);
    sorted = false;
    size++;
    return true;
}

bool VectorPriorityQueue::dequeue()
{
    if (sorted != true)
    {
        sortQueue();
    }
    queue.erase(queue.begin());
    size--;
    return true;
}

Entry VectorPriorityQueue::peekFront()
{
    return queue.front();
}

VectorPriorityQueue& VectorPriorityQueue::operator+(const Entry anEntry)
{
    this -> enqueue(anEntry);
    return *this;
}