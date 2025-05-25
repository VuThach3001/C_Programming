# Section 5: Variables and Data Types in C: Declaration, Initialization, and Usage

## Topic: Enumerated Data Types (enum) and Character Representation (char) in C

## Date: 21/05/2025

### Notes Section (Main Notes)

**1. Enums**
- A data type that allows a programmer to define a variable and specify the valid values that could be stored into that variable
    - It can create a variable named "myColor" and it can only contain one of the primary colors, red, yellow, or blue, and no other values
- Your first have to define the enum type and give it a name
    - Initiated by the keyword enum.
    - Then the name of the enumerated data type.
    - The list of identifiers (enclosed in a set of curly braces) that define the permissible values that can be assigned to the type
    - ``` enum primaryColor {red, yellow, blue}; ```
    - Variables declared to be of this data type can be assigned the values red, yellow, and blue inside the program, and no other values.
- To declare a variable to be of type ```enum primaryColor```
    - Use the keyword ```enum```.
    - Followed by the enumerated type name.
    - Followed by the variable list. So the statement:
    - ``` enum primaryColor myColor, gregsColor;```
- Defines the two variables ```myColor``` and ```gregsColor``` to be of type ```primaryColor```.
    - The only permissible values that can be assigned to these variables are the name ```red```, ```yellow``` and ```blue```
    - ```myColor = red;```
- Another example:
- ``` enum month {Jan, Feb, Mar, Apr, May, June, July, Aug, Sept, Oct, Nov, Dec};```

**2. Enums as ints**
- The compiler actually treats enumeration identifiers as integer constants
    - First name in list is ```0```.
        ``` 
        enum month this Month;
        ...
        thisMonth = February;
        ```
- The value ```1``` is assigned to ```thisMonth``` (and not the name February) because it is the **second identifier** listed inside the enumeration list.
- If you want to have a specific integer value associated with an enumeration identifier, the integer can be assigned to the identifier when the data type is defined.
- ```enum direction {up, down, left = 10, right};```
- An enumerated data type direction is defined with the values ```up```, ```down```, ```left``` and ```right```.
    - ```up = 0``` because it appears first in the list.
    - ```1``` to ```down``` because it appears next.
    - ```10``` to ```left``` because it is explicitly assigned this value.
    - ```11``` to ```right``` because it appears immediately after ```left``` in the list.

**3. Char**
- Chars represent a single character such as the letter ```'a'```, the digit character ```'6'```, or a semicolon ```';'```
- Character literals use single quotes such as ```'A'``` or ```'Z'```.
- You can also declare ```char``` variables to be **unsigned**
    - Can be used to explicitly tell the compiler that a particular variable is a **signed quantity**.
- We will talk about a character ```string``` in another lecture, **much different** than a **single character**.

**4. Declaring a char**

```
char broiled; /* delcare a char variable */
broiled = 'T'; /* Ok */
broiled = T; /* No! because T is a variable */
broiled = "T"; /* No! because "T" is a string */
```
- If you omit the quotes, the compiler thinks that ```T``` is the name of a variable
- If you use double quotes, it thinks you are using a ```string```.
- You can also use the numerical code to assign values.
- ``` char grade = 65; /* Ok for ASCII, but poor style */```

**5. Escape Characters**
- C contains special characters that represent actions
    - Backspacing
    - Going to the next line
    - Making the terminal bell ring (or speaker beep)
- We can represent these actions by using special symbol sequences
    - Called **escape sequences**
- **Escape sequences** must be enclosed in single quotes when assigned to a character variable.
- ```char x = '\n';```
- And then print the variable ```x``` to advance the printer or screen one line.

---

### Summary Section (Summary of Notes)

