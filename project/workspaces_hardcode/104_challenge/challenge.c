/*
- In this challenge, you are going to learn how to create, initialize, assign, and access a pointer
- Write a program that creates an integer variable with a hard-coded value. Assign that variable's address to a pointer variable
- Display as output the address of the pointer, the value of the pointer, and the value of what the pointer is pointing to

*/

#include <stdio.h>

int main (void)
{
    int num = 150;
    int* pnum = NULL;

    pnum = &num;
    printf ("num address is: %p\n", &num);
    printf ("address of pnum: %p\n", &pnum);
    printf ("value of the pnum: %p\n", pnum);
    printf ("value of what pnum is pointing to: %d\n", *pnum);

    return 0;
}