# Section 9: Demystifying Function Parameters, Returns, and Scope in C

## Topic: Mastering Data Return from C Functions: Types and the Return Statement

## Date: 06/07/2025

### Notes Section (Main Notes)

**1. Returning data**
- In our prior example of multiply two numbers, our multiply function displayed the results of the calculation at the terminal
- You might not always want to have the results of your calculations displayed
  - Function can return data using specific syntax
  - Should be familiar from previous experience with the main function
- Let's take another look at the general form of a function
```
<Return_type> <Function_name(<List_of_parameters> - seperated by commas)>
{
  // Statements..
}
```
- The ```Return_type``` specifies the type of the value returned by the function

**2. The return type**
- You can specify the type of value to be returned by a function as any of the legal types in C
  - Include enumeration types and pointers.
- The ```return type``` can also be type ```void``` which means no value is returned.

**Note**: If you see ```void``` before the name of the function, you are not returning any data. If you see ```void``` inside the parameters list, you are not passing any data.

**3. The return statement**
- The ```return statement``` provides the means of exiting from a function 
```
return;
```
- This form of the ```return statement``` is used exclusively in a function where the return type has been declare as void
  - Does not return a value
- the more general form of the ```return statement``` is:
```
return <expression>;
```
- This form of return statement must be used when the return value type for the function has been declared as some type other than ```void```
- The value that is returned to the calling program is the value that results when expression is evaluated
  - Should be of the return type specified for the function.

**4. Returning data**
- A function that has statements in the function body but does not return a value must have the return type as ```void```
  - Will get an error message if you compile a program that contains a function with a ```void``` return type that tries to return a value.
- A function that does not have a ```void``` return type must return a value of the specified return type
  - Will get an error message from the compiler if return type is different than specified.
- If expression results in a value that's different type from the return type in the function header, the compiler will inset a conversion from the type of expression to the one requireed
  - If conversion is not possible then the compiler will produce an error message.
- There can be more than one return statement in a function
  - Each return statement must supply a value that is convertible to the type specified in the function header for the return value

**5. Invoking a function**
- You call a function by using the function name followed by the arguments to the function between parentheses.
- When you call the function, the values of the arguments that you specify in the call will be assigned to the parameters in the function
- When the function executes, the computation proceeds using the values you supplied as arguments.
- The arguments you specify when you call a function should agree in type, number, and sequence with the parameters in the function header.

**6. Invoking a function and assigning data returned**
- If the function is used as the right side of an assignment statement, the return value supplied by the function will be substituted for the function
  - Will also work with an expression
```int x = myFunctionCall();```
- The calling function doesn't have to recognize or process the value returned from a called function
  - Up to you how you use any values returned from function calls.

---

### Summary Section (Summary of Notes)

