#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (void)
{
    char* str = NULL;

    /* Initial memory allocation */
    str = (char*)malloc (15 * sizeof (char));
    strcpy (str, "Jason");
    printf ("String = %s, Address = %p\n", str, str);

    /* Reallocating memory */
    str = (char*)realloc (str, 25 * sizeof (char));
    strcat (str, ".com");
    printf ("String = %s, Address = %p\n", str, str);

    return 0;
}