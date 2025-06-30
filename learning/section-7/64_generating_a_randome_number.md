# Section 7: Mastering Program Flow Control with C Language Constructs

## Topic: Effective Loop Management: Nested Loops and Control with Break/Continue

## Date: 30/06/2025

### Notes Section (Main Notes)

**1. Generating a random number**
- To generate a random number from 0-20
  - Include the correct system libraries
    - ```#include <stdlib.h>```
    - ```#include <time.h>```
  - Create a time variable
    - ```time_t t;```
  - Initialize the random number generator
    - ```srand((unsigned) time(&t))```
  - Get the random number (0-29) and store in an int variable
    - ```int randomNumber = rand() % 21;```
---

### Summary Section (Summary of Notes)

