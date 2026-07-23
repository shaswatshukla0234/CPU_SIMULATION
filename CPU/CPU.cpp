#include"CPU.h"
#include<iostream>

using namespace std;

CPU :: CPU(int cpuID)
{
    this->cpuID = cpuID;
    this->currentProcess = nullptr;
}
void CPU :: run(RAM& ram)
{
    if(ram.isEmpty())
    {
        cout << "CPU : " << cpuID << " NO PROCESS AVAILABLE \n";
        return ;
    }
    currentProcess = ram.getNextProcess();
    int steps = currentProcess->getSteps() ;
    cout << "CPU " << cpuID << " has is running Process "<< currentProcess->getPid()  <<  "\n"
    << "Steps : " << steps << endl;
    cout << "CPU RUNS : " << endl;
    for(int i = 1 ; i <= steps; i++ )
    {
        cout  << "STEPS : " << i << endl; 
    }
    cout << "---------------EXECUTION COMPLETE ---------\n\n" <<endl;
}