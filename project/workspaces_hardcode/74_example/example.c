#include <stdio.h>
#include <stdlib.h>
#define SIZE 50


int main()
{
    float list[SIZE];

    readlist(list, SIZE);
    sort(list, SIZE);
    average(list, SIZE);

    return 0;
}