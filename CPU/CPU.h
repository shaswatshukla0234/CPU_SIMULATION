#pragma once

#include "../process/process.h"
#include "../RAM/RAM.h"

class CPU
{
private:

    int cpuID;
    Process *currentProcess;

public:

    CPU(int cpuID);

    void run(RAM& ram);
};