/*
- In this challenge, you are going to create a program that will find all the prime numbers from 3-100
- There will be no input to the program
- The ouput will be each prime number separated by a space on a single line
- You will need to create an array that will store each prime number as it is generated.
- You can hard-code the first two prime numbers (2 and 3) in the primes array'
- You should utilize loops to only find prime numbers up to 100 and a loop to print out the primes array

Hint:
- The criteria that can be used to identify a prime number is that a number is considerd prime if it is not evenly divisible by any other previous prime numbers.
- Can use the following as an exit condition in the innermost loop
    - p / primes[i] >= primes[i]
    - A test to ensure that the value of p does not exceed the square root of primes[i]
- Your program can be more efficient by skipping any checks for even numbers (as they cannot be prime)

*/

#include <stdio.h>

int main()
{
    int arrPrimeNumber[100] = {2, 3};
    int indexArr = 2;
    // Check only for the odd numbers
    for(int i = 5; i <= 100; i += 2)
    {
        int isPrime = 1;
        for (int j = 0; j < indexArr; j++)
        {
            if (arrPrimeNumber[j] * arrPrimeNumber[j] > i)
                break;

            if(i % arrPrimeNumber[j] == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
        {
            arrPrimeNumber[indexArr] = i;
            indexArr++;
        }
    }
    
    for (int t = 0; t < indexArr; t++)
    {
        printf("Prime %d: %i\n", t, arrPrimeNumber[t]);
    }
    return 0;
}