/*
- Write a program that tests your understanding of dynamic memory allocation
- Write a program that allow user to input a text string. The program will print the text that was inputted. The program will utilize dynamic memory allocation
- The user can enter the limit of the string they are entering
    - You can use this limit when invoking malloc
- The program should create a char pointer only, no character arrays
- Be sure to release the memory that was allocated.
*/
#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int size;
    char* text = NULL;

    printf ("Enter limit of the text: ");
    scanf ("%d", &size);
    text = (char*)malloc (size * sizeof (char));
    if (text != NULL)
    {
        printf ("Enter some text: \n");
        scanf (" ");
        gets (text);
        printf ("Inputted text is: %s\n", text);
    }
    free (text);

    return 0;
}