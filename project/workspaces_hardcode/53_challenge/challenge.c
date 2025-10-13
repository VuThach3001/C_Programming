/*
- You are to create a C program that displays the byte size of basic data types supported in C
    - The output varies depending on the system you are running the program.
- Display the byte size of the following types:
    - int
    - char
    - long
    - long long
    - double
    - long double
- You can use the %zd format specifier to format each size
- Use the sizeof operator
- Test on more than one computer to see the differences
*/

#include <stdio.h>

int main(){
    
    printf("int: %zd\n", sizeof(int));
    printf("char: %zd\n", sizeof(char));
    printf("long: %zd\n", sizeof(long));
    printf("long long: %zd\n", sizeof(long long));
    printf("double: %zd\n", sizeof(double));
    printf("long double: %zd\n", sizeof(long double));
    
    return 0;
}