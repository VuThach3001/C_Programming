/*
- In this challenge, you are going to create a "Guess the Number" C program
- Your program will generate a randome number from 0 to 20
- You will then ask the user to guess it
    User should only be able to enter numbers from 0-20
- The program will indicate to the user if each guess is too high or too low
- The player wins the game if they can guess the number within five tries

*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int numToEnter = 0;
    int numToTry = 5;
    time_t t;

    srand((unsigned) time(&t));

    int bingoNum = rand() % 21;

    printf("This is a guessing game\n");
    printf("I have chosen a number between 0 and 20 which you must guess\n");

    while(numToTry > 0)
    {
        printf("You have %d tr%s left.\n", numToTry, (numToTry == 1) ? "y" : "ies");
        printf("Enter a guess: ");
        scanf("%d", &numToEnter);
        while(numToEnter < 0 || numToEnter > 20)
        {
            printf("Please enter the value between 0 and 20\n");
            printf("Enter a guess: ");
            scanf("%d", &numToEnter);
        }

        if(numToEnter > bingoNum)
            printf("Sorry, %d is wrong. My number is less than that.\n", numToEnter);
        else if(numToEnter < bingoNum)
            printf("Sorry, %d is wrong. My number is more than that.\n", numToEnter);
        else
        {
            printf("Congratulations. You guessed it!\n");
            break;
        }
        numToTry--;
        
    }
    if(numToTry == 0) 
    {
        printf("The correct number is: %d\n", bingoNum);
        printf("You lost! Try next time!\n");
    }



    return 0;
}