#include <string.h>
#include <stdio.h>

int main(void)
{
    char str[80] = "Hello how are you - my name is - Thach";
    const char s[2] = "-";
    char *token;

    /* get the first token */
    token = strtok(str, s);

    /* Walk through other token */
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, s);
    }


    return 0;
}