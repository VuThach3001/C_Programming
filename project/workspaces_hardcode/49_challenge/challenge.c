/*
- In this challenge, you are to create a C program that converts the number of minutes to days and years

- The program should ask the user to enter the number of minutes via the terminal

- The program should display as output the minutes and then its equivalent in years and days

- The program should create variables to store (should all be of type double)
    - Minutes (int)
    - Minutes in year
        - Years
        - Days
*/

#include <stdio.h>

int main()
{
    /* Declare and Initialize the necessary variables */
    double days = 0.0;
    double years = 0.0;
    double minutes = 0.0;

    /* Ask user to enter the number of minutes */
    printf("Please enter the number of minutes: ");
    scanf("%lf", &minutes);

    /* Calculate the days and years */
    days = minutes/(24.0*60.0);
    years = minutes/(24.0*60.0*365.0);

    /* Print the calculated days and years */
    printf("Numer of days: %lf\nNumber of years: %lf\n", days, years);

    return 0;
}