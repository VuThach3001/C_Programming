# Section 6: Operators in C: Fundamentals and Categories

## Topic: Special Operators in C: Exploring the Cast and sizeof operators

## Date: 10/06/2025

### Notes Section (Main Notes)

**1. Type Conversions**
- Conversion of data between different types can happen automatically (implicit conversion) by the language or explicit by the program.
    - To effectively develop C programs, you must understand the rules used for the implicit conversion of floating-point and integer values in C
- Normally, you shouldn't mix types, but there are occasions when it is useful
    - Remember, C is flexible, gives you the freedom, but, do not abuse it
- Whenever a floating-point value is assigned to an integer variable in C, the decimal portion of the number gets truncated.

```int x = 0;```

```float f = 12.125;```

```x = f; // Value stored in x is the number 12, only the int portion is stored. ```

- Assigning an integer variable to a floating variable does not cause any change in the value of the number
    - Value is converted by the system and stored in the floating variable.
- When performing integer arithmetic
    - If two operands in an expression are integers then any decimal portion resulting from a division operation is discarded, even if the result is assigned to a floating variable.
    - If one operand is an int and the other is a float then the operation is performed as a floating point operation

**2. The Cast Operator**
- You should usually steer clear of automatic **type conversion**, especially of demotion
    - Better to do an explicit conversion
- It is possible for you to demand the precies type conversion that you want
    - Called a cast and consist of preceding the quantity with the name of the desired type int parentheses
    - Parentheses and type name together constitute a cast operator, i.e ```(type)```
    - The actual type desired, such as ```long```, is substituted for the word type
- The type cast operator has a higher precedence than all the arithmetic operators except the unary minus and unary plus

    ```(int) 21.51 + (int) 26.99``` is evaluated in C as ```21 + 26```

**3. Sizeof operator**
- You can find out how many bytes are occupied in memory by a given type by using the **sizeof operator**
    - **Sizeof** is a special keyword in C
- **Sizeof** is actually an operator, and not a function
    - Evaluated at compile time and not at runtime, unless a variable-length array is used in its argument
- The argument to the **sizeof operator** can be a variable, an array name, the name of a basic data type, the name of a derived data type, or an expression.
- ```sizeof(int)``` will result in the number of bytes occupied by a variable of type **int**
- You can also apply the **sizeof operator** to an expression
    - Result is the size of the value that results from evaluating the expression
- Use the **sizeof operator** wherever possible to avoid having to calculate and hard-code sizes into your program

**4. Other operators**
- The asterisk ```*``` is an operator that represents a pointer to a variable ```*a;```
- ```?``` is an operator used for comparisons
    - If condition is :```true ? x : y```, it will tell you that if this is true then value is x, otherwise value is y
    - Name is the ternary operator

---

### Summary Section (Summary of Notes)

