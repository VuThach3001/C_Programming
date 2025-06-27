# Section 7: Mastering Program Flow Control with C Language Constructs

## Topic: Multi-way Branching: How to Use and Implement the Switch Statement in C

## Date: 27/06/2025

### Notes Section (Main Notes)

**1. Overview**
- The conditional operator and the if else statement make it easy to write programs that choose between two alternatives.
- However, manty times a program needs to choose one of several alternatives
  - You can do this by using if else if...else
  - Tedious, prone to errors
- When the value of a variable is successively compared against different values use the switch statement
  - More convenient and efficient

**2. Switch syntax**
```
switch (expression)
{
    case value1:
        program statement
        ...
        break;
    case valuen:
        program statement
        program statement
        ...
        break;
    default:
        program statement
        ...
        break;
}
```
**3. Switch statement details**
- The expression enclosed within parentheses is successively compared against the values: value1, value2,...,valuen
  - Cases must be simple constants or constant expressions.
- If a case is found whose value is equal to the value of expression then the statements that follow case are executed
  - When more than one statmeent is included, they do not have to be enclosed within braces.
- The break statement signals the end of a particular case and causes execution of the switch statement to be terminated
  - Include the break statement at the end of every case
  - Forgetting to do so for a particular case causes program execution to continue into the next cases.
- The special optional case called default is executed if the value of expression does not match any of the case values
  - Same as a "fall through" else
- Example:
```
enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
enum Weekday today = Monday;

switch (today)
{
    case Sunday:
        printf("Today is Sunday");
        break;
    case Monday:
        printf("Today is Monday");
        break;     
    case Tuesday:
        printf("Today is Tuesday");
        break;    
    default:
        printf("Whatever");
        break;
}
```
**4. Goto statement**
- The goto statement is available in C
  - Has two parts - the goto and a label name.
  - Label is named following the same convention used in naming a variable.

```
goto part2;
```
- For the above to there must be another statement bearing the ```part2``` label
- You should never need to use the **goto statement**
  - If you have a background in older version of FORTRAN or BASIC, you might have developed programming habits that depend on using ```goto```
- Example:
```
top : ch = getchar();
.
.
.
if (ch != 'y')
  goto top;
```

---

### Summary Section (Summary of Notes)

