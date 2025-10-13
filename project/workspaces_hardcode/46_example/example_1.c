/*
You are create a C program that displays the perimeter and area of a rectangle

The program should create 4 variables of type double
- 1 variable to store the width of the rectangle
- 1 variable to store the height of the rectangle
- 1 variable to store the perimeter of the rectangle
- 1 variable to store the area of the rectangle

The program should perform the calculation for the perimeter of a rectangle
- Use the + operator addition and the * operator for the multiplication
- Perimeter is calculated by adding the height and width and the multiplying by 2
- Area is calculated by multiplying the width * height variables
- The program should display the height, width, and perimeter variables in the correct format in one print statement
- The program should display the height, width, and area variables in the correct format in one print statement.asm

Hints:
- Declare and initialize the height and width variables to any value (need to be of type double)
- Declare the perimeter and area values to 0.0
- Assign to the perimeter and area values the correct data based on calculations
    - perimeter = 2.0 * (height + width);
    - Area = width * height;

Next steps:
- Use the printf function and the correct format specifier to display the required output
- Compile and link the source code
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    /* Declare the variables */
    /* Starting with argv[1] as the argv[0] would be used to store the program name */
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double perimeter = 0.0;
    double area = 0.0;

    /* Assign the value for those variables */
    // width = 2.27;
    // height = 3.56;

    perimeter = 2.0 * (height + width);
    area = width * height;

    printf("height: %.2f, width: %.2f, perimeter: %.2f\n", height, width, perimeter);
    printf("height: %.2f, width: %.2f, area: %.2f\n", height, width, area);

    return 0;
}