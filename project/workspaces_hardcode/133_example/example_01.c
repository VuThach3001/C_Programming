#include <stdio.h>

int main (void)
{
    FILE* fp;
    char str[61];

    /* Opening file for reading */
    fp = fopen ("file.txt", "r");

    if (fp == NULL)
    {
        perror ("Error openning file");
        return -1;
    }

    if (fgets (str, 60, fp) != NULL)
    {
        /* Writing the content to stdout */
        printf ("%s", str);
    }

    fclose (fp);
    fp = NULL;

    return 0;
}