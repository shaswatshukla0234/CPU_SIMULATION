#include"RAM.h"
#include<iostream>
using namespace std;

RAM :: RAM(int capacity)
{
    this->capacity = capacity;
}
void RAM ::  addProcess( Process* p)
{
    processes.push(p);
}
void RAM::displayRAM()
{
    auto temp = processes;

    while(!temp.empty())
    {
        Process *p = temp.top();
        p->displayProcess();

        temp.pop();
    }
}
Process* RAM::getNextProcess()
{
    if(!processes.empty())
    {
        Process* temp = processes.top();
        processes.pop();
        return temp;
    }

    return nullptr;
}
bool RAM:: isEmpty()
{
    return processes.empty() ;
}