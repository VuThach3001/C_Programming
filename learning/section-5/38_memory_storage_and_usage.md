# Section 5: Variables and Data Types in C: Declaration, Initialization, and Usage

## Topic: Introduction to Variables and Data Types in C: Memory, Storage, and Usage

## Date: 18/05/2025

### Notes Section (Main Notes)

**1. Overview**
- Remember that a program needs to store the instruction of its program and the data that it acts upon while your computer is executing that program.
    - This information is stored in memory (**RAM**: **R**andom **A**ccess **M**emory).
    - RAM's contents are lost when the computer is turned off.
    - Hard drives store persistent data.
- You can think of **RAM** as an ordered sequence of boxes
    - The **box** is full when it represents **1** or the box is empty when it represents **0**
    - Each **box** represents **one binary digit**, either 0 or 1.
    - Each **box** is called a **bit**
- **Bits** in memory are grouped into sets of eight (**byte**)
    - Each **byte** has been labled with a number (**address**)
    - The **address** of a **byte** uniquely references that byte in your computer's memory.
- Again, memory consists of a large number of **bits** that are in groups of eight (**byte**) and each **byte** has an unique **address**.
- The program will access the data usually through an identifier, but it can also use **hexadecimal addresses**.
- It will increase the efficiency of your programs if you have more memory and the memory is faster, the buses are fast so you can access the memory quicker.

**2. Variables**
- The true power of programs you create is their manipulation of data.
    - So, we need to understand the different data types you can use, as well as how to create and name variables.
- **Constants**: are types of data that do not change and retain their values throughout the life of the program.
- **Variables**: 
    - are types of data may change or be assigned values as the program runs.
    - are the names you give to the computer memory locations which are used to sotre values in a computer program.
- For example, assume you want to store two values 10 and 20 in your program and at a later stage, you want to use these two values
    - Create variables with appropriate names.
    - Store your values in thoese two variables.
    - Retrieve and use the stored values from the variables.

**3. Naming Variables**
- The rules for naming variables in C is that all names **must begin with a letter or underscore ```_```** and can be follow by any combination of letters (upper or lowercase), underscore, or the digit 0-9.
    ```
    Thach
    myFlag
    i
    J5x7
    my_data
    _anotherVariable
    ```
- The below lists some example of **invalid** variable names
    - ```temp$value```: ```$``` is not a valid character.
    - ```my flag```: embedded space is not permitted.
    - ```3Jason```: variable names cannot start with a number.
    - ```int```: int is a reserved word.
- Use meaningful names when selecting variable names
    - can dramatically increase the readability of a program and pay off in the debug and documentation phases.

**4. Data Types**
- Some types of data in programs are numbers, letters or words
    - Computer needs a way to identify and use these different kinds
- A data type represents a type of the data which you can process using your program
    - Example ```include``` ints, floats, doubles, etc.
    - Also correspond to byte sizes on the platform of your program.
- **Primitive data types** are types that are not objects and store all sorts of data.

**5. Declaring Variables**
- Declaring a variable is when you specify the type of the variable followed by the variable name
    - Specifies to the compiler how a particular variable will be used by the program.
- For example, the keyword ```int``` is used to declare the basic integer variable
    - First comes **int**, and then **chosen name of the variable**, and then the **semicolon**
        - *type-specifier variable-name;*
    - To declare more than one-variable, you can declare each variable separately, or you can follow the ```int``` with a list of names in which each name is separated from the next by a **comma**.
    - C requires that all program variables be declared before they are used in a program.
    ```
    int x;
    int x,y,z;
    ```
- The above creates variables but does not provide values for them
    - We can assign a variable a value by using the ```=``` operator.
    ```
    x = 112;
    ```
**6. Initializing Variables**
- To initialize a variable means to assign it a starting, or initial, value.
- This can be done as part of the declaration
    - Follow the variable name with the assignment operator ```=``` and the value you want the variable to have
    ```
    int x = 21;
    int y = 32, z = 14;
    int x, z = 94; /* valid, but poor, form */
    ```
    - In the last line, only z is initialized
        - It is the best to avoid putting and noninitialized 
---

### Summary Section (Summary of Notes)

