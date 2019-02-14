//Lainey Schrag

#include <iostream>
#include "VectorPriorityQueue.h"
#include "Entry.h"
#include <vector>

int main()
{
    VectorPriorityQueue vpQueue;

    vpQueue.enqueue(9,"nine");
    vpQueue.enqueue(37,"thirty-seven");
    vpQueue.enqueue(1,"one");
    vpQueue.enqueue(123,"one twenty-three");
    vpQueue.enqueue(21,"twenty-one");
    vpQueue.enqueue(9,"nine");
    vpQueue.enqueue(87,"eighty-seven");
    vpQueue.enqueue(-10,"negative ten");
    vpQueue.enqueue(13,"thirteen");

    std::cout << std::endl;
    std::cout << (vpQueue.peekFront()).getPriority() << ", " << (vpQueue.peekFront()).getData();
    vpQueue.dequeue();

    std::cout << std::endl;
    std::cout << (vpQueue.peekFront()).getPriority() << ", " << (vpQueue.peekFront()).getData();
    vpQueue.dequeue();

    std::cout << std::endl;
    std::cout << (vpQueue.peekFront()).getPriority() << ", " << (vpQueue.peekFront()).getData();
    vpQueue.dequeue();

    Entry anEntry1(19, "nineteen");
    vpQueue + anEntry1;
    Entry anEntry2(4, "four");
    vpQueue + anEntry2;
    Entry anEntry3(59, "fifty-nine");
    vpQueue + anEntry3;
    Entry anEntry4(38, "thirty-eight");
    vpQueue + anEntry4;
    Entry anEntry5(74, "seventy-four");
    vpQueue + anEntry5;
    Entry anEntry6(63, "sixty-three");
    vpQueue + anEntry6;
    Entry anEntry7(29, "twenty-nine");
    vpQueue + anEntry7;

    while (vpQueue.isEmpty() == false)
    {
        std::cout << std::endl;
        std::cout << (vpQueue.peekFront()).getPriority() << ", " << (vpQueue.peekFront()).getData();
        vpQueue.dequeue();
    }

    return(0);
}