#include <stdio.h>

/* Function definition to swap the values */
void swap (int* x, int* y)
{
    int temp;

    temp = *x; /* Save the value at address x */
    *x = *y; /* Put y into x */
    *y = temp; /* Put temp into y */

    return;
}

int main (void)
{
    /* Local variable definition */
    int a = 100;
    int b = 200;

    printf ("Before swap, value of a: %d\n", a);
    printf ("Before swap, value of b: %d\n", b);

    /* Calling a function to swap the values */
    swap (&a, &b);

    printf ("After swap, value of a: %d\n", a);
    printf ("After swap, value of b: %d\n", b);

    return 0;
}