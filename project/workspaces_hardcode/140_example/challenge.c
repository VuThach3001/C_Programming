/*
- Write a program that will print the contents of a file in reverse order
- Use the fseek function to seek to the end of the file
- Use the ftell function to get the position of the file pointer
- Display as output the file in reverse order
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define FILENAME "Test.txt"

int main (void)
{
    FILE* fp = NULL;

    int cnt = 0;
    int i = 0;

    fp = fopen (FILENAME, "r");

    if (fp == NULL)
        return -1;

    fseek (fp, 0, SEEK_END);

    cnt = ftell (fp);

    while (i < cnt)
    {
        i++;
        fseek (fp, -i, SEEK_END);
        printf ("%c", fgetc (fp));
    }
    printf ("\n");
    fclose (fp);
    fp = NULL;

    return 0;
}