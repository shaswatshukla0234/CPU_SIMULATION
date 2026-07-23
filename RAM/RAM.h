#pragma once

#include "../process/process.h"
#include <queue>
#include<vector>
// for prioriyqueue
struct ProcessComparator
{
    bool operator()( Process* a ,  Process* b)
    {
        return a->getPriority() < b->getPriority();
    }
};
class RAM
{
private:

    std::priority_queue<Process*, std::vector<Process*>, ProcessComparator> processes;
    int capacity;


public:

    RAM(int capacity);
    void addProcess( Process* p);
    void displayRAM();
    Process* getNextProcess();
    bool isEmpty();
};