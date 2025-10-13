# Section 7: Mastering Program Flow Control with C Language Constructs

## Topic: Repetitive Code Execution: In-depth Guide to Using For Loops in C language

## Date: 27/06/2025

### Notes Section (Main Notes)

**1. Overview**
- The C programming language has a few constructs specifically designed to handle these situations when you need to use the same code repeatedly.
- You can repeat a block of statements until some condtion is met or a specific number of times
- Repeating code without a condition is a forever/infinite loop
- The number of times that a loop is repeated can be controlled simply by a count
  - Repeating the statement block a given number of time (counter controlled loop)
- The number of times that a loop is repeated can depend on when a condition is met
  - The user enter "quit"

**2. For loop**
- You typically use the **for loop** to execute a block of statements a given number of times
- If you want to display the numbers from 1 to 10
  - Instead of writing ten statements that call ```printf()```, you would use a for loop
```
for(int count =1; count <= 10; ++count)
{
  printf("%d", count);
}
```
- The for loop condition is controlled by what appears between the parentheses that follow the keyword for 
  - The three control expressions that are seperated by semicolons control the operation of the loop
- The action that you want to repeat each time the loop repeats is the block containing the statement that calls ```printf()``` (body of the loop)
  - For single statements, you can omit the braces

**3. For syntax**
- The general pattern for the ```for loop``` is:
```
for (starting_condition; continuation_condition; action_per_iteration)
  loop statement;
```
- The statement to be repeated is represented by loop_statement
  - Could equally well be a block of several statements enclosed between braces.
- The ```starting_condition``` usually (but not always) sets an initial value to a loop control variable
  - The loop control variable is typically a counter of some kinh that tracks how often the loop has been repeated.
  - Can also declare and initialize several variables of the same type here with the declarations separated by commas
  - Variables will be local to the loop and will not exist once the loop ends.
  - If you use any C99 compiler, you have to declare the variables outside of the for statement and then you would just initialize them
- The ```continuation_condition``` is a logical expression evaluating to ```true``` or ```false```
  - Determines whether the loop should continue to be executed
  - As long as this condition has the value ```true```, the loop continues
  - Typically checks the value of the loop control variable
  - You can put any logical or arithmetic expression here as long as you know what you are doing
- The ```continuation_condition``` is tested at the beginning of the loop rather that at the end
  - Means that the ```loop_statement``` will not be executed at all if the ```continuation_condition``` starts out as ```false```
- The ```action_per_iteration``` is executed at the end of each loop iteration
  - Usually an increment of decreement of one or more loop control variables
  - Can modify several variables here, just need to use commas to separate
- Example:
```
for(int i= = 1, j = 2; i <= 5, ++i, j = j + 2)
  printf("%5d", i*j);
```
The output produced by this fragment will be the values 2, 8, 18, 32, and 50 on a single line.

**Note:** As far as **pre** or **post** incremenation whether the ```++``` is before the variable of after the variable, you don't have to worry about it because it's only going to get incremented or decremented after the iteration of the loop. 

**4. Infinite loop**
- you have no obligation to put any parameters in the for loop statement
```
for(;;)
{
  /* statements */
}
```
- The condition for continuing the loop is absent, the loop will continue
  - Sometimes useful for monitoring data or listening for connections.

---

### Summary Section (Summary of Notes)

