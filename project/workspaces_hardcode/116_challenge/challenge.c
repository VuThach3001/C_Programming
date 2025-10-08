/*
- Write a program that tests your understanding of pointer arithmetic and the const modifier

- Write a function that calculates the length of a string
    - The function should take as a parameter a const char pointer
    - The function can only determine the length of the string using pointer arithmetic
        - Incrementation operator (++pointer) to get to the end of the string
    - You are required to use a while loop using the value of the pointer to exit
    - The function should subtract two pointers (one pointing to the end of the string and one pointing to the beginning of the string)
- The function should return an int that is the length of the string pssed into the function
*/

#include <stdio.h>
#include <stdlib.h>

int stringLength (const char* string);

int main (void)
{
    printf ("%d\n", stringLength ("stringLength test"));
    printf ("%d\n", stringLength (""));
    printf ("%d\n", stringLength ("Thach"));
    return 0;
}

int stringLength (const char* string)
{
    const char* lastAddress = string;

    while (*lastAddress)
        ++lastAddress;

    return lastAddress - string;
}