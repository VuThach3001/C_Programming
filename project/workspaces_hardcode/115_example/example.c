#include <stdio.h>

void copyString (char to[], char from[])
{
    int i;
    for (i = 0; from[i] != '\0', ++i)
        to[i] = from[i];
    to[i] = '\0';
}

void copyString (char* to, char* from)
{
    for (;*from != '\0'; ++from, ++to)
        *to = *from;
    *to = '\0';
}

int main (void)
{
    return 0;
}