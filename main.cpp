#include<iostream>

#include "process/process.h"
#include "RAM/RAM.h"
#include "CPU/CPU.h"
using namespace std;
int main()
{

    Process* p1 = new Process(101,20,5);
    Process* p2 = new Process(102,10,8);
    Process* p3 = new Process(103,15,2);

    RAM ram(100);

    ram.addProcess(p1);
    ram.addProcess(p2);
    ram.addProcess(p3);

    cout<<"Processes in RAM:\n";
    ram.displayRAM();
    CPU cpu1(1);

    cout<<"\nCPU Execution:\n";
    cpu1.run(ram);
    cpu1.run(ram);
    cpu1.run(ram);
    cpu1.run(ram);

    delete p1;
    delete p2;
    delete p3;


    return 0;
}