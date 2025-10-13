/*
- In this challenge, you are create a C program that defines an enum type and uses that type to display the values of some variables.
- The program should create an enum type named Company
    - Valid values for this type are GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT
- The program should create three variables of the above enum type that are assigned values:
    XEROX, GOOGLE and EBAY.asm
- The program should display as output, the value of the three variables with each variable separated by a newline
- Correct output would be if XEROX, GOOGLE, and EBAY variables are printed in that order:
    - 2
    - 0
    - 4
*/
#include <stdio.h>

int main(){
    /* Create enum type for Company*/
    enum Company {GOOGLE, YAHOO, XEROX, MICROSOFT = 10, EBAY, FACEBOOK};
    /* Declare variables */
    enum Company myGOOGLE, myXEROX, myEBAY;
    /* Assign the values */
    myGOOGLE = GOOGLE;
    myXEROX = XEROX;
    myEBAY = EBAY;
    /* Print them on screen */
    printf("myGoogle: %d\nmyXerox: %d\nmyEbay: %d\n", myGOOGLE, myXEROX, myEBAY);

    return 0;
}