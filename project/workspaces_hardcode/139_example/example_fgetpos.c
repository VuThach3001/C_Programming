#include <stdio.h>

int main (void)
{
    FILE* fp = NULL;
    fpos_t position;

    fp = fopen ("file.txt", "w+");
    fgetpos (fp, &position);
    fputs ("Hello", fp);
    fclose (fp);

    return 0;
}