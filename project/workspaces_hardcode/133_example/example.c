#include <stdio.h>

int main (void)
{
    FILE* fp;
    int c;

    fp = fopen ("file.txt", "r");
    if (fp == NULL)
    {
        perror ("Error in opening file");
        return -1;
    }
    // Read a single char
    while ((c = fgetc (fp)) != EOF)
        printf ("%c", c);

    printf ("\n");
    fclose (fp);
    fp = NULL;

    return 0;
}