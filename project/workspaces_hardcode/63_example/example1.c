#include <stdio.h>

int main()
{   
    int sum = 0;
    int count = 4;
    for (int i = 1; i <= count; ++i)
    {
        sum = 0; // Initialize sum for inner loop
        // Calculate sum of integers from 1 to i
        for (int j = 1; j <= i; ++j)
            sum += j;
        printf("\n%d\t%d", i, sum);
    }
    return 0;
}