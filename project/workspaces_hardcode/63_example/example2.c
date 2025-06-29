#include <stdio.h>

int main()
{   
    int sum = 0;
    int count = 4;
    int j = 0;
    for (int i = 1; i <= count; ++i)
    {
        sum = 1; // Initialize sum for inner loop
        j = 1;
        printf("\n1");
        // Calculate sum of integers from 1 to i
        while (j < i)
        {
            sum += ++j;
            printf("+ %d", j); //Output +j - on the same line
        }
        printf(" = %d", sum); // Output = sum
    }
    return 0;
}