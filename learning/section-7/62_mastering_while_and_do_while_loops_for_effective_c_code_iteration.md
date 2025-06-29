# Section 7: Mastering Program Flow Control with C Language Constructs

## Topic: Mastering While and Do-While Loops for Effective C Code Iteration

## Date: 29/06/2025

### Notes Section (Main Notes)

**1. While loop**
- The mechanism for repeating a set of statements allows execution for aslong as a specified logical expression evalues to ```true```.
- The general syntax for the while loop is as follows (one statement in body):
```
while (expression)
  statement1;
OR
while (expression)
{
  statement1;
  statement2;
}
```
- The condition for continuation of the while loop is tested at the start (top of the loop)
  - Pre-test loop
- If expression starts out ```false```, none of the loop statements will be executed
  - If you answer the first question "No, I'm not hungry," then you don't get to eat any sandwiches at all, and you move straight to the coffee.
- If the loop condition starts out as ```true```, the loop body must contain a mechanism for changing this if the loop is to end.

**2. Counter Controlled While loop Example**
```
#include <stdio.h>

int main()
{
    int count = 1;

    while (count <= 5){
        printf("%i\n", count);
        ++count;
    }
    return 0;
}
```
**3. Logic controlled while loop example**
```
#include <stdio.h>

int main()
{
    int num = 0;
    scanf("%d", &num);

    while (num != -1){
        /* loop actions */
        scanf("%d", &num);
    }
    return 0;
}
```

**4. Do-while loop**
- In the while loop, the body is executed while the condition is ```true```
- The do-while loop is a loop where the body is executed for the first time unconditionally
  - Always guaranteed to execute at least once
  - Condition is at the bottom (post-test loop)
- After initial execution, the body is only executed while the condition is ```true```
- Example:
```
do
  statement
while (expression);

do
{
  prompt for password
  read user input
} while (input not equal to password);
```

**5. Use cases for each type of loop**
- Firstm decide whether you need a pre or post test loop
  - Usually will be a pre test loop (```for``` or ```while```), a bit better option in most cases
  - It is better to look before you leap (or loop) than after
  - Easier to read if the loop test is found at the beginning of the loop
  - In many uses, it is important that the loop be skipped entirely if the test is not initially met.
  - So, you should use a ```for``` or a ```while```
    - A matter of taste, because what you can do with one, you can do with the other
    - To make a ```for``` loop like a ```while```, you can omit the first and third expressions.
    - ```for(;test;)``` is the same as ```while(test)```
- To make a ```while``` like a ```for```, preface it with an initialization and include update statements
```
initialize;
while(test)
{
  body;
  update;
}
```
is the same as
```
for(initialize; test; update)
  body;
```
- A ```for``` loop is more appropriate when the loop involves initializing and updating a variable.
- A while loop is beteer when the conditions are otherwise
- We usually use the ```while``` loop  for logic controlled loops and the ```for``` loop for counter controlled loops
  ``` while(scanf("%i", &num) == 1)```

  ```for(count = 1; count <= 100; count++)```

---

### Summary Section (Summary of Notes)

