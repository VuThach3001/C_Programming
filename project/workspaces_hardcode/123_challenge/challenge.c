/*
- Write a program that declares a structure and prints out it's content
    - Create an employee structure with 3 members
      - name (character array)
      - hireDate (int)
      - salary (float)
    - Declare and initialize an instance of an employee type
    - Read in a second employee from the console and store it in a structure of type employee
    - Print out the contents of each employee
*/

#include <stdio.h>
#include <stdlib.h>

struct employee
{
    char name[30];
    char empId[15];
    float salary;
};

int main (void)
{

    /* Declare and initialization of structure variable */
    struct employee emp = { "Mike", "7/16/15", 76909.00f };
    printf ("Name: %s\n", emp.name);
    printf ("ID: %s\n", emp.empId);
    printf ("Salary: %.2f\n", emp.salary);

    printf ("\nEnter employee information: \n");
    printf ("Name: ");
    scanf ("%s", emp.name);
    printf ("Employee ID: ");
    scanf ("%s", emp.empId);
    printf ("Salary: ");
    scanf ("%f", &emp.salary);

    printf ("\nName: %s\n", emp.name);
    printf ("ID: %s\n", emp.empId);
    printf ("Salary: %.2f\n", emp.salary);


    return 0;
}