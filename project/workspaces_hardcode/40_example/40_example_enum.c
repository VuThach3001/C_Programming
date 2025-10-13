#include <stdio.h>

int main(){
    
    /* Create a new type gender for enum */
    enum gender { male, female };

    /* Declare the variable */
    enum gender myGender;
    enum gender anotherGender = female;

    /* Assign value for variable */
    myGender = male;

    _Bool isMale = (myGender == anotherGender);
    
    printf("Compare result is: %d\n", isMale);
    
    return 0;
}