/*
- When the user types, say, 25<Enter>, the scanf("%d", &age) reads 25, 
but leaves the \n (from pressing Enter) in the input buffer.

- The next scanf("%[^\n]", name) expects a line of text — but it 
immediately sees the \n and thinks the input is done.

- So name ends up being an empty string.
*/

#include <stdio.h>

int main() {
    int age;
    char name[50];

    printf("Enter your age: ");
    scanf("%d", &age);  // reads the integer, leaves '\n' in buffer

    printf("Enter your name: ");
    scanf("%[^\n]", name);  // tries to read a full line — but sees leftover '\n'

    printf("Age: %d\n", age);
    printf("Name: %s\n", name);

    return 0;
}
