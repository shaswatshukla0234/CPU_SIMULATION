#include "Process.h"
#include <iostream>

using namespace std;

Process::Process()
{
    pid = 0;
    steps = 0;
    priority = 0;
}

Process::Process(int pid, int steps, int priority): pid(pid), steps(steps), priority(priority)
{

}

int Process::getPid() 
{
    return pid;
}


int Process::getSteps() 
{
    return steps;
}


int Process::getPriority() 
{
    return priority;
}


void Process::displayProcess() 
{
    cout << "------------------------------------" << endl;
    cout << "      Process Information" << endl;
    cout << "------------------------------------" << endl;

    cout << "PID       : " << pid << endl;
    cout << "Priority  : " << priority << endl;
    cout << "Steps     : " << steps << endl;

    cout << "------------------------------------" << endl;
}
