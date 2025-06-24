# Section 7: Mastering Program Flow Control with C Language Constructs

## Topic: Getting Started with Program Control Flow in C: An Overview

## Date: 24/06/2025

### Notes Section (Main Notes)

**1. Overview**

- The statements inside your source files are generally executed from top to bottom, in the order that they appear
- Control flow statements, however, break up the flow of execution by employing decision making, looping, and branching, enabling your program to conditionally execute particular blocks of code
  - Decision-making statements ```if-then```, ```if-then-else```, ```switch```, ```goto```
  - Looping statements ```for```, ```while```, ```do-while```
  - Branching statements ```break```, ```continue```, ```return```

**2. Decision making**

- Structures require that the programmer specify one or more conditions to be evaluated or tested by the program
  - If a condition is ```true``` then a statement or statements are executed.
  - If a condition is ```false``` then other statements are executed.

**3. If statements**

- **If statement**: An **if statement** consists of a boolean expression followed by one or more statements.
- **If...else statement**: An if statement can be followed by an optional else statement, which executes when the boolean expression is false.
- **Nested if statements**: You can use one if or else if statement inside another if or else if statement(s)

**4. Repeating Code**
- There may be a situation, when you need to execute a block of code several number of times
  - The statements are executed sequentially: The first statement in a fucntion is executed first, followed by the second, and so on.
- A loop statement allows us to execute a statement or a group of statements multiple times.
- Loop control statements change execution from its normal sequence
  - When execution leaves a scope, all automatic objects that were created in that scope are destroyed (```break``` and ```continue```)
- A loop becomes infinite loop if a condition never becomes ```false```
  - The ```for``` loop is traditionally used for this purpose

**5. Loops**

- **While loop**: It repeats a statement or a group of statements while a given condition is ```true```. It tests the condition before executing the loop body.
- **For loop**: It executes a sequence of statements multiple times and abbreviates the code that manages the loop variable.
- **Do...while loop**: It is similar to a while statement, except that it tests the condition at the end of the loop body.
- **Nested loops**: You can use one or more loop inside any another ```while```, ```for``` or ```do...while``` loop.

---

### Summary Section (Summary of Notes)

