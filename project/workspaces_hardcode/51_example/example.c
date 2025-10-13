#include <stdio.h>

int main()
{
    /* Declare variables that is non negative */
    unsigned int a = 60; // Represent in binary: 0011 1100
    unsigned int b = 13; // Represent in binary: 0000 1101

    int resultAND = 0;
    int resultOR = 0;
    int resultXOR = 0;
    int resultFlipping = 0;
    int resulShiftLeft = 0;
    int resulShiftRight = 0;

    resultAND = a & b; // Expected result: 0000 1100
    resultOR = a | b; // Expected result: 0011 1101
    resultXOR = a ^ b; // Expected result: 0011 0001
    resultFlipping = ~a; // Expected result: 1100 0011
    resulShiftLeft = a << 4; // Expected result: 1111 0000
    resulShiftRight = a >> 4; // Expected result: 0000 0011


    printf("ResultAND is: %d\n", resultAND);
    printf("ResultOR is: %d\n", resultOR);
    printf("ResultXOR is: %d\n", resultXOR);
    printf("ResultFlipping is: %d\n", resultFlipping);
    printf("ResulShiftLeft is: %d\n", resulShiftLeft);
    printf("ResulShiftRight is: %d\n", resulShiftRight);

    return 0;
}