/*
- In this challenge, you are going to write a program that tests your understanding of char arrays

- Write a function to count the number of characters in a string (length)
    - Cannot use the strlen library function
    - Function should take a character array as a parameter
    - Should return an int (the length)

- Write a function concatenate two character strings
    - Cannot use the strcat library function
    - Function should take 3 parameters
        - char result[]
        - const char str1[]
        - const char str2[]
        - can return void

- Write a function that determines if two strings are equal
    - Cannot use strcmp library function
    - Function should take two const char arrays as parameters and return a Boolean of true if they are equal and false otherwise
*/

#include <stdio.h>

/********************************
FUNCTION TO RETURN STRING LENGTH
RESULT IS THE LENGTH OF THE STRING 
EXCEPT FOR THE NULL TERMINATOR
*********************************/
int stringCount(char stringInput[]);

/********************************
FUNCTION TO CONCATENATE TWO STRINGS
RESULT IS THE COMBINATION OF TWO 
STRINGS
*********************************/
void stringConcat(const char stringInput1[], const char stringInput2[], char resultStringConcat[]);


/********************************
FUNCTION TO CHECK IF TWO STRINGS
ARE EQUAL
FALSE IF NOT EQUAL
TRUE IF EQUAL 
*********************************/
_Bool isStringEqual(const char str1[], const char str2[]);

int main(void)
{
    /* Test string count function */
    char testString[40];
    int countString = 0;

    printf("Please enter your text here: ");
    scanf("%s", testString);

    countString = stringCount(testString);
    printf("The length of the string is: %d\n", countString);

    /* Test string concatenate function */
    const char str1Concat[20] = "Thach";
    const char str2Concat[20] = " Dep Trai";
    char resultOfStrConcat[50] = {};

    stringConcat(str1Concat, str2Concat, resultOfStrConcat);
    printf("%s\n", resultOfStrConcat);

    /* Test strings equal */
    const char str1Equal[20] = "Thach";
    const char str2Equal[20] = "Thaxh";
    _Bool isEqualTest = 0;
    isEqualTest = isStringEqual(str1Equal, str2Equal);
    printf("The result is : %d\n", isEqualTest);

    return 0;
}


int stringCount(char stringInput[])
{
    int count = 0; /* Creation a count variable to count the length of string when it exceeds to the null terminator */
    for(int i = 0; stringInput[i] != '\0'; i++)
    {
        /* Increase the count if it does not exceed to the null terminator */
        count++;
    }

    return count;
}

void stringConcat(const char stringInput1[], const char stringInput2[], char resultStringConcat[])
{
    /* Looping for adding content of stringInput1 to the result */
    for(int i = 0; stringInput1[i] != '\0'; i++)
        resultStringConcat[i] = stringInput1[i];

    /* Using stringCount function to continue to add */
    int countTemp = 0;
    countTemp = stringCount(resultStringConcat);

    /* Looping for adding content of stringInput2 to the result */
    for(int i = 0; stringInput2[i] != '\0'; i++)
        resultStringConcat[countTemp + i] = stringInput2[i];
}

_Bool isStringEqual(const char str1[], const char str2[])
{
    _Bool isEqual = 0;
    int countString1 = 0;
    int countString2 = 0;
    countString1 = stringCount(str1);
    countString2 = stringCount(str2);
    if (countString1 != countString2)
        isEqual = 0;
    else
    {
        for(int i = 0; str1[i] != '\0'; i++)
        {
            if (str1[i] != str2[i])
            {
                isEqual = 0;
                return isEqual;
            }
        }
        isEqual = 1;
    }

    return isEqual;
}