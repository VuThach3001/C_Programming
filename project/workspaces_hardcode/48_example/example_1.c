#include <stdio.h>

int main()
{
    /* Declare variables */
    _Bool a = 1;
    _Bool b = 0;
    _Bool result;

    /* Assignment for the Lgocial AND operator */
    // result = a && b;

    /* Assignment for the Lgocial OR operator */
    // result = a || b;
        
    /* Assignment for the Lgocial NOT operator */
    result = !(a || b);

    /* Print the result */
    printf("%d\n", result);

    return 0;
}