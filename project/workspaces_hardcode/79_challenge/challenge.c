/*
- We need to get some practice writing functions
    - Better organized code
    - Avoid duplication
- For this challenge, you are to write three functions in a single program

- Write a function which finds the greatest common divisor of two non-negative integer values and to return the result
    - GCD (greatest common divisor), takes two ints as parameters

- Write a function to calculate the absolute value of a number
    - Should take as a parameter a float and return a float
    - Test this function with ints and floats

- Write a function to compute the square root of a number
    - If a negative argument is passed then a message is display and -1.0 should be returned
    - Should use the absoluteValue function as implemented in the above step

*/

#include <stdio.h>

int GCDAlgorithm(int num1, int num2);
float absoluteValue(float num);
float squareRootNum(float num);


int main(void)
{

    /* Test algorithm */
    float absNum = 16;
    int absIntNum = 12;
    int numa = -136;
    int numb = 12;
    int GCDNum = GCDAlgorithm(numa, numb);

    printf("The GCD of %d and %d is: %d\n", numa, numb, GCDNum);

    float absResult = absoluteValue(absIntNum);
    printf("Absolute number of %.5f is: %.5f\n", absNum, absResult);

    float squareRootTest = squareRootNum(absNum);
    printf("Absolute number of %.5f is: %.5f\n", absNum, squareRootTest);

    return 0;
}

int GCDAlgorithm(int num1, int num2)
{
    /* Declare variables */
    int remainder = 0;
    int divisor = 0;
    int dividend = 0;
    int gcdNum = 0;
    /* Initial state */

    /* Check if num1 and num2 is negative then rounds them */
    if (num1 < 0) num1 = -num1;
    if (num2 < 0) num2 = -num2;
    
    /* Check if num1 and num2 are whether zero then return the GCD*/
    if (num1 == 0) return num2;
    if (num2 == 0) return num1;

    /* Check whether num1 is greater than num2 and vice versa */
    if (num1 > num2)
    {
        divisor = num2;
        dividend = num1;
    }
    else if(num1 < num2)
    {
        divisor = num1;
        dividend = num2;
    }
    else // Check if num1 is equal to num2 then GCD would be itself
        return num1;


    /* GCD Algorithm */
    while(dividend % divisor != 0)
    {   
        remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    gcdNum = divisor;
    return gcdNum;
}


float absoluteValue(float num)
{
    if (num < 0.0)
        num = -num;
    return num;
}

float squareRootNum(float num)
{
    const float epsilon = .00001;
    float guess = 1.0;
    if (num < 0.0)
    {
        printf("The heck are you doing?\n");
        return -1.0;
    }
    while (absoluteValue(guess * guess - num) >= epsilon)
        guess = (num / guess + guess) / 2.0;
    
    return guess;
}