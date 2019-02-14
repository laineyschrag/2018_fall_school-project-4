//Lainey Schrag

#include <iostream>
#include <vector>
#include "Entry.h"

Entry::Entry()
{
    priority = 1;
    data = "";
}

Entry::Entry(int p, std::string d)
{
    if (p < 1)
    {
        priority = 1;
    }
    else if (p > 100)
    {
        priority = 100;
    }
    else
    {
        priority = p;
    }

    data = d;
}

int Entry::getPriority()
{
    return priority;
}

void Entry::setPriority(int p)
{
    priority = p;
}

std::string Entry::getData()
{
    return data;
}

void Entry::setData(std::string d)
{
    data = d;
}