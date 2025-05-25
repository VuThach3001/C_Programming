# Section 5: Variables and Data Types in C: Declaration, Initialization, and Usage

## Topic: Precision Output: Mastering Format Specifiers with printf for Variable Display

## Date: 25/05/2025

### Notes Section (Main Notes)

**1. Overview**
- Format specifiers are used when displaying variables as output
    - They specify the type of data of the variable to be displayed.
    ```
    int sum = 89;
    printf("The sum is %d\n", sum);
    ```
- The ```printf()``` function can display as output the values of variables
    - Has two items or arguments enclosed within the parentheses
    - Arguments are separated by a comma ```,```
    - First argument to the ```printf()``` routine is always the character ```string``` to be displayed.
    - Along with the display of the character ```string```, you might also frequently want to have the value of certain program variables displayed.
    ```
    #include <stdio.h>

    int main(){
        int integerVar = 100;
        float floatingVar = 331.79;
        double doubleVar = 8.44e+11;
        char charVar = 'W';

        _Bool boolVar = 0;

        printf("integerVar = %i\n", integerVar);
        printf("floatingVar = %f\n", floatingVar);
        printf("doubleVar = %e\n", doubleVar);
        printf("charVar = %c\n", charVar);

        printf("boolVar = %i\n", boolVar);

        return 0;
    }
    ```
---

### Summary Section (Summary of Notes)

