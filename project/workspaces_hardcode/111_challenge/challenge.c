/* Write a program that tests your understanding of pass by reference
- Write a function that squares a number by itself
    - The function should define as a parameter an int pointer
*/
#include <stdio.h>
#include <stdlib.h>

/* Declare function square */
void square (int* x);

int main (void)
{

    int* num = (int*)malloc (sizeof (int));
    *num = 4;
    square (num);
    printf ("The square of the given number is %d\n", *num);

    return 0;
}

void square (int* x)
{
    *x = (*x) * (*x);
}

