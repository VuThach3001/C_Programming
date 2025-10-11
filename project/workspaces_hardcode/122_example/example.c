#include <stdio.h>

struct date
{
    int month;
    int day;
    int year;
};
struct date today;

int main (void)
{

    today.month = 9;
    today.day = 25;
    today.year = 2015;

    printf ("Today's date is %.2i/%i/%.2i.\n", today.month, today.day, today.year % 100);

    return 0;
}