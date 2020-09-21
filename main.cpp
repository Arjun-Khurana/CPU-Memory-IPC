#include <iostream>
#include <fstream>
#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <string.h> 
#include <sys/wait.h> 
#include "cpu.h"

using namespace std;

int main(int argc, char* argv[])
{
    int cpu_mem[2];
    int mem_cpu[2];
    pid_t pid;

    switch(argc)
    {
        case 0:
        case 1:
        {
            cout << "No input file detected" << endl;
            return 1;
        } break;
        case 2:
        {
            cout << "No timer detected" << endl;
            return 1;
        } break;
        case 3:
        {

        } break;
        default:
        {
            cout << "Too many arguments" << endl;
            return 1;
        }
    }
}