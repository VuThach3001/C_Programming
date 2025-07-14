/*
- Write a program that plays tic-tac-toe
    - Game is played on a 3x3 grid the game is played by two players, who takes turns

- You should create an array to represent the board
    - Can be of type char and consist of 10 elements (do not use zero)
    - Each element represents a coordinate on the board that the user can select

- Some functions that you should probably create
    - checkForWin - Checks to see if a player has won or the game is a draw
    - drawBoard - Redraws the board for each player turn
    - markBoard - Sets the char array with a selection and check for an invalid selection

*/
#include <stdio.h>
#include <stdlib.h>

char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;

int checkForWin(void);
void drawBoard(void);
void markBoard(char mark);

void test(){
    return 0;
}

int main(void) 
{
    char mark;
    int gameStatus = 0;

    player = 1;
    
    do
    {
        /* code */
        drawBoard();
        player = (player % 2) ? 1 : 2;

        printf("Player %d, Enter a number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        markBoard(mark);

        gameStatus = checkForWin();

        player++;

    } while (gameStatus == -1);
    
    if (gameStatus == 1)
        printf("==>\a Player %d won\n", --player);
    else
        printf("==>\a Game draw\n");

    return 0;
}

/********************************
FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
0 GAME IS OVER AND NO RESULT
*********************************/
int checkForWin(void)
{
    int returnValue = 0;

    if(square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;
    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;
    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;
    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;
    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;
    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;
    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3'
            && square[4] != '4' && square [5] != '5' && square[6] != '6' && square[7] != '7'
            && square[8] != '8' && square[9] != '9')
    {
        returnValue = 0;
    }
    else
        returnValue = -1;

    return returnValue;
}

/********************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
*********************************/
void drawBoard(void)
{
    system("clear");
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", square[1], square[2], square[3]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", square[4], square[5], square[6]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", square[7], square[8], square[9]);
    printf("   |   |   \n");

}

/********************************
FUNCTION TO SET THE BOARD WITH THE CORRECT CHARACTER
X OR O IN THE CORRECT SPOT IN THE ARRAY
*********************************/
void markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;
    else if (choice == 2 && square[2] == '2')
        square[2] = mark;
    else if (choice == 3 && square[3] == '3')
        square[3] = mark;
    else if (choice == 4 && square[4] == '4')
        square[4] = mark;
    else if (choice == 5 && square[5] == '5')
        square[5] = mark;
    else if (choice == 6 && square[6] == '6')
        square[6] = mark;
    else if (choice == 7 && square[7] == '7')
        square[7] = mark;
    else if (choice == 8 && square[8] == '8')
        square[8] = mark;
    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else
    {
        printf("Invalid move");
        player--;
        getchar();
    }

}