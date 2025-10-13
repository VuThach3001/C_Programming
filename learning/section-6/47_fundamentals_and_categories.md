# Section 6: Operators in C: Fundamentals and Categories

## Topic: Introduction to Operators in C: Fundamentals and Categories

## Date: 07/06/2025

### Notes Section (Main Notes)

**1. Overview**
- Operators are functions that use a symbolic name
    - Perform mathematical or logical functions
- Operators are predefined in C, just like they are in most other languages, and most operators tend to be combined with the infix style

- A **logical operator** (sometimes called a **Boolean operator**) is an operator that returns a **Boolean** reasult that's based on the **Boolean** result of one or two other expressions. 
- An **arithmetic operator** is a mathematical function that takes two operands and performs a calculation on them.
- Other operators include assignment, relational (```<```, ```>```,```!=```), bitwise(```>>```,```>>```,```~```)

**2. Expressions and Statements**
- **Statements** form the basic program steps of C, and most statements are constructed from expressions
- An **expression** consists of a combination of **operators** and **operands**
    - **operands** are what an **operator** operates on
    - **operands** can be constants, variables, or combinations of the two
    - every **expression** has a value
- Here are some examples of **expressions**
    
    ```-6```: ```-``` is an actual operator in C and it is an **unary** operator
    
    ```4+21```: this is called **expression** and it consists the operator ```+``` and it's between 2 constants ```4``` and ```21```

    ```a*(b+c/d)/20)```: this is a little complicated expression, contains many operators: ```*``` for multiplication, ```+``` for addition and ```/``` for division

    ```q=5+2```: an **assignment*** which is ```q``` equals ```5``` times ```2```

    And other examples:

    ```x = ++q % 3```

    ```q>3```

- Statements are the building blocks of a program (**declaration**)
    - A program is a series of statements with special syntax ending with a semicolon (**simple statements)
    - A complete instruction to the computer
- Declaration statement: ```int Jason;```
- Assignment statement: ```Jason=5;```
- Function call statement: ```printf("Jason");```
- Structure Statement: ```while (Jason < 20) Jason = Jason + 1;```
- Return Statement: ```return 0;```
- C considers any expression to be a statement if you append a semicolon (**expression statements**)
    - ```8;```, ```3-4;``` are perfectly valid in C

**3. Compound Statement**
- Two or more statements grouped together by enclosing them in braces ```{}``` (**block**)
```
int index = 0;
while (index < 10)
{
    printf("hello");
    index = index + 1;
}
```

---

### Summary Section (Summary of Notes)

