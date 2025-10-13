# Section 7: Mastering Program Flow Control with C Language Constructs

## Topic: Exploring Variable Length Arrays (VLAs) in C: A C99 Feature
## Date: 03/07/2025

### Notes Section (Main Notes)

**1. Variable length arrays**
- So far, all the sizes of an array have been specified using a number
- The term variable in variable-length array does not mean that you can modify the length of the array after you create it
  - A VLA keeps the same size after creation.
- Variable length arrays allow you to specifiy the size of an array with a variable when creating an array
- C99 introduced variable-length arrays primarily to allow C become a better language for numberical computing
  - VLAs make it easier to convert existing libraries of FORTRAN numerical calculation routines to C
- You can not initialize a VLA in its delclaration.

**2. Valid and invalid declarations of an array**
- ```int n = 5;```: Valid
- ```int m = 8;```: Valid
- ```float a1[5];```: Valid
- ```float a2[5*2 + 1];```: Valid
- ```float a3[sizeof(int) + 1];```: Valid
- ```float a4[-4];```: Invalid, size must be > ```0```
- ```float a5[0];```: Invalid, size must be > ```0```
- ```float a6[2.5];```: Invalid, size must be an integer
- ```float a7[(int) 2.5];```: Valid, typecast float to int constant
- ```float a8[n];```: Not allowed before C99, VLA
- ```float a9[m];```: Not allowed before C99, VLA


---

### Summary Section (Summary of Notes)

