#pragma once

class Process
{
private:

    int pid;
    int steps;
    int priority;

public:

    Process();

    Process(int pid, int steps, int priority);

    int getPid() ;

    int getSteps() ;

    int getPriority() ;

    void displayProcess();
};