/*
- Write a program that displays a string in reverse order
    - Should read input from the keyboard
    - Need to use the strlen string function
- Write a program that sorts the strings of an array using a bubble sort
    - Need to use the strcmp and strcpy functions
*/

#include <string.h>
#include <stdio.h>

int main (void)
{
    char str[100];
    char str_rv[100];
    char name[25][50], temp[25];
    int i, l, n, j;

    printf ("Print individual characters of string in reverse order:\n");
    printf ("Input the string: ");
    scanf ("%s", str);
    l = strlen (str);

    for (int k = 0; k < l; k++)
    {
        str_rv[k] = str[l - k - 1];
    }
    str_rv[l] = '\0';  // null-terminate the reversed string

    printf ("%d\n", l);
    printf ("%s\n", str_rv);

    printf ("\n");
    printf ("\nSort the strings of the array using bubble sort\n");
    printf ("Input number of Strings: ");
    scanf ("%d\n", &n);
    for (int i = 0; i < n; i++)
    {
        scanf ("%s", name[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n - j; j++)
        {
            if (strcmp (name[j], name[j + 1]) > 0)
            {
                strncpy (temp, name[j], sizeof (temp) - 1);
                strncpy (name[j], name[j + 1], sizeof (name[j] - 1));
                strncpy (name[j + 1], temp, sizeof (name[j + 1] - 1));
            }
        }
    }
    printf ("The strings appear after sorting: \n");
    for (int i = 0; i <= n; i++)
    {
        printf ("%s\n", name[i]);
    }

    return 0;
}