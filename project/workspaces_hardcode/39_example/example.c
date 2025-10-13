#include <stdio.h>
#include <stdbool.h>

int main(void){
    
    int integerVar = 100;
    float floatingVar = 331.79;
    double doubleVar = 8.443+11;
    /* C89 standard  - without including stdbool.h */
    _Bool boolVar = 1;
    /* C99 standard  - including stdbool.h */
    bool anotherboolVar = true;

    return 0;
}