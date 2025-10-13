#include <stdio.h>

int main (void)
{
    FILE* fp;
    fp = fopen ("file.txt", "w+");

    fputs ("This is Jason Fedin Course.", fp);
    fputs ("I am happy to be here", fp);

    fclose (fp);
    return 0;
}