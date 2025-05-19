# Section 5: Variables and Data Types in C: Declaration, Initialization, and Usage

## Topic: Fundamental Data Types in C: int, float, double, and _Bool Explained

## Date: 19/05/2025

### Notes Section (Main Notes)

**1. Overview**
- We understand that C supports many different types of variables and each type of variable is used for storing kind of data
    - Types that sotre integers
    - Types that store nonintegral numerical values
    - Types that store characters
- Some exampelos of basic data types in C are:
    - ```int```
    - ```float```
    - ```double```
    - ```char```
    - ```_Bool```
- The different between the types is in the amount of memory they occupy and the range of values they can hold
    - The amount of storage that is allocated to store a particular type of data
    - Depends on the computer you are running (machine-dependent)
    - An integer might take up 32 bits on your computer, or perhaps it might be stored in 64 bits.

**2. int**
- A variable of type ```int``` can be used to contain integral values only (values that do not contain decimal places).
- A minus sign preceding the data type and variable indicates that the value is negative.
- The ```int``` type is a **signed integer**
    - It must be an integer and it can be positive, negative or zero.
- If an integer is preceded by **a zero and the letter x** (either lowercase or uppercase) ```0x```, the value is taken as being expressed in hexadecimal (base 16) notation
    - ```int rgbColor = 0xFFEF0D;```
- The values 158, -10, and 0 are all valid examples of integer constants
    - No embedded spaces are permitted between the digits
    - Values larger than 999 cannot be expressed using comma (```12,000``` must be written as ```12000```)

**3. float**
- A variable of type ```float``` can be used to contain floating-point numbers (values containing decimal places).
- The values ```3.*```. ```125.8```, and ```-*.001``` are all valid examples of floating-point constants that can be assigned to a variable.
- floating-point constants can also be expressed  in scientific notation
    - ```1.8e4``` is a floating-point value expressed in this notation and represents the value **1.8 x 10 to the power of 4**.

**4. double**
- The double type is the same as type ```float```, only with roughly twice the precision
    - Used whenever the range provided by a float variable is not sufficient.
    - Can store twice as many significant digits.
    - Most computers represent double values using 64 bits.
- All floating-point constants are taken as double values by the C compiler.
- To explicitly express a float constant, append either an f or F to the end of the number
    - ```12.5f```

**5. _Bool**
- The ```_Bool``` data type can be used to store just the values ```0``` or ```1```
    - Used for indicating an **on/off**, **yes/no**, **true/false** situation (binary choices).
- ```_Bool``` variables are used in programs that need to indicate a **Boolean condition**.
    - A variable of this type might be used to indicate whether all data has been read from a file.
    - ```0``` is ued to indicated a **false** value.
    - ```1``` indicates a **true** value.
- This data type is only in **C89** standard. If you're using a **C99** compiler, you can actually use the ```bool``` data type.
    - All you have to do is to have an ```#include <stdbool.h>```. This is going to have a macro that allows you to use different data type, the traditional ```bool``` data type.
    - ```bool myBoolean = true;```
**6. Other Data Types**
- The ```int``` type will probably meet most of your integer needs when beginning in C
- However, C offers many other integer types
    - Gives the programmer the option of matching a type to a particular use case
    - Integer types vary in the range of values offered and in whether negative numbers can be used.
- C offers three adjective keywords to modify the basic integer type (can also be used by itself)
    - ```short```, ```long```, and ```unsigned```
- The type ```short int```, or ```short``` many use less storage than ```int```, thus saving space when only small numbers are needed
    - Can be used when the program needs a lot of memory and the amount of available memory is limited.
- The type ```long int```, or ```long```, may use more storage than ```int```, thus enabling you to express larger integer values.
- The type ```long long int```, or ```long long ``` may use more storage than ```long```
    - A constant value of type ```long int``` is formed by optionally appending the letter ```L``` (upper - or lowercase) onto the end of an integer constant
        - ``` long int numberOfPoints = 131071100L;```
- Type specifies can also be applied to ```double```
    - ``` long double US_deficit_2017;```
- A ```long double constant``` is written as a floating constant with the letter ```l``` or ```L``` immediately following
    - ```1.234e+7L```
- The type ```unsigned int```, or ```unsigned```, is used for variables that have only nonnegative values (positive)
    - ```unsigned int counter;```
    - The accuracy of the integer variable is extended.
    - IF you try to create an ```unsigned int``` and assign a negative number, the compiler should complain.
- The keyword ```signed``` can be used with any of the signed types to make your intent explicit
    - ```short```, ```short int```, ```signed short```, and ```signed short int``` are all names for the same type.
- **Note**: These all depend on the computer platform you are using in the architecture


---

### Summary Section (Summary of Notes)

