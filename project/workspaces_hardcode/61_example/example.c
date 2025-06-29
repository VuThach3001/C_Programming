#include <stdio.h>

int main()
{
    unsigned long long sum1 = 0LL; //Stores the sum of the integers
    unsigned long long sum2 = 0LL; //Stores the sum of the integers
    unsigned int count = 0; // The number of integers to be summed

    // Read the number of integers to be summed
    printf("\nEnter the number of integers you want to sum: ");
    scanf(" %u", &count);

    // Sum integers from 1 to count
    for(unsigned int i = 1; i <= count; ++i)
        sum1 += i;

    // Or
    for(unsigned int i = 1; i <= count; sum2 += i++);
    printf("\nTotal of the first %u numbers of num1 is %llu\n", count, sum1);
    printf("\nTotal of the first %u numbers of num2 is %llu\n", count, sum2);

    return 0;
}