#include <stdio.h>

int myGlobal = 0;

void myFunction();

int main(void)
{
    int myLocalMain = 0; // Local variable
    // Can access my global and myLocal

    return 0;
}

void myFunction()
{
    int x; // Local variable
    // Can access myGlobal and x, cannot access myLocalMain
}