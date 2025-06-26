# Section 7: Mastering Program Flow Control with C Language Constructs

## Topic: Implementing Conditional Logic: Detailed Guide to If Statements in C

## Date: 24/06/2025

### Notes Section (Main Notes)

**1. Overview**
- The C programming language provides a general decision-making capability in the form of a ```if statement```
```
if (expression){
  program statement
}
```
- Translating a statement such as "If it is not raining, thgen I will go swimming" into the C language is easy.
```
if (it is not raining)
{
  I will go swimming
}
```
- The ```if statement``` is used to stipulate execution of a program statement(s) based upon specified conditions
  - I will go swimming if it is not raining.
- The curly brackets ```{}``` are required for compound statements inside the **if** block
- Example:
```
int score = 95;
int big = 90;
// simple statement if, no brackets
if (score > big)
  printf("Jackpot!\n");
// compound statement if, brackets
if (score > big)
{
  score++;
  printf("You win\n");
}
```
**2. If with an else**
- You can extend the **if statement** with a small addition that gives you a lot more flexibility.
```
If the rain today is worse than the rain yesterday,
I will take my umbrella
Else
I will take my jacket
Then I will go to work.
```
- This is exactly the kind of decision making the ```if-else``` statement provides
```
if (expression)
  Statement1;
else
  Statement2;
```
- Example:
```
// Program to determine if a number is even or odd

#include <stdio.h>

int main()
{
  int number_to_test, remainder;
  printf("Enter your number to be tested: ");
  scanf ("%i", &number_to_test);

  remainder = number_to_test % 2;

  if (remainder == 0)
    printf ("The number is even.\n");
  else
    printf ("The number is odd.\n");

  return 0;
}
```
**3. Else if**
- You can handle additional complex decsion making by adding an if statement to your else clause
```
if (expression 1)
else
  if (expression 2)
    program statement 2
  else
    program statement 3
```
- The above extends the if statement from a two-valued logic decision to a three-valued logic decision
  - Formatted using the else if contruct.
- You can rewrite this code to use an **else if**:
```
if (expression 1)
  program statement 1
else if (expression 2)
  program statement 2
else
  program statement 3
```
- Example:
```
// Program to implement the sign function

#include <stdio.h>

int main()
{
    int number, sign;
    printf("Enter your number to be tested: ");
    scanf ("%i", &number);

    if (number < 0)
        sign = -1;
    else if (number == 0)
        sign = 0;
    else // Must be positive
        sign = 1;
    
    printf("Sign = %i\n", sign);

    return 0;
}
```
**4. Nested If-else statement**
- A nested if-else statement means you can use one if or else if statement inside another if or else if statement(s)

```
if(boolean_expression 1)
{
    /* Executes when the boolean expression 1 is true */

    if(boolean_expression 2)
    {
        /* Executes when the boolean expression 2 is true */
    }
}
```
- Example:
```
if(gameIsOver == 0)
    if(playerToMove == YOU)
        printf("Your Move\n");
    else
        printf("My Move\n");
else
    printf("The game is over\n");
```

**5. The conditional operator (ternary statement)**
- The conditional operator is an unique operator
  - Unlike all other operators in C
  - Most operators are either unary or binary operators
  - Is a ternary operator (takes three operands)
- The two symbols that are used to denote this operator are the question mark ```?``` and the colon ```:```
- The first operand is placed before the ```?```, the second between the ```?``` and the ```:```, and the third after the ```:```
  - Condition ```?``` expression1 ```:``` expression2
- The conditional operator evalutes to one of two expressions, depending on whether a logical expression evaluates ```true``` or ```false```
- Notice how the operator is arranged in relation to the operands
  - The ```?``` character follows the logical expression, condition
  - On the right of ```?``` are two operands. expression1 and expression2, that represent choices.
  - The value that results from the operation will be the value of expression1 if condition evaluates to ```true```, or the value of expression2 if condition evaluates to ```false```.
- Example:
```
x = y > 7 ? 25 : 50;
```
- Results in x being set to ```25``` if y is greater than ```7```, or to ```50``` otherwise.
- It will be the same as:
```
if(y > 7)
{
    x = 25;
}
else
{
    x = 50;
}
```
- An expression for the maximum of minimum of two variables can be written very simply using the conditional operator.
---

### Summary Section (Summary of Notes)

