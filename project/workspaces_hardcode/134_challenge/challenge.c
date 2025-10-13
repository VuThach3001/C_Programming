/*
- Write a program to find the total number of lines in a text file
- Create a file that contains some lines of text
- Open your test file
- Use the fgetc function to parse characters in a file until you get to the EOF
    - If EOF increment counter
- Display as output the total number of lines in the file
*/

#include <stdio.h>
#include <stdlib.h>

#define FILENAME "Test.txt"

int main (void)
{
    FILE* fp = NULL;
    char ch;
    int linesCount = 0;

    fp = fopen (FILENAME, "r");
    if (fp == NULL)
    {
        printf ("File does not exist\n");
        return -1;
    }
    while ((ch = fgetc (fp)) != EOF)
    {
        if (ch == '\n')
            linesCount++;
    }
    fclose (fp);
    fp = NULL;

    printf ("Total number of lines are: %d\n", ++linesCount);

    return 0;
}