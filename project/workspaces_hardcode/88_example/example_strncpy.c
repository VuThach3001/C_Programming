#include <stdio.h>
#include <string.h>

int main(void)
{
    char myString[] = "My name is Jason";

    char temp[50];

    strncpy(temp, myString, sizeof(temp) - 1);
    
    printf("The length is: %ld\n", strlen(myString));
    printf("The length is: %ld\n", sizeof(temp));
    printf("The string is: %s\n", temp);
    printf("The length is: %ld\n", strlen(temp));


    return 0;
}