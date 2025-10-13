# Section 7: Mastering Program Flow Control with C Language Constructs

## Topic: Initializing Arrays in C: Syntax, Partial, and Designated Values

## Date: 01/07/2025

### Notes Section (Main Notes)

**1. Initializing an array**
- You will want to assign initial values for the elements of your array most of the time.
  - Defining initial values for array elements makes it easier to detect when things go wrong.
- Just as you can assign initial values to variables when they are declared, you can also assign initial values to an array's elements.
- To initialize an array's values, simply provide the values in a list
  - Values in the list are separated by commas and the entire list is enclosed in a pair of braces.
```
int counters[5] = {0, 0, 0, 0, 0};
```
- Declares an array called counters to contain five integer values and initializes each of these elements to zero
```
int integers[5] = {0, 1, 2, 3, 4};
```
- It's not necessary to completely initialize an entire array.
- If fewer initial values are specified, only an equal number of elements are initialized.
  - Remaining values in the array are set to zero
```
float sample_data[500] = {100.0, 300.0, 500.5};
```
- Initializes the first three values of ```sample_data``` to ```100.0```, ```300.0```, and ```500.5```, and set the remaining 497 elements to ```0```

**2. Designated Initializers**
- C99 added a feature called designated initializers
  - Allows you to pick and choose which elements are initialized.
- By enclosing an element number in a pair of brackets, specific array elements can be initialized in any order.

```
float sample_data[500] = {[2] = 500.5, [1] = 300.0, [0] = 100.0};
```
- Initilizes the ```sample_data``` array to ```100.0```, ```300.0```, and ```500.5``` for the first three values.
```
int arr[6] = {[5] = 212}; // Initialize arr[5] to 212
```
**3. Repeating an initial value**
- C does not provide any shortcut mechanisms for initializing array elements.
- There is no way to specify a repeat count
- If it were desired to initially set all 500 values of ```sample_data``` to ```1```, all 500 would have to be explicitly assigned.
- To solve this problem, you will want to initialize the array inside the program using a loop.


---

### Summary Section (Summary of Notes)

