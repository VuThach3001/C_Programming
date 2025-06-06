#include <stdio.h>

int main(int argc, char *argv[]){
    
    int numberOfArguments = argc;
    /* Setting argument1 equal to the program name */
    char *argument1 = argv[0];
    /* Setting argument1 equal to the command line */
    char *argument2 = argv[1];

    printf("Number of Arguments: %d\n", numberOfArguments);
    printf("Argument 1 is the program name: %s\n", argument1);
    printf("Argument 2 is the command line: %s\n", argument2);

    return 0;
}