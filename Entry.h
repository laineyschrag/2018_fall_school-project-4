//Lainey Schrag

#include <iostream>
#include <vector>
#ifndef ENTRY_H
#define ENTRY_H

class Entry
{
    private:
        int priority; //stores priority of the object
        std::string data; //stores actual data from object 
    public:
        Entry(); //initializes priority/data
        Entry(int p, std::string d); //makes sure data is between 1-100
        int getPriority();
        void setPriority(int p);
        std::string getData();
        void setData(std::string d);
};
#endif
